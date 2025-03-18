// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponent/SurfaceStateComponent.h"
#include "DrawDebugHelpers.h"
#include "NiagaraComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Components/CapsuleComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"


USurfaceStateComponent::USurfaceStateComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}



void USurfaceStateComponent::BeginPlay()
{
	Super::BeginPlay();

	
	BubbleStates = EBubbleStates::Default;
	
	// Find components on the owning actor
	StaticMeshComponent = GetOwner()->FindComponentByClass<UStaticMeshComponent>();
	
	UpdateMeshAndNiagara();
	
}


// Called every frame
void USurfaceStateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	DetectSurface();
}
void USurfaceStateComponent::ChangeState(EBubbleStates NewState)
{
	if (BubbleStates != NewState)
	{
		BubbleStates = NewState;
		UpdateMeshAndNiagara();
	}
}

void USurfaceStateComponent::UpdateMeshAndNiagara()
{
	if (!StaticMeshComponent || !DefaultMaterial)
	{
		return;
	}

	switch (BubbleStates)
	{
	case EBubbleStates::Default:
		StaticMeshComponent->SetMaterial(0, DefaultMaterial);
		break;

	case EBubbleStates::Fire:
		StaticMeshComponent->SetMaterial(0, FireMaterial);
		// Play Fire Sound at Actor's Location
		if (FireSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetOwner()->GetActorLocation());
		}
		break;

	case EBubbleStates::Oil:
		StaticMeshComponent->SetMaterial(0, OilMaterial);
		if (FireSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, OilSound, GetOwner()->GetActorLocation());
		}
		break;

	case EBubbleStates::Sap:
		StaticMeshComponent->SetMaterial(0, SapMaterial);;
		if (FireSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, SapSound, GetOwner()->GetActorLocation());
		}
		break;

	case EBubbleStates::Water:
		StaticMeshComponent->SetMaterial(0, WaterMaterial);;
		if (WaterSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, WaterSound, GetOwner()->GetActorLocation());
		}
		break;

	default:
		StaticMeshComponent->SetMaterial(0, DefaultMaterial);
		break;
	}

}

void USurfaceStateComponent::DetectSurface()
{
	//Safety Check
	if (!GetOwner())
	{
		return;
	}
	UCapsuleComponent* Capsule = GetOwner()->FindComponentByClass<UCapsuleComponent>();
	//Safety Check
	if (!Capsule) return;

	FVector BubbleLocation = Capsule->GetComponentLocation() - FVector(0, 0, Capsule->GetScaledCapsuleHalfHeight());
	float SphereRadious = 50.f;

	//DrawDebugSphere(GetWorld(), BubbleLocation, SphereRadious, 12, FColor::Blue, false, 1.0f, 0, 2.0f);
	FHitResult HitResult;
	FCollisionQueryParams TraceParams(FName(TEXT("SurfaceTrace")), true, GetOwner());
	TraceParams.bReturnPhysicalMaterial = true;
	TraceParams.AddIgnoredActor(GetOwner());
#
	// Perform a line trace
	if (GetWorld()->SweepSingleByChannel(HitResult, BubbleLocation, BubbleLocation, FQuat::Identity,ECC_Visibility,FCollisionShape::MakeSphere(SphereRadious), TraceParams))
	{
		if (HitResult.PhysMaterial.IsValid())
		{
			TObjectPtr<UPhysicalMaterial> HitMaterial = HitResult.PhysMaterial.Get();

			AActor* HitActor = HitResult.GetActor();
			
			// Check the material and change state
			if (HitMaterial == SapSurface)
			{
				ChangeState(EBubbleStates::Sap);
				UE_LOG(LogTemp, Warning, TEXT("Sap"));
			}
			else if (HitMaterial == WaterSurface)
			{
				ChangeState(EBubbleStates::Water);
			}
			else if (HitMaterial == FireSurface && EBubbleStates::Oil == BubbleStates)
			{
				ChangeState(EBubbleStates::Fire);
				UE_LOG(LogTemp, Warning, TEXT("Fire"));
			}
			else if (HitMaterial == OilSurface && BubbleStates != EBubbleStates::Fire)
			{
				ChangeState(EBubbleStates::Oil);
				UE_LOG(LogTemp, Warning, TEXT("Oil"));
			}

			if (!HitActor) return;
			if (BubbleStates == EBubbleStates::Fire && HitMaterial == FlammableSurface)
			{
				UE_LOG(LogTemp, Warning, TEXT("Flammable object hit! Destroying..."));
				HitActor->Destroy();
			}
		}


	RunBlueprintCodeAfterCPlusPlus();	
		
	}
}

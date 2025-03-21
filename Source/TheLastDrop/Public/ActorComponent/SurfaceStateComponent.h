// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurfaceStateComponent.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;

UENUM(BlueprintType)
enum class EBubbleStates : uint8
{
	Default UMETA(DisplayName = "Default"),
	Sap UMETA(DisplayName = "Sap"),
	Fire UMETA(DisplayName = "Fire"),
	Oil UMETA(DisplayName = "Oil"),
	Flammable UMETA(DisplayName = "Flammable"),
	Water UMETA(DisplayName = "Water"),
	Ice UMETA(DisplayName = "Ice"),
};

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THELASTDROP_API USurfaceStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	USurfaceStateComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
private:
	// PROPERTIES
	UPROPERTY(BlueprintReadWrite, Category = "Surface States", meta = (AllowPrivateAccess = "true"))
	EBubbleStates BubbleStates;
	//Physics Materials
	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* SapSurface;

	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* FireSurface;

	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* OilSurface;

	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* FlammableSurface;

	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* WaterSurface;

	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* IceSurface;

	
	// Niagara systems for each state
	UPROPERTY(EditAnywhere)
	UMaterial* DefaultMaterial;

	UPROPERTY(EditAnywhere)
	UMaterial* SapMaterial;

	UPROPERTY(EditAnywhere)
	UMaterial* FireMaterial;

	UPROPERTY(EditAnywhere)
	UMaterial* WaterMaterial;

	UPROPERTY(EditAnywhere)
	UMaterial* OilMaterial;

	UPROPERTY(EditAnywhere)
    UMaterial* IceMaterial;
	// Reference to the owning actor's Static Mesh and Niagara components
	UPROPERTY()
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundBase* FireSound;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundBase* SapSound;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundBase* OilSound;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundBase* WaterSound;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundBase* IceSound;

	//FUNCTIONS

	void ChangeState(EBubbleStates NewState);

	void UpdateMeshAndNiagara();

	void DetectSurface();


		
};

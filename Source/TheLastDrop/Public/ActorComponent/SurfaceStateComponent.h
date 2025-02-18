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
	Default,
	Electrocuted,
	Fire,
	Oil,
	Water
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
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
	UPROPERTY(EditAnywhere)
	EBubbleStates BubbleStates;
	//Physics Materials
	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* ElectroSurface;

	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* FireSurface;

	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* OilSurface;

	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* WaterSurface;

	// Niagara systems for each state
	UPROPERTY(EditAnywhere)
	UNiagaraSystem* DefaultNiagaraSystem;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* ElectroNiagaraSystem;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* FireNiagaraSystem;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* OilNiagaraSystem;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* WaterNiagaraSystem;

	// Reference to the owning actor's Static Mesh and Niagara components
	UPROPERTY()
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY()
	TObjectPtr<UNiagaraComponent> NiagaraComponent;

	//FUNCTIONS

	void ChangeState(EBubbleStates NewState);

	void UpdateMeshAndNiagara();

	void DetectSurface();


		
};

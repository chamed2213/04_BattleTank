// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"

#include "TankAimingComponent.generated.h"

class UTankBarrel;
class UTankTurret;

UCLASS( ClassGroup=(Component), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//Aim at Reticle
	void AimAt(FVector HitLocation, float LaunchSpeed);
	//Set Turret Static Mesh
	void SetTurretReference(UTankTurret * TurretToSet);
	//Set Barrel as a StaticMesh
	void SetBarrelReference(UTankBarrel * BarrelToSet);
	//Move Turret on the towards the Reticle
	void MoveTowards(FVector AimDirection);
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	

private:
	UTankBarrel * Barrel = nullptr;
	UTankTurret * Turret = nullptr;
};

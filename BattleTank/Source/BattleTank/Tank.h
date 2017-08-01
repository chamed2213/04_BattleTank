// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankAimingComponent.h"
#include "Tank.generated.h"

class UTankBarrel;

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	class UTankAimingComponent* TankAimingComponent = nullptr;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable)
	void SetBarrelReference(UTankBarrel * BarrelToSet );
	//Tank Projectile LaunchSpeed
	UPROPERTY(EditAnywhere, Category = Firing)
		float LaunchSpeed = 100000;

};

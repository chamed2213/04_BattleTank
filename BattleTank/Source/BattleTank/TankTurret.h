// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	//-1 max for lefward movement and +1 for rigthward movement
	void Rotate(float RelativeSpeed);

private:
		UPROPERTY(EditAnywhere, Category = Parameters)
		float MaxDegreesPerSecond = 20.f; //Default	
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GameFramework/Pawn.h"
#include "BattleTank/Tank.h"
#include "Engine/World.h"

#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	ATank* GetControlledTank() const;
	void BeginPlay() override;
	ATank* GetPlayerTank();
	
	
};
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "BattleTank/Tank.h"


#include "TankPlayerController.generated.h"


UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
protected: 
	ATank* GetControlledTank() const;
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	//This Will make the tank move the barrel towards the crosshair
	void AimTowardsCrosshair();
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;
};

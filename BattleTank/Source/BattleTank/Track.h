// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Track.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Component), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = Input)
	void Throttle(float Throttle);

private:
	//Max force per Track in Newtons
	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDrivingForce = 4000000.f;// Assume 40tonne, and 1 g of acceleration
		
};

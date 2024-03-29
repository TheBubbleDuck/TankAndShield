// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TurretBase.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), hidecategories = ("Lighting"))
class TANKANDSHIELD_API UTurretBase : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:

	void Rotate(float RelativeSpeed);
	
private:

	UPROPERTY(EditAnywhere, Category = Setup)
    float MaxDegreesPerSecond = 40.f;
};

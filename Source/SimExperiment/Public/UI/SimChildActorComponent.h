// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "Interface/SimUIChildInterface.h"
#include "SimChildActorComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = Utility, hidecategories = (Object, LOD, Physics, Lighting, TextureStreaming, Activation, "Components|Activation", Collision), meta = (BlueprintSpawnableComponent))
class SIMEXPERIMENT_API USimChildActorComponent : public UChildActorComponent,public ISimUIChildInterface
{
	GENERATED_BODY()

public:
	USimChildActorComponent();

public:
	void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void SimUIOnPressed();




public:

	virtual const EUxtButtonState GetState() const override;
	
};

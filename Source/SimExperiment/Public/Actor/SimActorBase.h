// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/GrabbableInterface.h"
#include "SimActorBase.generated.h"

UCLASS()
class SIMEXPERIMENT_API ASimActorBase : public AActor, public IGrabbableInterface
{
	GENERATED_BODY()
	
public:	

	ASimActorBase();

public:

	virtual UUxtGenericManipulatorComponent* GetUxtGenericManipulatorComponent() const override;






public:
	void SetCanGrab(bool bCanGrab = true);


protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY()
	UUxtGenericManipulatorComponent* UxtGenericManipulator;
};

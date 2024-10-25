// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "SimPawn.generated.h"

class UCameraComponent;
class AUxtHandInteractionActor;

/**
 * 
 */
UCLASS()
class SIMEXPERIMENT_API ASimPawn : public ADefaultPawn
{
	GENERATED_BODY()
	
public:
	ASimPawn();

public:



	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "SimPawn")
	UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SimPawn")
	AUxtHandInteractionActor* UxtHandInteractionActorL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SimPawn")
	AUxtHandInteractionActor* UxtHandInteractionActorR;

protected:


	virtual void BeginPlay() override;

};

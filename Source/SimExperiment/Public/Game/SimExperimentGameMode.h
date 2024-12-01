// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SimExperimentGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SIMEXPERIMENT_API ASimExperimentGameMode : public AGameModeBase
{
	GENERATED_BODY()


public:
	ASimExperimentGameMode();

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;


	void SpawnLight();
	
	
};

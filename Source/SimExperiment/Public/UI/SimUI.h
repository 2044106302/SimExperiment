// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Controls/UxtPressableButtonComponent.h"
#include "SimUI.generated.h"

class UUxtUIElementComponent;
class UUxtPalmUpConstraintComponent;
class UUxtBackPlateComponent;

UCLASS()
class SIMEXPERIMENT_API ASimUI : public AActor
{
	GENERATED_BODY()
	
public:	
	ASimUI();
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	UUxtUIElementComponent* UxtUIElementComponent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	UUxtPalmUpConstraintComponent* UxtPalmUpConstraintComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	UUxtBackPlateComponent* UxtBackPlateComponent;


protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:

    UFUNCTION()
	void UxtPalmUpConstraintOnConstraint();

	UFUNCTION()
	void UxtPalmUpConstraintOnDeactivated();
};

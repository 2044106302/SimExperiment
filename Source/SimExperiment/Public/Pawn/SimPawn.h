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

	

	UFUNCTION()
	void HandOnClicked(AActor* TouchedActor , FKey ButtonPressed);

	void SetTipsInfo(const FText& NewTipsInfo) const;
	
public:
    	void ResetUxtHandInteraction();
protected:

	// 设置 默认 的 提示
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="DefaultProperty")
	FText DefaultTips;

	virtual void RerunConstructionScripts() override;
	
	virtual void BeginPlay() override;


	// 操作提示 下一步改做什么
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	UChildActorComponent* TipsInfo;


	uint8 bStartGame : 1;
};

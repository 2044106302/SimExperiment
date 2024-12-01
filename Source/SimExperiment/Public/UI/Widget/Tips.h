// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Tips.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class SIMEXPERIMENT_API UTips : public UUserWidget
{
	GENERATED_BODY()
protected:

	virtual void NativeConstruct() override;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* Tip;
	

};

// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widget/Tips.h"

#include "Components/TextBlock.h"

void UTips::NativeConstruct()
{
	Super::NativeConstruct();
	Tip->SetText(FText::FromString("Tip"));
}

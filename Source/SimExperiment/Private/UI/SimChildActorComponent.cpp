// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SimChildActorComponent.h"
#include "Controls/UxtPressableButtonActor.h"
#include "Controls/UxtBasePressableButtonActor.h"


USimChildActorComponent::USimChildActorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetChildActorClass(AUxtPressableButtonActor::StaticClass());
}

const EUxtButtonState USimChildActorComponent::GetState() const
{

	AUxtPressableButtonActor* PressableButtonActor = Cast<AUxtPressableButtonActor>(GetChildActor());
	check(PressableButtonActor);
	return PressableButtonActor->GetButtonComponent()->GetState();
	
}

void USimChildActorComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (GetState() == EUxtButtonState::Pressed)
	{
		SimUIOnPressed();
	}

}

void USimChildActorComponent::SimUIOnPressed()
{
	UE_LOG(LogTemp, Warning, TEXT("SimUIOnPressed"));

}

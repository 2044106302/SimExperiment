// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/SimActorBase.h"
#include "Interactions/UxtGenericManipulatorComponent.h"

ASimActorBase::ASimActorBase()
{
	PrimaryActorTick.bCanEverTick = false;

	UxtGenericManipulator = CreateDefaultSubobject<UUxtGenericManipulatorComponent>(TEXT("UxtGenericManipulator"));
	SetCanGrab(false);
}

UUxtGenericManipulatorComponent* ASimActorBase::GetUxtGenericManipulatorComponent() const
{
	return UxtGenericManipulator;
}

void ASimActorBase::SetCanGrab(bool bCanGrab /*= true*/)
{
	if (bCanGrab)
	{
		UxtGenericManipulator->SetComponentTickEnabled(true);
	}
	else
	{
		UxtGenericManipulator->SetComponentTickEnabled(false);
	}

}

void ASimActorBase::BeginPlay()
{
	Super::BeginPlay();


}


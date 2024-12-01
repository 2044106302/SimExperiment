// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/SimActorBase.h"
#include "Interactions/UxtGenericManipulatorComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Pawn/SimPawn.h"
#include "Tooltips/UxtTooltipActor.h"


ASimActorBase::ASimActorBase()
{
	PrimaryActorTick.bCanEverTick = false;
	UxtGenericManipulator = CreateDefaultSubobject<UUxtGenericManipulatorComponent>(TEXT("UxtGenericManipulator"));

	// Mesh 需要添加 碰撞预设
	SetRootComponent(CreateDefaultSubobject<USceneComponent>(TEXT("Root")));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(GetRootComponent());

	UxtGenericManipulator->OnBeginGrab.AddDynamic(this,&ThisClass::OnBeginGrab);
	UxtGenericManipulator->OnEndGrab.AddDynamic(this,&ThisClass::OnEndGrab);
	UxtGenericManipulator->OneHandRotationMode = EUxtOneHandRotationMode::RotateAboutGrabPoint;
	// 添加物理模拟有问题暂时
	Mesh->SetSimulatePhysics(false);

	// Tips
	TipsInfo = CreateDefaultSubobject<UChildActorComponent>(TEXT("Tips"));
	TipsInfo->SetupAttachment(GetRootComponent());
	TipsInfo->SetChildActorClass(AUxtTooltipActor::StaticClass());

	
}

void ASimActorBase::RerunConstructionScripts()
{
	Super::RerunConstructionScripts();
	if (!bStartGame)
	{
		SetTipsInfo(DefaultName);
	}

	
}


UUxtGenericManipulatorComponent* ASimActorBase::GetUxtGenericManipulatorComponent() const
{
	return UxtGenericManipulator;
}

void ASimActorBase::Fixed() 
{
	if (UxtGenericManipulator)
	{
		UxtGenericManipulator->DestroyComponent(true);
		UxtGenericManipulator= nullptr;
		if (ASimPawn* SimPawn =  Cast<ASimPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)))
		{
			SimPawn->ResetUxtHandInteraction();
		
		}
	}
}


void ASimActorBase::BeginPlay()
{
	Super::BeginPlay();

	bStartGame = true;
	SetTipsInfo(DefaultName);
	
}

void ASimActorBase::OnBeginGrab(UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer)
{

}

void ASimActorBase::OnEndGrab(UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer)
{

}

void ASimActorBase::SetTipsInfo(const FText& NewTipsInfo) const
{
	if (AUxtTooltipActor* TooltipActor = Cast<AUxtTooltipActor>(TipsInfo->GetChildActor()))
	{
		if (NewTipsInfo.ToString().Len() == 0)
		{
			TooltipActor->SetActorHiddenInGame(true);
		}
		else
		{
			TooltipActor->SetActorHiddenInGame(false);
			TooltipActor->SetText(NewTipsInfo);
		}
		

	}

}



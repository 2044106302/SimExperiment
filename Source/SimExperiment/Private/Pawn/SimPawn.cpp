// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn/SimPawn.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Input/UxtHandInteractionActor.h"
#include "Camera/CameraComponent.h"
#include "Tooltips/UxtTooltipActor.h"

ASimPawn::ASimPawn()
{
	PrimaryActorTick.bCanEverTick = false;
	GetCollisionComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMeshComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	// Tips
	TipsInfo = CreateDefaultSubobject<UChildActorComponent>(TEXT("Tips"));
	TipsInfo->SetupAttachment(GetMeshComponent());
	TipsInfo->SetChildActorClass(AUxtTooltipActor::StaticClass());
}



void ASimPawn::BeginPlay()
{
	Super::BeginPlay();
	ResetUxtHandInteraction();
	
	bStartGame = true;
	SetTipsInfo(DefaultTips);


}

void ASimPawn::HandOnClicked(AActor* TouchedActor, FKey ButtonPressed)
{
	UE_LOG(LogTemp, Display, TEXT("HandOnClicked"));
}

void ASimPawn::SetTipsInfo(const FText& NewTipsInfo) const
{
	if (AUxtTooltipActor* TooltipActor = Cast<AUxtTooltipActor>(TipsInfo->GetChildActor()))
	{
		TooltipActor->SetText(NewTipsInfo);
	}

	
}

void ASimPawn::ResetUxtHandInteraction()
{
	if (UxtHandInteractionActorL &&  UxtHandInteractionActorL->Destroy())
	{
		UxtHandInteractionActorL = nullptr;
	}
	if (UxtHandInteractionActorR && UxtHandInteractionActorR->Destroy())
	{
		UxtHandInteractionActorR = nullptr;
	}
	
	UxtHandInteractionActorL = GetWorld()->SpawnActor<AUxtHandInteractionActor>();
	UxtHandInteractionActorR = GetWorld()->SpawnActor<AUxtHandInteractionActor>();

	UxtHandInteractionActorL->SetActorTransform(UKismetMathLibrary::MakeTransform({ 0,0,0 }, { 0,0,0 }, { 1,1,1 }));
	UxtHandInteractionActorL->SetOwner(this);
	UxtHandInteractionActorL->SetHand(EControllerHand::Left);
	

	UxtHandInteractionActorR->SetActorTransform(UKismetMathLibrary::MakeTransform({ 0,0,0 }, { 0,0,0 }, { 1,1,1 }));
	UxtHandInteractionActorR->SetOwner(this);
	UxtHandInteractionActorR->SetHand(EControllerHand::Right);

	UxtHandInteractionActorR->OnClicked.AddDynamic(this, &ASimPawn::HandOnClicked);

	
}

void ASimPawn::RerunConstructionScripts()
{
	Super::RerunConstructionScripts();
	if (!bStartGame)
	{
		SetTipsInfo(DefaultTips);
	}
}

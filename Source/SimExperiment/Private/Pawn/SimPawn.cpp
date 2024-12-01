// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn/SimPawn.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Input/UxtHandInteractionActor.h"
#include "Camera/CameraComponent.h"

ASimPawn::ASimPawn()
{
	GetCollisionComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMeshComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
}



void ASimPawn::BeginPlay()
{
	Super::BeginPlay();
	ResetUxtHandInteraction();


}

void ASimPawn::HandOnClicked(AActor* TouchedActor, FKey ButtonPressed)
{
	UE_LOG(LogTemp, Display, TEXT("HandOnClicked"));
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

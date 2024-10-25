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

	FActorSpawnParameters param;

	param.Owner = this;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::Undefined;


	UxtHandInteractionActorL = GetWorld()->SpawnActor<AUxtHandInteractionActor>();
	UxtHandInteractionActorR = GetWorld()->SpawnActor<AUxtHandInteractionActor>();

	UxtHandInteractionActorL->SetActorTransform(UKismetMathLibrary::MakeTransform({ 0,0,0 }, { 0,0,0 }, { 1,1,1 }));
	UxtHandInteractionActorL->SetOwner(this);
	UxtHandInteractionActorL->SetHand(EControllerHand::Left);

	UxtHandInteractionActorR->SetActorTransform(UKismetMathLibrary::MakeTransform({ 0,0,0 }, { 0,0,0 }, { 1,1,1 }));
	UxtHandInteractionActorR->SetOwner(this);
	UxtHandInteractionActorR->SetHand(EControllerHand::Right);


}

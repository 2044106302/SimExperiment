// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/SimWireSpawner.h"
#include "Actor/SimActorBase.h"
#include "CableComponent/Classes/CableActor.h"
#include "CableComponent/Classes/CableComponent.h"


ASimWireSpawner::ASimWireSpawner()
{
	PrimaryActorTick.bCanEverTick = false;

	SetRootComponent(CreateDefaultSubobject<USceneComponent>("Root"));
	
	Thrum1ChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("Thrum1"));
	Thrum2ChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("Thrum2"));

	Thrum1ChildActor->SetupAttachment(GetRootComponent());
	Thrum2ChildActor->SetupAttachment(GetRootComponent());

	Thrum1ChildActor->SetChildActorClass(ASimActorBase::StaticClass());
	Thrum2ChildActor->SetChildActorClass(ASimActorBase::StaticClass());
	
	CableChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("Cable"));
	CableChildActor->SetupAttachment(Thrum1ChildActor);
	CableChildActor->SetChildActorClass(ACableActor::StaticClass());
	
}

void ASimWireSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	Thrum1ChildActor->GetChildActor()->SetOwner(this);
	Thrum2ChildActor->GetChildActor()->SetOwner(this);

	CastChecked<ACableActor>(CableChildActor->GetChildActor())->CableComponent->SetAttachEndToComponent(
		CastChecked<ASimActorBase>(Thrum2ChildActor->GetChildActor())->Mesh,FName(TEXT("Junction")));

	CableChildActor->GetChildActor()->AttachToComponent(CastChecked<ASimActorBase>(Thrum1ChildActor->GetChildActor())->Mesh,
		FAttachmentTransformRules(EAttachmentRule::SnapToTarget,false),FName(TEXT("Junction")));



	bStartGame = true;
	UpDataCableMaterial();

}

void ASimWireSpawner::RerunConstructionScripts()
{
	Super::RerunConstructionScripts();
	if (!bStartGame)
	{
		UpDataCableMaterial();
		SetCableInitProperty();
	}
}

void ASimWireSpawner::Fixed()
{
	CastChecked<ASimActorBase>(Thrum1ChildActor->GetChildActor())->Fixed();
	CastChecked<ASimActorBase>(Thrum2ChildActor->GetChildActor())->Fixed();

}

void ASimWireSpawner::UpDataCableMaterial() const
{
	if (ACableActor* CableActor = Cast<ACableActor>(CableChildActor->GetChildActor()))
	{
		if (ASimActorBase* SimActorBase = Cast<ASimActorBase>(Thrum1ChildActor->GetChildActor()))
		{
			if (ASimActorBase* SimActorBase2 = Cast<ASimActorBase>(Thrum2ChildActor->GetChildActor()))
			{
				SimActorBase2->Mesh->SetMaterial(0,SimActorBase->Mesh->GetMaterial(0));
			}
			CableActor->CableComponent->SetMaterial(0,SimActorBase->Mesh->GetMaterial(0));
		}
		
	}
	
}

void ASimWireSpawner::SetCableInitProperty() const
{
	if (ACableActor* CableActor = Cast<ACableActor>(CableChildActor->GetChildActor()))
	{
		CableActor->CableComponent->CableLength = 10;
		CableActor->CableComponent->EndLocation = FVector::ZeroVector;
		CableActor->CableComponent->CableWidth = 3.0;
	}
}


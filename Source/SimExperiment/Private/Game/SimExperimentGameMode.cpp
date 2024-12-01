// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/SimExperimentGameMode.h"
#include "Pawn/SimPawn.h"

ASimExperimentGameMode::ASimExperimentGameMode()
{
	DefaultPawnClass = ASimPawn::StaticClass();
	

}

void ASimExperimentGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	
	
}

void ASimExperimentGameMode::SpawnLight()
{
	/*
	FVector SpawnLocation = FVector(0.f,0.0f,50000.0f);
	FRotator SpawnRotation = FRotator(0.f,-90.0f,0.0f);
	ASimDirectionalLight* Light1 = Cast<ASimDirectionalLight>(GetWorld()->SpawnActor(ASimDirectionalLight::StaticClass(),&SpawnLocation,&SpawnRotation));
	Light1->DirectionalLight->Intensity = 20.f;
	
	SpawnLocation = FVector(0.f,0.0f,-50000.0f);
	SpawnRotation = FRotator(0.f,90.0f,0.0f);
	AActor* Light2 = GetWorld()->SpawnActor(ASimDirectionalLight::StaticClass(),&SpawnLocation,&SpawnRotation);


	SpawnLocation = FVector(-50000.f,0.0f,0.0f);
	SpawnRotation = FRotator(0.f,0.0f,0.0f);
	AActor* Light3 = GetWorld()->SpawnActor(ASimDirectionalLight::StaticClass(),&SpawnLocation,&SpawnRotation);

	SpawnLocation = FVector(50000.f,0.0f,0.0f);
	SpawnRotation = FRotator(360.f,180.0f,0.0f);
	AActor* Light4 = GetWorld()->SpawnActor(ASimDirectionalLight::StaticClass(),&SpawnLocation,&SpawnRotation);
	*/
}

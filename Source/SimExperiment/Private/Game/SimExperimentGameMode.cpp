// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/SimExperimentGameMode.h"
#include "Pawn/SimPawn.h"

ASimExperimentGameMode::ASimExperimentGameMode()
{
	DefaultPawnClass = ASimPawn::StaticClass();
	

}

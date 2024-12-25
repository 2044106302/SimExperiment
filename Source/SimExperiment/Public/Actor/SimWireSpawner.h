// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/WeakObjectPtrTemplates.h"
#include "SimWireSpawner.generated.h"

class UChildActorComponent;
class ASimActorBase;
class ASimThrum;

UCLASS()
class SIMEXPERIMENT_API ASimWireSpawner : public AActor
{
	GENERATED_BODY()

public:
	ASimWireSpawner();
	virtual void BeginPlay() override;

protected:

	virtual void RerunConstructionScripts() override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SimWireSpawner")
	UChildActorComponent* Thrum1ChildActor;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SimWireSpawner")
	UChildActorComponent* Thrum2ChildActor;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SimWireSpawner")
	UChildActorComponent* CableChildActor;


	// 将线头固定 住
	UFUNCTION(BlueprintCallable, Category = "SimActor")
	virtual  void Fixed();
	
private:
	// 强制 材质和 Thrum1 相同
	void UpDataCableMaterial() const;
	
	void SetCableInitProperty() const;
	

	uint8  bStartGame : 1;

};

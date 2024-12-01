// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/GrabbableInterface.h"
#include "Interactions/UxtGrabTargetComponent.h"
#include "SimActorBase.generated.h"

UCLASS()
class SIMEXPERIMENT_API ASimActorBase : public AActor, public IGrabbableInterface
{
	GENERATED_BODY()
	
public:	

	ASimActorBase();
	
	virtual void RerunConstructionScripts() override;

public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	class UStaticMeshComponent* Mesh;

	virtual UUxtGenericManipulatorComponent* GetUxtGenericManipulatorComponent() const override;
	
	// 固定 Actor 代表已经 抵达预定位置 将不能再被抓取 和 移动
	virtual  void Fixed() override;
	
protected:

	virtual void BeginPlay() override;


	UFUNCTION()
	void OnBeginGrab(UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer);
	
	UFUNCTION()
	void OnEndGrab(UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer);


	void SetTipsInfo(const FText& NewTipsInfo) const;

private:

	UPROPERTY()
	UUxtGenericManipulatorComponent* UxtGenericManipulator;

protected:


	// 设置 默认 显示的 名字
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="DefaultProperty")
	FText DefaultName;

	



	// 物品信息 如果是物体默认显示为 物体的名称 如 万用表
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	UChildActorComponent* TipsInfo;
	

	uint8 bStartGame : 1;
};

#include "UI/SimUI.h"
#include "Controls/UxtUIElementComponent.h"
#include "Behaviors/UxtPalmUpConstraintComponent.h"
#include "Controls/UxtBackPlateComponent.h"

ASimUI::ASimUI()
{
	PrimaryActorTick.bCanEverTick = false;
	UxtUIElementComponent = CreateDefaultSubobject<UUxtUIElementComponent>(TEXT("UxtUIElementComponent"));
	UxtPalmUpConstraintComponent = CreateDefaultSubobject<UUxtPalmUpConstraintComponent>(TEXT("UxtPalmUpConstraintComponent"));
	UxtBackPlateComponent = CreateDefaultSubobject<UUxtBackPlateComponent>(TEXT("UxtBackPlateComponent"));
	SetRootComponent(UxtUIElementComponent);
	UxtBackPlateComponent->SetupAttachment(RootComponent);
	UxtUIElementComponent->SetVisibility(true);
	UxtUIElementComponent->SetUIVisibility(EUxtUIElementVisibility::Hide);
	UxtPalmUpConstraintComponent->bRequireFlatHand = true;
	UxtPalmUpConstraintComponent->Hand = EControllerHand::AnyHand;
	UxtPalmUpConstraintComponent->GoalMargin = 3.0f;

	UxtPalmUpConstraintComponent->OnConstraintActivated.AddDynamic(this, &ASimUI::UxtPalmUpConstraintOnConstraint);
	UxtPalmUpConstraintComponent->OnConstraintDeactivated.AddDynamic(this, &ASimUI::UxtPalmUpConstraintOnDeactivated);
}


void ASimUI::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASimUI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASimUI::UxtPalmUpConstraintOnConstraint()
{
	UxtUIElementComponent->SetUIVisibility(EUxtUIElementVisibility::Show);
}

void ASimUI::UxtPalmUpConstraintOnDeactivated()
{
	UxtUIElementComponent->SetUIVisibility(EUxtUIElementVisibility::Hide);
}


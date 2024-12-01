

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GrabbableInterface.generated.h"

class UUxtGenericManipulatorComponent;

UINTERFACE(MinimalAPI)
class UGrabbableInterface : public UInterface
{
	GENERATED_BODY()
};



class SIMEXPERIMENT_API IGrabbableInterface
{
	GENERATED_BODY()

public:

	virtual void  Fixed()  = 0;
	
	virtual  UUxtGenericManipulatorComponent* GetUxtGenericManipulatorComponent() const  = 0;


};

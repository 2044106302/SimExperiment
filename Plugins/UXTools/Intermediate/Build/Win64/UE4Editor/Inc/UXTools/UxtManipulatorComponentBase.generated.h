// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FTransform;
class UUxtGrabTargetComponent;
struct FUxtGrabPointerData;
struct FVector;
#ifdef UXTOOLS_UxtManipulatorComponentBase_generated_h
#error "UxtManipulatorComponentBase.generated.h already included, missing '#pragma once' in UxtManipulatorComponentBase.h"
#endif
#define UXTOOLS_UxtManipulatorComponentBase_generated_h

#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_17_DELEGATE \
struct _Script_UXTools_eventUxtUpdateTransformDelegate_Parms \
{ \
	USceneComponent* TargetComponent; \
	FTransform Transform; \
}; \
static inline void FUxtUpdateTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtUpdateTransformDelegate, USceneComponent* TargetComponent, FTransform Transform) \
{ \
	_Script_UXTools_eventUxtUpdateTransformDelegate_Parms Parms; \
	Parms.TargetComponent=TargetComponent; \
	Parms.Transform=Transform; \
	UxtUpdateTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_SPARSE_DATA
#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnManipulationEnd); \
	DECLARE_FUNCTION(execOnManipulationStarted); \
	DECLARE_FUNCTION(execGetTargetComponent); \
	DECLARE_FUNCTION(execApplyTargetTransform); \
	DECLARE_FUNCTION(execSetInitialTransform); \
	DECLARE_FUNCTION(execSmoothTransform); \
	DECLARE_FUNCTION(execRotateAboutAxis); \
	DECLARE_FUNCTION(execRotateAroundPivot); \
	DECLARE_FUNCTION(execMoveToTargets);


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnManipulationEnd); \
	DECLARE_FUNCTION(execOnManipulationStarted); \
	DECLARE_FUNCTION(execGetTargetComponent); \
	DECLARE_FUNCTION(execApplyTargetTransform); \
	DECLARE_FUNCTION(execSetInitialTransform); \
	DECLARE_FUNCTION(execSmoothTransform); \
	DECLARE_FUNCTION(execRotateAboutAxis); \
	DECLARE_FUNCTION(execRotateAroundPivot); \
	DECLARE_FUNCTION(execMoveToTargets);


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtManipulatorComponentBase(); \
	friend struct Z_Construct_UClass_UUxtManipulatorComponentBase_Statics; \
public: \
	DECLARE_CLASS(UUxtManipulatorComponentBase, UUxtGrabTargetComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtManipulatorComponentBase)


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUUxtManipulatorComponentBase(); \
	friend struct Z_Construct_UClass_UUxtManipulatorComponentBase_Statics; \
public: \
	DECLARE_CLASS(UUxtManipulatorComponentBase, UUxtGrabTargetComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtManipulatorComponentBase)


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtManipulatorComponentBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtManipulatorComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtManipulatorComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtManipulatorComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtManipulatorComponentBase(UUxtManipulatorComponentBase&&); \
	NO_API UUxtManipulatorComponentBase(const UUxtManipulatorComponentBase&); \
public:


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtManipulatorComponentBase(UUxtManipulatorComponentBase&&); \
	NO_API UUxtManipulatorComponentBase(const UUxtManipulatorComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtManipulatorComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtManipulatorComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UUxtManipulatorComponentBase)


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_PRIVATE_PROPERTY_OFFSET
#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_26_PROLOG
#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_PRIVATE_PROPERTY_OFFSET \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_SPARSE_DATA \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_RPC_WRAPPERS \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_INCLASS \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_PRIVATE_PROPERTY_OFFSET \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_SPARSE_DATA \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_INCLASS_NO_PURE_DECLS \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtManipulatorComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtTapToPlaceComponent;
class UUxtFarPointerComponent;
class USceneComponent;
#ifdef UXTOOLS_UxtTapToPlaceComponent_generated_h
#error "UxtTapToPlaceComponent.generated.h already included, missing '#pragma once' in UxtTapToPlaceComponent.h"
#endif
#define UXTOOLS_UxtTapToPlaceComponent_generated_h

#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_45_DELEGATE \
struct _Script_UXTools_eventUxtTapToPlaceEndPlacingDelegate_Parms \
{ \
	UUxtTapToPlaceComponent* TapToPlace; \
}; \
static inline void FUxtTapToPlaceEndPlacingDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtTapToPlaceEndPlacingDelegate, UUxtTapToPlaceComponent* TapToPlace) \
{ \
	_Script_UXTools_eventUxtTapToPlaceEndPlacingDelegate_Parms Parms; \
	Parms.TapToPlace=TapToPlace; \
	UxtTapToPlaceEndPlacingDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_44_DELEGATE \
struct _Script_UXTools_eventUxtTapToPlaceBeginPlacingDelegate_Parms \
{ \
	UUxtTapToPlaceComponent* TapToPlace; \
}; \
static inline void FUxtTapToPlaceBeginPlacingDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtTapToPlaceBeginPlacingDelegate, UUxtTapToPlaceComponent* TapToPlace) \
{ \
	_Script_UXTools_eventUxtTapToPlaceBeginPlacingDelegate_Parms Parms; \
	Parms.TapToPlace=TapToPlace; \
	UxtTapToPlaceBeginPlacingDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_43_DELEGATE \
struct _Script_UXTools_eventUxtTapToPlaceEndFocusDelegate_Parms \
{ \
	UUxtTapToPlaceComponent* TapToPlace; \
	UUxtFarPointerComponent* Pointer; \
	bool bIsStillFocused; \
}; \
static inline void FUxtTapToPlaceEndFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtTapToPlaceEndFocusDelegate, UUxtTapToPlaceComponent* TapToPlace, UUxtFarPointerComponent* Pointer, bool bIsStillFocused) \
{ \
	_Script_UXTools_eventUxtTapToPlaceEndFocusDelegate_Parms Parms; \
	Parms.TapToPlace=TapToPlace; \
	Parms.Pointer=Pointer; \
	Parms.bIsStillFocused=bIsStillFocused ? true : false; \
	UxtTapToPlaceEndFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_41_DELEGATE \
struct _Script_UXTools_eventUxtTapToPlaceUpdateFocusDelegate_Parms \
{ \
	UUxtTapToPlaceComponent* TapToPlace; \
	UUxtFarPointerComponent* Pointer; \
}; \
static inline void FUxtTapToPlaceUpdateFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtTapToPlaceUpdateFocusDelegate, UUxtTapToPlaceComponent* TapToPlace, UUxtFarPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtTapToPlaceUpdateFocusDelegate_Parms Parms; \
	Parms.TapToPlace=TapToPlace; \
	Parms.Pointer=Pointer; \
	UxtTapToPlaceUpdateFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_39_DELEGATE \
struct _Script_UXTools_eventUxtTapToPlaceBeginFocusDelegate_Parms \
{ \
	UUxtTapToPlaceComponent* TapToPlace; \
	UUxtFarPointerComponent* Pointer; \
	bool bWasAlreadyFocused; \
}; \
static inline void FUxtTapToPlaceBeginFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtTapToPlaceBeginFocusDelegate, UUxtTapToPlaceComponent* TapToPlace, UUxtFarPointerComponent* Pointer, bool bWasAlreadyFocused) \
{ \
	_Script_UXTools_eventUxtTapToPlaceBeginFocusDelegate_Parms Parms; \
	Parms.TapToPlace=TapToPlace; \
	Parms.Pointer=Pointer; \
	Parms.bWasAlreadyFocused=bWasAlreadyFocused ? true : false; \
	UxtTapToPlaceBeginFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_SPARSE_DATA
#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndPlacement); \
	DECLARE_FUNCTION(execStartPlacement); \
	DECLARE_FUNCTION(execSetTargetComponent); \
	DECLARE_FUNCTION(execGetTargetComponent);


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPlacement); \
	DECLARE_FUNCTION(execStartPlacement); \
	DECLARE_FUNCTION(execSetTargetComponent); \
	DECLARE_FUNCTION(execGetTargetComponent);


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtTapToPlaceComponent(); \
	friend struct Z_Construct_UClass_UUxtTapToPlaceComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtTapToPlaceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtTapToPlaceComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtTapToPlaceComponent*>(this); }


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUUxtTapToPlaceComponent(); \
	friend struct Z_Construct_UClass_UUxtTapToPlaceComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtTapToPlaceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtTapToPlaceComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtTapToPlaceComponent*>(this); }


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtTapToPlaceComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtTapToPlaceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtTapToPlaceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtTapToPlaceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtTapToPlaceComponent(UUxtTapToPlaceComponent&&); \
	NO_API UUxtTapToPlaceComponent(const UUxtTapToPlaceComponent&); \
public:


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtTapToPlaceComponent(UUxtTapToPlaceComponent&&); \
	NO_API UUxtTapToPlaceComponent(const UUxtTapToPlaceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtTapToPlaceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtTapToPlaceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtTapToPlaceComponent)


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetComponent() { return STRUCT_OFFSET(UUxtTapToPlaceComponent, TargetComponent); }


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_53_PROLOG
#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_PRIVATE_PROPERTY_OFFSET \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_SPARSE_DATA \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_RPC_WRAPPERS \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_INCLASS \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_PRIVATE_PROPERTY_OFFSET \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_SPARSE_DATA \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_INCLASS_NO_PURE_DECLS \
	SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtTapToPlaceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimExperiment_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h


#define FOREACH_ENUM_EUXTTAPTOPLACEMODE(op) \
	op(Head) \
	op(Hand) 
#define FOREACH_ENUM_EUXTTAPTOPLACEORIENTBEHAVIOR(op) \
	op(AlignToCamera) \
	op(AlignToSurface) \
	op(MaintainOrientation) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UXTOOLS_UxtManipulationFlags_generated_h
#error "UxtManipulationFlags.generated.h already included, missing '#pragma once' in UxtManipulationFlags.h"
#endif
#define UXTOOLS_UxtManipulationFlags_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimExperiment_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulationFlags_h


#define FOREACH_ENUM_EUXTRELEASEBEHAVIOR(op) \
	op(EUxtReleaseBehavior::None) \
	op(EUxtReleaseBehavior::KeepVelocity) \
	op(EUxtReleaseBehavior::KeepAngularVelocity) 

enum class EUxtReleaseBehavior : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtReleaseBehavior>();

#define FOREACH_ENUM_EUXTAXIS(op) \
	op(EUxtAxis::None) \
	op(EUxtAxis::X) \
	op(EUxtAxis::Y) \
	op(EUxtAxis::Z) 

enum class EUxtAxis : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtAxis>();

#define FOREACH_ENUM_EUXTAXISFLAGS(op) \
	op(EUxtAxisFlags::None) \
	op(EUxtAxisFlags::X) \
	op(EUxtAxisFlags::Y) \
	op(EUxtAxisFlags::Z) 

enum class EUxtAxisFlags : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtAxisFlags>();

#define FOREACH_ENUM_EUXTTRANSFORMMODE(op) \
	op(EUxtTransformMode::None) \
	op(EUxtTransformMode::Translation) \
	op(EUxtTransformMode::Rotation) \
	op(EUxtTransformMode::Scaling) 

enum class EUxtTransformMode : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtTransformMode>();

#define FOREACH_ENUM_EUXTONEHANDROTATIONMODE(op) \
	op(EUxtOneHandRotationMode::RotateAboutObjectCenter) \
	op(EUxtOneHandRotationMode::RotateAboutGrabPoint) 

enum class EUxtOneHandRotationMode : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtOneHandRotationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

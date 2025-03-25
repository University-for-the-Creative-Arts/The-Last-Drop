// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RiveTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIVERENDERER_RiveTypes_generated_h
#error "RiveTypes.generated.h already included, missing '#pragma once' in RiveTypes.h"
#endif
#define RIVERENDERER_RiveTypes_generated_h

#define FID_Users_2309455_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveRenderer_Public_RiveTypes_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIVERENDERER_API UScriptStruct* StaticStruct<struct FRiveStateMachineEvent>();

#define FID_Users_2309455_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveRenderer_Public_RiveTypes_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRiveAlignment_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIVERENDERER_API UScriptStruct* StaticStruct<struct FRiveAlignment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2309455_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveRenderer_Public_RiveTypes_h


#define FOREACH_ENUM_ERIVEFITTYPE(op) \
	op(ERiveFitType::Fill) \
	op(ERiveFitType::Contain) \
	op(ERiveFitType::Cover) \
	op(ERiveFitType::FitWidth) \
	op(ERiveFitType::FitHeight) \
	op(ERiveFitType::None) \
	op(ERiveFitType::ScaleDown) \
	op(ERiveFitType::Layout) 

enum class ERiveFitType : uint8;
template<> struct TIsUEnumClass<ERiveFitType> { enum { Value = true }; };
template<> RIVERENDERER_API UEnum* StaticEnum<ERiveFitType>();

#define FOREACH_ENUM_ERIVEALIGNMENT(op) \
	op(ERiveAlignment::TopLeft) \
	op(ERiveAlignment::TopCenter) \
	op(ERiveAlignment::TopRight) \
	op(ERiveAlignment::CenterLeft) \
	op(ERiveAlignment::Center) \
	op(ERiveAlignment::CenterRight) \
	op(ERiveAlignment::BottomLeft) \
	op(ERiveAlignment::BottomCenter) \
	op(ERiveAlignment::BottomRight) 

enum class ERiveAlignment : uint8;
template<> struct TIsUEnumClass<ERiveAlignment> { enum { Value = true }; };
template<> RIVERENDERER_API UEnum* StaticEnum<ERiveAlignment>();

#define FOREACH_ENUM_ERIVEINITSTATE(op) \
	op(ERiveInitState::Uninitialized) \
	op(ERiveInitState::Deinitializing) \
	op(ERiveInitState::Initializing) \
	op(ERiveInitState::Initialized) 

enum class ERiveInitState : uint8;
template<> struct TIsUEnumClass<ERiveInitState> { enum { Value = true }; };
template<> RIVERENDERER_API UEnum* StaticEnum<ERiveInitState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

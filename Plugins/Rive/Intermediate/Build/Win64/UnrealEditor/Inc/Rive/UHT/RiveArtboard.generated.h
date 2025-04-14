// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rive/RiveArtboard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URiveArtboard;
class URiveAudioEngine;
enum class ERiveAlignment : uint8;
enum class ERiveFitType : uint8;
struct FRiveEvent;
#ifdef RIVE_RiveArtboard_generated_h
#error "RiveArtboard.generated.h already included, missing '#pragma once' in RiveArtboard.h"
#endif
#define RIVE_RiveArtboard_generated_h

#define FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_32_DELEGATE \
static void FRiveEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveEventDelegate, URiveArtboard* Artboard, const TArray<FRiveEvent>& ReportedEvents);


#define FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_37_DELEGATE \
static void FRiveNamedEventDelegate_DelegateWrapper(const FScriptDelegate& RiveNamedEventDelegate, URiveArtboard* Artboard, FRiveEvent Event);


#define FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_42_DELEGATE \
static void FRiveNamedEventsDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveNamedEventsDelegate, URiveArtboard* Artboard, FRiveEvent Event);


#define FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_48_DELEGATE \
static FVector2f FRiveCoordinatesDelegate_DelegateWrapper(const FScriptDelegate& RiveCoordinatesDelegate, URiveArtboard* Artboard, FVector2f const& TexturePosition);


#define FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_53_DELEGATE \
static void FRiveTickDelegate_DelegateWrapper(const FScriptDelegate& RiveTickDelegate, float DeltaTime, URiveArtboard* Artboard);


#define FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStateMachineNames); \
	DECLARE_FUNCTION(execSetAudioEngine); \
	DECLARE_FUNCTION(execGetLocalCoordinatesFromExtents); \
	DECLARE_FUNCTION(execGetLocalCoordinate); \
	DECLARE_FUNCTION(execPointerExit); \
	DECLARE_FUNCTION(execPointerMove); \
	DECLARE_FUNCTION(execPointerUp); \
	DECLARE_FUNCTION(execPointerDown); \
	DECLARE_FUNCTION(execTriggerNamedRiveEvent); \
	DECLARE_FUNCTION(execUnbindNamedRiveEvent); \
	DECLARE_FUNCTION(execBindNamedRiveEvent); \
	DECLARE_FUNCTION(execSetTextValueAtPath); \
	DECLARE_FUNCTION(execSetTextValue); \
	DECLARE_FUNCTION(execSetNumberValueAtPath); \
	DECLARE_FUNCTION(execSetNumberValue); \
	DECLARE_FUNCTION(execSetBoolValueAtPath); \
	DECLARE_FUNCTION(execSetBoolValue); \
	DECLARE_FUNCTION(execGetTextValueAtPath); \
	DECLARE_FUNCTION(execGetTextValue); \
	DECLARE_FUNCTION(execGetNumberValueAtPath); \
	DECLARE_FUNCTION(execGetNumberValue); \
	DECLARE_FUNCTION(execGetBoolValueAtPath); \
	DECLARE_FUNCTION(execGetBoolValue); \
	DECLARE_FUNCTION(execFireTriggerAtPath); \
	DECLARE_FUNCTION(execFireTrigger); \
	DECLARE_FUNCTION(execDraw); \
	DECLARE_FUNCTION(execGetLastDrawTransformMatrix); \
	DECLARE_FUNCTION(execGetTransformMatrix); \
	DECLARE_FUNCTION(execAlign); \
	DECLARE_FUNCTION(execTranslate); \
	DECLARE_FUNCTION(execTransform); \
	DECLARE_FUNCTION(execAdvanceStateMachine); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execGetOriginalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execHasCustomRender); \
	DECLARE_FUNCTION(execSetStateMachineName);


#define FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURiveArtboard(); \
	friend struct Z_Construct_UClass_URiveArtboard_Statics; \
public: \
	DECLARE_CLASS(URiveArtboard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rive"), NO_API) \
	DECLARE_SERIALIZER(URiveArtboard)


#define FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URiveArtboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URiveArtboard(URiveArtboard&&); \
	URiveArtboard(const URiveArtboard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URiveArtboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URiveArtboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URiveArtboard) \
	NO_API virtual ~URiveArtboard();


#define FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_21_PROLOG
#define FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIVE_API UClass* StaticClass<class URiveArtboard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

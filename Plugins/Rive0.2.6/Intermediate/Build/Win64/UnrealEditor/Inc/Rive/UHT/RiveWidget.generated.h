// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UMG/RiveWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URiveArtboard;
class URiveAudioEngine;
struct FRiveDescriptor;
#ifdef RIVE_RiveWidget_generated_h
#error "RiveWidget.generated.h already included, missing '#pragma once' in RiveWidget.h"
#endif
#define RIVE_RiveWidget_generated_h

#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_26_DELEGATE \
static void FRiveReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveReadyDelegate);


#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStateMachineNamesForDropdown); \
	DECLARE_FUNCTION(execGetArtboardNamesForDropdown); \
	DECLARE_FUNCTION(execOnRiveObjectReady); \
	DECLARE_FUNCTION(execSetRiveDescriptor); \
	DECLARE_FUNCTION(execCheckArtboardSize); \
	DECLARE_FUNCTION(execOnSWidgetSizeChanged); \
	DECLARE_FUNCTION(execGetArtboard); \
	DECLARE_FUNCTION(execSetAudioEngine);


#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURiveWidget(); \
	friend struct Z_Construct_UClass_URiveWidget_Statics; \
public: \
	DECLARE_CLASS(URiveWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rive"), NO_API) \
	DECLARE_SERIALIZER(URiveWidget)


#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URiveWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URiveWidget(URiveWidget&&); \
	URiveWidget(const URiveWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URiveWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URiveWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URiveWidget)


#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_23_PROLOG
#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIVE_API UClass* StaticClass<class URiveWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

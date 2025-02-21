// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/RiveActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URiveArtboard;
class URiveAudioEngine;
class URiveFile;
#ifdef RIVE_RiveActorComponent_generated_h
#error "RiveActorComponent.generated.h already included, missing '#pragma once' in RiveActorComponent.h"
#endif
#define RIVE_RiveActorComponent_generated_h

#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_23_DELEGATE \
static void FRiveReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveReadyDelegate);


#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStateMachineNamesForDropdown); \
	DECLARE_FUNCTION(execGetArtboardNamesForDropdown); \
	DECLARE_FUNCTION(execOnDefaultArtboardTickRender); \
	DECLARE_FUNCTION(execSetAudioEngine); \
	DECLARE_FUNCTION(execGetArtboardCount); \
	DECLARE_FUNCTION(execGetArtboardAtIndex); \
	DECLARE_FUNCTION(execGetDefaultArtboard); \
	DECLARE_FUNCTION(execRemoveArtboard); \
	DECLARE_FUNCTION(execAddArtboard); \
	DECLARE_FUNCTION(execResizeRenderTarget); \
	DECLARE_FUNCTION(execRenderRiveTest);


#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURiveActorComponent(); \
	friend struct Z_Construct_UClass_URiveActorComponent_Statics; \
public: \
	DECLARE_CLASS(URiveActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rive"), NO_API) \
	DECLARE_SERIALIZER(URiveActorComponent)


#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URiveActorComponent(URiveActorComponent&&); \
	URiveActorComponent(const URiveActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URiveActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URiveActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URiveActorComponent) \
	NO_API virtual ~URiveActorComponent();


#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_20_PROLOG
#define FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIVE_API UClass* StaticClass<class URiveActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

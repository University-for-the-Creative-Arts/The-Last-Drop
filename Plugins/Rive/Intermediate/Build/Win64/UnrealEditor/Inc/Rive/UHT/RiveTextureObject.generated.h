// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rive/RiveTextureObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URiveArtboard;
class URiveAudioEngine;
struct FLinearColor;
struct FRiveDescriptor;
#ifdef RIVE_RiveTextureObject_generated_h
#error "RiveTextureObject.generated.h already included, missing '#pragma once' in RiveTextureObject.h"
#endif
#define RIVE_RiveTextureObject_generated_h

#define FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_46_DELEGATE \
static void FRiveReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveReadyDelegate);


#define FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStateMachineNamesForDropdown); \
	DECLARE_FUNCTION(execGetArtboardNamesForDropdown); \
	DECLARE_FUNCTION(execOnArtboardTickRender); \
	DECLARE_FUNCTION(execSetAudioEngine); \
	DECLARE_FUNCTION(execGetArtboard); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execGetLocalCoordinatesFromExtents); \
	DECLARE_FUNCTION(execGetLocalCoordinate); \
	DECLARE_FUNCTION(execGetClearColor);


#define FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURiveTextureObject(); \
	friend struct Z_Construct_UClass_URiveTextureObject_Statics; \
public: \
	DECLARE_CLASS(URiveTextureObject, URiveTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rive"), NO_API) \
	DECLARE_SERIALIZER(URiveTextureObject)


#define FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URiveTextureObject(URiveTextureObject&&); \
	URiveTextureObject(const URiveTextureObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URiveTextureObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URiveTextureObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URiveTextureObject) \
	NO_API virtual ~URiveTextureObject();


#define FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_41_PROLOG
#define FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_45_INCLASS_NO_PURE_DECLS \
	FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIVE_API UClass* StaticClass<class URiveTextureObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

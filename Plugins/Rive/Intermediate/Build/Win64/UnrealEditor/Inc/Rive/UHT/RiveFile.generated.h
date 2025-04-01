// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rive/RiveFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URiveAsset;
#ifdef RIVE_RiveFile_generated_h
#error "RiveFile.generated.h already included, missing '#pragma once' in RiveFile.h"
#endif
#define RIVE_RiveFile_generated_h

#define FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_38_DELEGATE \
static void FRiveReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveReadyDelegate);


#define FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRiveAssetByName); \
	DECLARE_FUNCTION(execGetRiveAssetById); \
	DECLARE_FUNCTION(execGetArtboardNamesForDropdown); \
	DECLARE_FUNCTION(execIsInitialized);


#define FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURiveFile(); \
	friend struct Z_Construct_UClass_URiveFile_Statics; \
public: \
	DECLARE_CLASS(URiveFile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rive"), NO_API) \
	DECLARE_SERIALIZER(URiveFile)


#define FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URiveFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URiveFile(URiveFile&&); \
	URiveFile(const URiveFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URiveFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URiveFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URiveFile) \
	NO_API virtual ~URiveFile();


#define FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_27_PROLOG
#define FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIVE_API UClass* StaticClass<class URiveFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

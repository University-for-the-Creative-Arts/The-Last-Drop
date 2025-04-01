// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rive/Assets/RiveFontAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFontFace;
#ifdef RIVE_RiveFontAsset_generated_h
#error "RiveFontAsset.generated.h already included, missing '#pragma once' in RiveFontAsset.h"
#endif
#define RIVE_RiveFontAsset_generated_h

#define FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadFontBytes); \
	DECLARE_FUNCTION(execLoadFontFace);


#define FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURiveFontAsset(); \
	friend struct Z_Construct_UClass_URiveFontAsset_Statics; \
public: \
	DECLARE_CLASS(URiveFontAsset, URiveAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rive"), NO_API) \
	DECLARE_SERIALIZER(URiveFontAsset)


#define FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URiveFontAsset(URiveFontAsset&&); \
	URiveFontAsset(const URiveFontAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URiveFontAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URiveFontAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URiveFontAsset) \
	NO_API virtual ~URiveFontAsset();


#define FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_13_PROLOG
#define FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIVE_API UClass* StaticClass<class URiveFontAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2302143_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

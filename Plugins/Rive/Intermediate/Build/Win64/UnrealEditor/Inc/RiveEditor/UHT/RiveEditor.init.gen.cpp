// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RiveEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RiveEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_RiveEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RiveEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x9DF59216,
				0x12B7B40B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RiveEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RiveEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RiveEditor(Z_Construct_UPackage__Script_RiveEditor, TEXT("/Script/RiveEditor"), Z_Registration_Info_UPackage__Script_RiveEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9DF59216, 0x12B7B40B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

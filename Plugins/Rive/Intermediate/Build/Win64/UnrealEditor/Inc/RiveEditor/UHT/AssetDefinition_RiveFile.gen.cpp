// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiveEditor/Private/AssetDefinition_RiveFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_RiveFile() {}

// Begin Cross Module References
RIVEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_RiveFile();
RIVEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_RiveFile_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
UPackage* Z_Construct_UPackage__Script_RiveEditor();
// End Cross Module References

// Begin Class UAssetDefinition_RiveFile
void UAssetDefinition_RiveFile::StaticRegisterNativesUAssetDefinition_RiveFile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_RiveFile);
UClass* Z_Construct_UClass_UAssetDefinition_RiveFile_NoRegister()
{
	return UAssetDefinition_RiveFile::StaticClass();
}
struct Z_Construct_UClass_UAssetDefinition_RiveFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AssetDefinition_RiveFile.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_RiveFile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_RiveFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetDefinition_RiveFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
	(UObject* (*)())Z_Construct_UPackage__Script_RiveEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_RiveFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_RiveFile_Statics::ClassParams = {
	&UAssetDefinition_RiveFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_RiveFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_RiveFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetDefinition_RiveFile()
{
	if (!Z_Registration_Info_UClass_UAssetDefinition_RiveFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_RiveFile.OuterSingleton, Z_Construct_UClass_UAssetDefinition_RiveFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetDefinition_RiveFile.OuterSingleton;
}
template<> RIVEEDITOR_API UClass* StaticClass<UAssetDefinition_RiveFile>()
{
	return UAssetDefinition_RiveFile::StaticClass();
}
UAssetDefinition_RiveFile::UAssetDefinition_RiveFile() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_RiveFile);
UAssetDefinition_RiveFile::~UAssetDefinition_RiveFile() {}
// End Class UAssetDefinition_RiveFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_AssetDefinition_RiveFile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_RiveFile, UAssetDefinition_RiveFile::StaticClass, TEXT("UAssetDefinition_RiveFile"), &Z_Registration_Info_UClass_UAssetDefinition_RiveFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_RiveFile), 1653120668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_AssetDefinition_RiveFile_h_331232486(TEXT("/Script/RiveEditor"),
	Z_CompiledInDeferFile_FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_AssetDefinition_RiveFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_AssetDefinition_RiveFile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

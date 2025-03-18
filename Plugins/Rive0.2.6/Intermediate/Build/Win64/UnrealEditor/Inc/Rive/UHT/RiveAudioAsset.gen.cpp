// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Rive/Assets/RiveAudioAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveAudioAsset() {}

// Begin Cross Module References
RIVE_API UClass* Z_Construct_UClass_URiveAsset();
RIVE_API UClass* Z_Construct_UClass_URiveAudioAsset();
RIVE_API UClass* Z_Construct_UClass_URiveAudioAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Class URiveAudioAsset
void URiveAudioAsset::StaticRegisterNativesURiveAudioAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveAudioAsset);
UClass* Z_Construct_UClass_URiveAudioAsset_NoRegister()
{
	return URiveAudioAsset::StaticClass();
}
struct Z_Construct_UClass_URiveAudioAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Rive/Assets/RiveAudioAsset.h" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveAudioAsset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveAudioAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URiveAudioAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URiveAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveAudioAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveAudioAsset_Statics::ClassParams = {
	&URiveAudioAsset::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveAudioAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveAudioAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveAudioAsset()
{
	if (!Z_Registration_Info_UClass_URiveAudioAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveAudioAsset.OuterSingleton, Z_Construct_UClass_URiveAudioAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveAudioAsset.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<URiveAudioAsset>()
{
	return URiveAudioAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveAudioAsset);
URiveAudioAsset::~URiveAudioAsset() {}
// End Class URiveAudioAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_Rive_Assets_RiveAudioAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveAudioAsset, URiveAudioAsset::StaticClass, TEXT("URiveAudioAsset"), &Z_Registration_Info_UClass_URiveAudioAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveAudioAsset), 3923455044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_Rive_Assets_RiveAudioAsset_h_1481996565(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_Rive_Assets_RiveAudioAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_Rive_Public_Rive_Assets_RiveAudioAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiveRenderer/Public/RiveRendererSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveRendererSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
RIVERENDERER_API UClass* Z_Construct_UClass_URiveRendererSettings();
RIVERENDERER_API UClass* Z_Construct_UClass_URiveRendererSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_RiveRenderer();
// End Cross Module References

// Begin Class URiveRendererSettings
void URiveRendererSettings::StaticRegisterNativesURiveRendererSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveRendererSettings);
UClass* Z_Construct_UClass_URiveRendererSettings_NoRegister()
{
	return URiveRendererSettings::StaticClass();
}
struct Z_Construct_UClass_URiveRendererSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RiveRendererSettings.h" },
		{ "ModuleRelativePath", "Public/RiveRendererSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRHITechPreview_MetaData[] = {
		{ "Category", "Rive Experimental Settings" },
		{ "DisplayName", "Enable RHI Technical Preview" },
		{ "ModuleRelativePath", "Public/RiveRendererSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Not available on Apple platforms or UE 5.3." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableRHITechPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRHITechPreview;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveRendererSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URiveRendererSettings_Statics::NewProp_bEnableRHITechPreview_SetBit(void* Obj)
{
	((URiveRendererSettings*)Obj)->bEnableRHITechPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URiveRendererSettings_Statics::NewProp_bEnableRHITechPreview = { "bEnableRHITechPreview", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URiveRendererSettings), &Z_Construct_UClass_URiveRendererSettings_Statics::NewProp_bEnableRHITechPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRHITechPreview_MetaData), NewProp_bEnableRHITechPreview_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URiveRendererSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveRendererSettings_Statics::NewProp_bEnableRHITechPreview,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveRendererSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URiveRendererSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_RiveRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveRendererSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveRendererSettings_Statics::ClassParams = {
	&URiveRendererSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URiveRendererSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URiveRendererSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveRendererSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveRendererSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveRendererSettings()
{
	if (!Z_Registration_Info_UClass_URiveRendererSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveRendererSettings.OuterSingleton, Z_Construct_UClass_URiveRendererSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveRendererSettings.OuterSingleton;
}
template<> RIVERENDERER_API UClass* StaticClass<URiveRendererSettings>()
{
	return URiveRendererSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveRendererSettings);
URiveRendererSettings::~URiveRendererSettings() {}
// End Class URiveRendererSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_RiveRenderer_Public_RiveRendererSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveRendererSettings, URiveRendererSettings::StaticClass, TEXT("URiveRendererSettings"), &Z_Registration_Info_UClass_URiveRendererSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveRendererSettings), 2024546360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_RiveRenderer_Public_RiveRendererSettings_h_1708431886(TEXT("/Script/RiveRenderer"),
	Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_RiveRenderer_Public_RiveRendererSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_RiveRenderer_Public_RiveRendererSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

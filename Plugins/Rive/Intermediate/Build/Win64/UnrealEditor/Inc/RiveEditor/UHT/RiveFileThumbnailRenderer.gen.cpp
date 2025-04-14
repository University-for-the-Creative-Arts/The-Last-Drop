// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiveEditor/Private/RiveFileThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveFileThumbnailRenderer() {}

// Begin Cross Module References
RIVE_API UClass* Z_Construct_UClass_URiveArtboard_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveTexture_NoRegister();
RIVEEDITOR_API UClass* Z_Construct_UClass_URiveFileThumbnailRenderer();
RIVEEDITOR_API UClass* Z_Construct_UClass_URiveFileThumbnailRenderer_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_RiveEditor();
// End Cross Module References

// Begin Class URiveFileThumbnailRenderer
void URiveFileThumbnailRenderer::StaticRegisterNativesURiveFileThumbnailRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveFileThumbnailRenderer);
UClass* Z_Construct_UClass_URiveFileThumbnailRenderer_NoRegister()
{
	return URiveFileThumbnailRenderer::StaticClass();
}
struct Z_Construct_UClass_URiveFileThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "RiveFileThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/RiveFileThumbnailRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailRenderers_MetaData[] = {
		{ "ModuleRelativePath", "Private/RiveFileThumbnailRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveTexture_MetaData[] = {
		{ "ModuleRelativePath", "Private/RiveFileThumbnailRenderer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailRenderers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ThumbnailRenderers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ThumbnailRenderers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RiveTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveFileThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::NewProp_ThumbnailRenderers_ValueProp = { "ThumbnailRenderers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::NewProp_ThumbnailRenderers_Key_KeyProp = { "ThumbnailRenderers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::NewProp_ThumbnailRenderers = { "ThumbnailRenderers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveFileThumbnailRenderer, ThumbnailRenderers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailRenderers_MetaData), NewProp_ThumbnailRenderers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::NewProp_RiveTexture = { "RiveTexture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveFileThumbnailRenderer, RiveTexture), Z_Construct_UClass_URiveTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveTexture_MetaData), NewProp_RiveTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::NewProp_ThumbnailRenderers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::NewProp_ThumbnailRenderers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::NewProp_ThumbnailRenderers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::NewProp_RiveTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_RiveEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::ClassParams = {
	&URiveFileThumbnailRenderer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveFileThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_URiveFileThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveFileThumbnailRenderer.OuterSingleton, Z_Construct_UClass_URiveFileThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveFileThumbnailRenderer.OuterSingleton;
}
template<> RIVEEDITOR_API UClass* StaticClass<URiveFileThumbnailRenderer>()
{
	return URiveFileThumbnailRenderer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveFileThumbnailRenderer);
URiveFileThumbnailRenderer::~URiveFileThumbnailRenderer() {}
// End Class URiveFileThumbnailRenderer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_RiveFileThumbnailRenderer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveFileThumbnailRenderer, URiveFileThumbnailRenderer::StaticClass, TEXT("URiveFileThumbnailRenderer"), &Z_Registration_Info_UClass_URiveFileThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveFileThumbnailRenderer), 919383248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_RiveFileThumbnailRenderer_h_1502829985(TEXT("/Script/RiveEditor"),
	Z_CompiledInDeferFile_FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_RiveFileThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2306309_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_RiveFileThumbnailRenderer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiveEditor/Private/RiveTextureObjectThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveTextureObjectThumbnailRenderer() {}

// Begin Cross Module References
RIVEEDITOR_API UClass* Z_Construct_UClass_URiveTextureObjectThumbnailRenderer();
RIVEEDITOR_API UClass* Z_Construct_UClass_URiveTextureObjectThumbnailRenderer_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_RiveEditor();
// End Cross Module References

// Begin Class URiveTextureObjectThumbnailRenderer
void URiveTextureObjectThumbnailRenderer::StaticRegisterNativesURiveTextureObjectThumbnailRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveTextureObjectThumbnailRenderer);
UClass* Z_Construct_UClass_URiveTextureObjectThumbnailRenderer_NoRegister()
{
	return URiveTextureObjectThumbnailRenderer::StaticClass();
}
struct Z_Construct_UClass_URiveTextureObjectThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "RiveTextureObjectThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/RiveTextureObjectThumbnailRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveTextureObjectThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URiveTextureObjectThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_RiveEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveTextureObjectThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveTextureObjectThumbnailRenderer_Statics::ClassParams = {
	&URiveTextureObjectThumbnailRenderer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveTextureObjectThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveTextureObjectThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveTextureObjectThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_URiveTextureObjectThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveTextureObjectThumbnailRenderer.OuterSingleton, Z_Construct_UClass_URiveTextureObjectThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveTextureObjectThumbnailRenderer.OuterSingleton;
}
template<> RIVEEDITOR_API UClass* StaticClass<URiveTextureObjectThumbnailRenderer>()
{
	return URiveTextureObjectThumbnailRenderer::StaticClass();
}
URiveTextureObjectThumbnailRenderer::URiveTextureObjectThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveTextureObjectThumbnailRenderer);
URiveTextureObjectThumbnailRenderer::~URiveTextureObjectThumbnailRenderer() {}
// End Class URiveTextureObjectThumbnailRenderer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_RiveEditor_Private_RiveTextureObjectThumbnailRenderer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveTextureObjectThumbnailRenderer, URiveTextureObjectThumbnailRenderer::StaticClass, TEXT("URiveTextureObjectThumbnailRenderer"), &Z_Registration_Info_UClass_URiveTextureObjectThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveTextureObjectThumbnailRenderer), 3030739380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_RiveEditor_Private_RiveTextureObjectThumbnailRenderer_h_2077081076(TEXT("/Script/RiveEditor"),
	Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_RiveEditor_Private_RiveTextureObjectThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_RiveEditor_Private_RiveTextureObjectThumbnailRenderer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

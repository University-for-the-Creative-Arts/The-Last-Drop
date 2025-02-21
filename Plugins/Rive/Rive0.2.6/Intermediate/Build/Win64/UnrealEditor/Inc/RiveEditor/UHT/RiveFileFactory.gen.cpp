// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiveEditor/Private/Factories/RiveFileFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveFileFactory() {}

// Begin Cross Module References
RIVEEDITOR_API UClass* Z_Construct_UClass_URiveFileFactory();
RIVEEDITOR_API UClass* Z_Construct_UClass_URiveFileFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_RiveEditor();
// End Cross Module References

// Begin Class URiveFileFactory
void URiveFileFactory::StaticRegisterNativesURiveFileFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveFileFactory);
UClass* Z_Construct_UClass_URiveFileFactory_NoRegister()
{
	return URiveFileFactory::StaticClass();
}
struct Z_Construct_UClass_URiveFileFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/RiveFileFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/RiveFileFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveFileFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URiveFileFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_RiveEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveFileFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveFileFactory_Statics::ClassParams = {
	&URiveFileFactory::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveFileFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveFileFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveFileFactory()
{
	if (!Z_Registration_Info_UClass_URiveFileFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveFileFactory.OuterSingleton, Z_Construct_UClass_URiveFileFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveFileFactory.OuterSingleton;
}
template<> RIVEEDITOR_API UClass* StaticClass<URiveFileFactory>()
{
	return URiveFileFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveFileFactory);
URiveFileFactory::~URiveFileFactory() {}
// End Class URiveFileFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_RiveEditor_Private_Factories_RiveFileFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveFileFactory, URiveFileFactory::StaticClass, TEXT("URiveFileFactory"), &Z_Registration_Info_UClass_URiveFileFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveFileFactory), 556314799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_RiveEditor_Private_Factories_RiveFileFactory_h_1080689484(TEXT("/Script/RiveEditor"),
	Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_RiveEditor_Private_Factories_RiveFileFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_RiveEditor_Private_Factories_RiveFileFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiveEditor/Private/Factories/RiveActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveActorFactory() {}

// Begin Cross Module References
RIVEEDITOR_API UClass* Z_Construct_UClass_URiveActorFactory();
RIVEEDITOR_API UClass* Z_Construct_UClass_URiveActorFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_RiveEditor();
// End Cross Module References

// Begin Class URiveActorFactory
void URiveActorFactory::StaticRegisterNativesURiveActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveActorFactory);
UClass* Z_Construct_UClass_URiveActorFactory_NoRegister()
{
	return URiveActorFactory::StaticClass();
}
struct Z_Construct_UClass_URiveActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/RiveActorFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/RiveActorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URiveActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_RiveEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveActorFactory_Statics::ClassParams = {
	&URiveActorFactory::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveActorFactory()
{
	if (!Z_Registration_Info_UClass_URiveActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveActorFactory.OuterSingleton, Z_Construct_UClass_URiveActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveActorFactory.OuterSingleton;
}
template<> RIVEEDITOR_API UClass* StaticClass<URiveActorFactory>()
{
	return URiveActorFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveActorFactory);
URiveActorFactory::~URiveActorFactory() {}
// End Class URiveActorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_Factories_RiveActorFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveActorFactory, URiveActorFactory::StaticClass, TEXT("URiveActorFactory"), &Z_Registration_Info_UClass_URiveActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveActorFactory), 2791047707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_Factories_RiveActorFactory_h_2019047331(TEXT("/Script/RiveEditor"),
	Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_Factories_RiveActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveEditor_Private_Factories_RiveActorFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

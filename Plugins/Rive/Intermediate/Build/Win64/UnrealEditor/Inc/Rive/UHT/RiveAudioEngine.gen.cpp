// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Rive/RiveAudioEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveAudioEngine() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
RIVE_API UClass* Z_Construct_UClass_URiveAudioEngine();
RIVE_API UClass* Z_Construct_UClass_URiveAudioEngine_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Class URiveAudioEngine
void URiveAudioEngine::StaticRegisterNativesURiveAudioEngine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveAudioEngine);
UClass* Z_Construct_UClass_URiveAudioEngine_NoRegister()
{
	return URiveAudioEngine::StaticClass();
}
struct Z_Construct_UClass_URiveAudioEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rive" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Rive/RiveAudioEngine.h" },
		{ "ModuleRelativePath", "Public/Rive/RiveAudioEngine.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveAudioEngine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URiveAudioEngine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USynthComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveAudioEngine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveAudioEngine_Statics::ClassParams = {
	&URiveAudioEngine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveAudioEngine_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveAudioEngine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveAudioEngine()
{
	if (!Z_Registration_Info_UClass_URiveAudioEngine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveAudioEngine.OuterSingleton, Z_Construct_UClass_URiveAudioEngine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveAudioEngine.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<URiveAudioEngine>()
{
	return URiveAudioEngine::StaticClass();
}
URiveAudioEngine::URiveAudioEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveAudioEngine);
URiveAudioEngine::~URiveAudioEngine() {}
// End Class URiveAudioEngine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveAudioEngine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveAudioEngine, URiveAudioEngine::StaticClass, TEXT("URiveAudioEngine"), &Z_Registration_Info_UClass_URiveAudioEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveAudioEngine), 1599803233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveAudioEngine_h_1635475620(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveAudioEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveAudioEngine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

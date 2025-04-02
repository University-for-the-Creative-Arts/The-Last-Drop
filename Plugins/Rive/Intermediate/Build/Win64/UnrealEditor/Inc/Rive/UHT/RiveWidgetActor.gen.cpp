// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Game/RiveWidgetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveWidgetActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
RIVE_API UClass* Z_Construct_UClass_ARiveWidgetActor();
RIVE_API UClass* Z_Construct_UClass_ARiveWidgetActor_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveAudioEngine_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Class ARiveWidgetActor Function OnRiveWidgetReady
struct Z_Construct_UFunction_ARiveWidgetActor_OnRiveWidgetReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/RiveWidgetActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARiveWidgetActor_OnRiveWidgetReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARiveWidgetActor, nullptr, "OnRiveWidgetReady", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARiveWidgetActor_OnRiveWidgetReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARiveWidgetActor_OnRiveWidgetReady_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARiveWidgetActor_OnRiveWidgetReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARiveWidgetActor_OnRiveWidgetReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARiveWidgetActor::execOnRiveWidgetReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRiveWidgetReady();
	P_NATIVE_END;
}
// End Class ARiveWidgetActor Function OnRiveWidgetReady

// Begin Class ARiveWidgetActor
void ARiveWidgetActor::StaticRegisterNativesARiveWidgetActor()
{
	UClass* Class = ARiveWidgetActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRiveWidgetReady", &ARiveWidgetActor::execOnRiveWidgetReady },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARiveWidgetActor);
UClass* Z_Construct_UClass_ARiveWidgetActor_NoRegister()
{
	return ARiveWidgetActor::StaticClass();
}
struct Z_Construct_UClass_ARiveWidgetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Game/RiveWidgetActor.h" },
		{ "ModuleRelativePath", "Public/Game/RiveWidgetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveWidgetClass_MetaData[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Settings for Rive Rendering */" },
#endif
		{ "ModuleRelativePath", "Public/Game/RiveWidgetActor.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for Rive Rendering" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenUserWidget_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Settings for Rive Rendering */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/RiveWidgetActor.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for Rive Rendering" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioEngine_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/RiveWidgetActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RiveWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenUserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioEngine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARiveWidgetActor_OnRiveWidgetReady, "OnRiveWidgetReady" }, // 2342723875
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARiveWidgetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARiveWidgetActor_Statics::NewProp_RiveWidgetClass = { "RiveWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARiveWidgetActor, RiveWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveWidgetClass_MetaData), NewProp_RiveWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARiveWidgetActor_Statics::NewProp_ScreenUserWidget = { "ScreenUserWidget", nullptr, (EPropertyFlags)0x01260800020a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARiveWidgetActor, ScreenUserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenUserWidget_MetaData), NewProp_ScreenUserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARiveWidgetActor_Statics::NewProp_AudioEngine = { "AudioEngine", nullptr, (EPropertyFlags)0x01260800020a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARiveWidgetActor, AudioEngine), Z_Construct_UClass_URiveAudioEngine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioEngine_MetaData), NewProp_AudioEngine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARiveWidgetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARiveWidgetActor_Statics::NewProp_RiveWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARiveWidgetActor_Statics::NewProp_ScreenUserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARiveWidgetActor_Statics::NewProp_AudioEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARiveWidgetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARiveWidgetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARiveWidgetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARiveWidgetActor_Statics::ClassParams = {
	&ARiveWidgetActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARiveWidgetActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARiveWidgetActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARiveWidgetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARiveWidgetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARiveWidgetActor()
{
	if (!Z_Registration_Info_UClass_ARiveWidgetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARiveWidgetActor.OuterSingleton, Z_Construct_UClass_ARiveWidgetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARiveWidgetActor.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<ARiveWidgetActor>()
{
	return ARiveWidgetActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARiveWidgetActor);
ARiveWidgetActor::~ARiveWidgetActor() {}
// End Class ARiveWidgetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Game_RiveWidgetActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARiveWidgetActor, ARiveWidgetActor::StaticClass, TEXT("ARiveWidgetActor"), &Z_Registration_Info_UClass_ARiveWidgetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARiveWidgetActor), 4206097628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Game_RiveWidgetActor_h_888542966(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Game_RiveWidgetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Game_RiveWidgetActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

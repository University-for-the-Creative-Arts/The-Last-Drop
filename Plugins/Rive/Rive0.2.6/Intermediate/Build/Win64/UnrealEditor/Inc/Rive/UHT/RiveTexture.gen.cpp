// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Rive/RiveTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveTexture() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic();
RIVE_API UClass* Z_Construct_UClass_URiveTexture();
RIVE_API UClass* Z_Construct_UClass_URiveTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Class URiveTexture Function ResizeRenderTargets
struct Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics
{
	struct RiveTexture_eventResizeRenderTargets_Parms
	{
		FIntPoint InNewSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Resize render resources\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Rive/RiveTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resize render resources" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InNewSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::NewProp_InNewSize = { "InNewSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTexture_eventResizeRenderTargets_Parms, InNewSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::NewProp_InNewSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveTexture, nullptr, "ResizeRenderTargets", nullptr, nullptr, Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::RiveTexture_eventResizeRenderTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::RiveTexture_eventResizeRenderTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveTexture_ResizeRenderTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveTexture_ResizeRenderTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveTexture::execResizeRenderTargets)
{
	P_GET_STRUCT(FIntPoint,Z_Param_InNewSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResizeRenderTargets(Z_Param_InNewSize);
	P_NATIVE_END;
}
// End Class URiveTexture Function ResizeRenderTargets

// Begin Class URiveTexture
void URiveTexture::StaticRegisterNativesURiveTexture()
{
	UClass* Class = URiveTexture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResizeRenderTargets", &URiveTexture::execResizeRenderTargets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveTexture);
UClass* Z_Construct_UClass_URiveTexture_NoRegister()
{
	return URiveTexture::StaticClass();
}
struct Z_Construct_UClass_URiveTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Rive/RiveTexture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rive/RiveTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Rive" },
		{ "ClampMax", "3840" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UI representation of Texture Size */" },
#endif
		{ "ModuleRelativePath", "Public/Rive/RiveTexture.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI representation of Texture Size" },
#endif
		{ "UIMax", "3840" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URiveTexture_ResizeRenderTargets, "ResizeRenderTargets" }, // 358267856
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URiveTexture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveTexture, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URiveTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveTexture_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URiveTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture2DDynamic,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveTexture_Statics::ClassParams = {
	&URiveTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URiveTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URiveTexture_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveTexture()
{
	if (!Z_Registration_Info_UClass_URiveTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveTexture.OuterSingleton, Z_Construct_UClass_URiveTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveTexture.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<URiveTexture>()
{
	return URiveTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveTexture);
URiveTexture::~URiveTexture() {}
// End Class URiveTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Rive_RiveTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveTexture, URiveTexture::StaticClass, TEXT("URiveTexture"), &Z_Registration_Info_UClass_URiveTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveTexture), 2616699710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Rive_RiveTexture_h_2759405515(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Rive_RiveTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Rive_RiveTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

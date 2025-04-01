// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Rive/Assets/RiveImageAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveImageAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveAsset();
RIVE_API UClass* Z_Construct_UClass_URiveImageAsset();
RIVE_API UClass* Z_Construct_UClass_URiveImageAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Class URiveImageAsset Function LoadImageBytes
struct Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics
{
	struct RiveImageAsset_eventLoadImageBytes_Parms
	{
		TArray<uint8> InBytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveImageAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveImageAsset_eventLoadImageBytes_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBytes_MetaData), NewProp_InBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::NewProp_InBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::NewProp_InBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveImageAsset, nullptr, "LoadImageBytes", nullptr, nullptr, Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::RiveImageAsset_eventLoadImageBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::RiveImageAsset_eventLoadImageBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveImageAsset_LoadImageBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveImageAsset_LoadImageBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveImageAsset::execLoadImageBytes)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadImageBytes(Z_Param_Out_InBytes);
	P_NATIVE_END;
}
// End Class URiveImageAsset Function LoadImageBytes

// Begin Class URiveImageAsset Function LoadTexture
struct Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics
{
	struct RiveImageAsset_eventLoadTexture_Parms
	{
		UTexture2D* InTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveImageAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveImageAsset_eventLoadTexture_Parms, InTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::NewProp_InTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveImageAsset, nullptr, "LoadTexture", nullptr, nullptr, Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::RiveImageAsset_eventLoadTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::RiveImageAsset_eventLoadTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveImageAsset_LoadTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveImageAsset_LoadTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveImageAsset::execLoadTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_InTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadTexture(Z_Param_InTexture);
	P_NATIVE_END;
}
// End Class URiveImageAsset Function LoadTexture

// Begin Class URiveImageAsset
void URiveImageAsset::StaticRegisterNativesURiveImageAsset()
{
	UClass* Class = URiveImageAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadImageBytes", &URiveImageAsset::execLoadImageBytes },
		{ "LoadTexture", &URiveImageAsset::execLoadTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveImageAsset);
UClass* Z_Construct_UClass_URiveImageAsset_NoRegister()
{
	return URiveImageAsset::StaticClass();
}
struct Z_Construct_UClass_URiveImageAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Rive/Assets/RiveImageAsset.h" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveImageAsset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URiveImageAsset_LoadImageBytes, "LoadImageBytes" }, // 2048842033
		{ &Z_Construct_UFunction_URiveImageAsset_LoadTexture, "LoadTexture" }, // 2855374451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveImageAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URiveImageAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URiveAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveImageAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveImageAsset_Statics::ClassParams = {
	&URiveImageAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveImageAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveImageAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveImageAsset()
{
	if (!Z_Registration_Info_UClass_URiveImageAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveImageAsset.OuterSingleton, Z_Construct_UClass_URiveImageAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveImageAsset.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<URiveImageAsset>()
{
	return URiveImageAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveImageAsset);
URiveImageAsset::~URiveImageAsset() {}
// End Class URiveImageAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveImageAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveImageAsset, URiveImageAsset::StaticClass, TEXT("URiveImageAsset"), &Z_Registration_Info_UClass_URiveImageAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveImageAsset), 17996601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveImageAsset_h_154443271(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveImageAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveImageAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

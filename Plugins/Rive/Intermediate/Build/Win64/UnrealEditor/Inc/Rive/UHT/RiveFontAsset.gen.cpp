// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Rive/Assets/RiveFontAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveFontAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UFontFace_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveAsset();
RIVE_API UClass* Z_Construct_UClass_URiveFontAsset();
RIVE_API UClass* Z_Construct_UClass_URiveFontAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Class URiveFontAsset Function LoadFontBytes
struct Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics
{
	struct RiveFontAsset_eventLoadFontBytes_Parms
	{
		TArray<uint8> InBytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveFontAsset.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveFontAsset_eventLoadFontBytes_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBytes_MetaData), NewProp_InBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::NewProp_InBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::NewProp_InBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveFontAsset, nullptr, "LoadFontBytes", nullptr, nullptr, Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::RiveFontAsset_eventLoadFontBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::RiveFontAsset_eventLoadFontBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveFontAsset_LoadFontBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveFontAsset_LoadFontBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveFontAsset::execLoadFontBytes)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadFontBytes(Z_Param_Out_InBytes);
	P_NATIVE_END;
}
// End Class URiveFontAsset Function LoadFontBytes

// Begin Class URiveFontAsset Function LoadFontFace
struct Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics
{
	struct RiveFontAsset_eventLoadFontFace_Parms
	{
		UFontFace* InFont;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveFontAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InFont;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::NewProp_InFont = { "InFont", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveFontAsset_eventLoadFontFace_Parms, InFont), Z_Construct_UClass_UFontFace_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::NewProp_InFont,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveFontAsset, nullptr, "LoadFontFace", nullptr, nullptr, Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::RiveFontAsset_eventLoadFontFace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::RiveFontAsset_eventLoadFontFace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveFontAsset_LoadFontFace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveFontAsset_LoadFontFace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveFontAsset::execLoadFontFace)
{
	P_GET_OBJECT(UFontFace,Z_Param_InFont);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadFontFace(Z_Param_InFont);
	P_NATIVE_END;
}
// End Class URiveFontAsset Function LoadFontFace

// Begin Class URiveFontAsset
void URiveFontAsset::StaticRegisterNativesURiveFontAsset()
{
	UClass* Class = URiveFontAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadFontBytes", &URiveFontAsset::execLoadFontBytes },
		{ "LoadFontFace", &URiveFontAsset::execLoadFontFace },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveFontAsset);
UClass* Z_Construct_UClass_URiveFontAsset_NoRegister()
{
	return URiveFontAsset::StaticClass();
}
struct Z_Construct_UClass_URiveFontAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Rive/Assets/RiveFontAsset.h" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveFontAsset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URiveFontAsset_LoadFontBytes, "LoadFontBytes" }, // 306141306
		{ &Z_Construct_UFunction_URiveFontAsset_LoadFontFace, "LoadFontFace" }, // 2984543861
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveFontAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URiveFontAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URiveAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveFontAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveFontAsset_Statics::ClassParams = {
	&URiveFontAsset::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveFontAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveFontAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveFontAsset()
{
	if (!Z_Registration_Info_UClass_URiveFontAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveFontAsset.OuterSingleton, Z_Construct_UClass_URiveFontAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveFontAsset.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<URiveFontAsset>()
{
	return URiveFontAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveFontAsset);
URiveFontAsset::~URiveFontAsset() {}
// End Class URiveFontAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveFontAsset, URiveFontAsset::StaticClass, TEXT("URiveFontAsset"), &Z_Registration_Info_UClass_URiveFontAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveFontAsset), 2072387393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_1287989410(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveFontAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

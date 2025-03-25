// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Rive/RiveFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveFile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveArtboard_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveAsset_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveFile();
RIVE_API UClass* Z_Construct_UClass_URiveFile_NoRegister();
RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveFile_RiveReadyDelegate__DelegateSignature();
RIVERENDERER_API UEnum* Z_Construct_UEnum_RiveRenderer_ERiveInitState();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Delegate FRiveReadyDelegate
struct Z_Construct_UDelegateFunction_URiveFile_RiveReadyDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URiveFile_RiveReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveFile, nullptr, "RiveReadyDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveFile_RiveReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_URiveFile_RiveReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_URiveFile_RiveReadyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URiveFile_RiveReadyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void URiveFile::FRiveReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveReadyDelegate)
{
	RiveReadyDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FRiveReadyDelegate

// Begin Class URiveFile Function GetArtboardNamesForDropdown
struct Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics
{
	struct RiveFile_eventGetArtboardNamesForDropdown_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveFile_eventGetArtboardNamesForDropdown_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveFile, nullptr, "GetArtboardNamesForDropdown", nullptr, nullptr, Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::RiveFile_eventGetArtboardNamesForDropdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::RiveFile_eventGetArtboardNamesForDropdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveFile::execGetArtboardNamesForDropdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetArtboardNamesForDropdown();
	P_NATIVE_END;
}
// End Class URiveFile Function GetArtboardNamesForDropdown

// Begin Class URiveFile Function GetRiveAssetById
struct Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics
{
	struct RiveFile_eventGetRiveAssetById_Parms
	{
		int32 InId;
		URiveAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveFile_eventGetRiveAssetById_Parms, InId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveFile_eventGetRiveAssetById_Parms, ReturnValue), Z_Construct_UClass_URiveAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::NewProp_InId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveFile, nullptr, "GetRiveAssetById", nullptr, nullptr, Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::RiveFile_eventGetRiveAssetById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::RiveFile_eventGetRiveAssetById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveFile_GetRiveAssetById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveFile_GetRiveAssetById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveFile::execGetRiveAssetById)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URiveAsset**)Z_Param__Result=P_THIS->GetRiveAssetById(Z_Param_InId);
	P_NATIVE_END;
}
// End Class URiveFile Function GetRiveAssetById

// Begin Class URiveFile Function GetRiveAssetByName
struct Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics
{
	struct RiveFile_eventGetRiveAssetByName_Parms
	{
		FString InName;
		URiveAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveFile_eventGetRiveAssetByName_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveFile_eventGetRiveAssetByName_Parms, ReturnValue), Z_Construct_UClass_URiveAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveFile, nullptr, "GetRiveAssetByName", nullptr, nullptr, Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::RiveFile_eventGetRiveAssetByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::RiveFile_eventGetRiveAssetByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveFile_GetRiveAssetByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveFile_GetRiveAssetByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveFile::execGetRiveAssetByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URiveAsset**)Z_Param__Result=P_THIS->GetRiveAssetByName(Z_Param_InName);
	P_NATIVE_END;
}
// End Class URiveFile Function GetRiveAssetByName

// Begin Class URiveFile Function IsInitialized
struct Z_Construct_UFunction_URiveFile_IsInitialized_Statics
{
	struct RiveFile_eventIsInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URiveFile_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiveFile_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveFile_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveFile_eventIsInitialized_Parms), &Z_Construct_UFunction_URiveFile_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveFile_IsInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveFile_IsInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_IsInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveFile_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveFile, nullptr, "IsInitialized", nullptr, nullptr, Z_Construct_UFunction_URiveFile_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_IsInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveFile_IsInitialized_Statics::RiveFile_eventIsInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveFile_IsInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveFile_IsInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveFile_IsInitialized_Statics::RiveFile_eventIsInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveFile_IsInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveFile_IsInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveFile::execIsInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInitialized();
	P_NATIVE_END;
}
// End Class URiveFile Function IsInitialized

// Begin Class URiveFile
void URiveFile::StaticRegisterNativesURiveFile()
{
	UClass* Class = URiveFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetArtboardNamesForDropdown", &URiveFile::execGetArtboardNamesForDropdown },
		{ "GetRiveAssetById", &URiveFile::execGetRiveAssetById },
		{ "GetRiveAssetByName", &URiveFile::execGetRiveAssetByName },
		{ "IsInitialized", &URiveFile::execIsInitialized },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveFile);
UClass* Z_Construct_UClass_URiveFile_NoRegister()
{
	return URiveFile::StaticClass();
}
struct Z_Construct_UClass_URiveFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Rive/RiveFile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRiveReady_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArtboardNames_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Artboards_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is only meant as a display feature for the editor, and not meant to\n// be used as functional code\n" },
#endif
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is only meant as a display feature for the editor, and not meant to\nbe used as functional code" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
		{ "NoResetToDefault", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "Import Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This property holds the import data\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This property holds the import data" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveFileData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveFile.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRiveReady;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ArtboardNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArtboardNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Artboards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Artboards;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RiveFilePath;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RiveFileData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RiveFileData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Assets_ValueProp;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Assets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Assets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URiveFile_GetArtboardNamesForDropdown, "GetArtboardNamesForDropdown" }, // 1093103995
		{ &Z_Construct_UFunction_URiveFile_GetRiveAssetById, "GetRiveAssetById" }, // 3541762494
		{ &Z_Construct_UFunction_URiveFile_GetRiveAssetByName, "GetRiveAssetByName" }, // 3146119170
		{ &Z_Construct_UFunction_URiveFile_IsInitialized, "IsInitialized" }, // 820143274
		{ &Z_Construct_UDelegateFunction_URiveFile_RiveReadyDelegate__DelegateSignature, "RiveReadyDelegate__DelegateSignature" }, // 4127694255
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_OnRiveReady = { "OnRiveReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveFile, OnRiveReady), Z_Construct_UDelegateFunction_URiveFile_RiveReadyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRiveReady_MetaData), NewProp_OnRiveReady_MetaData) }; // 4127694255
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_ArtboardNames_Inner = { "ArtboardNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_ArtboardNames = { "ArtboardNames", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveFile, ArtboardNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArtboardNames_MetaData), NewProp_ArtboardNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_Artboards_Inner = { "Artboards", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_Artboards = { "Artboards", nullptr, (EPropertyFlags)0x0010000400022801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveFile, Artboards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Artboards_MetaData), NewProp_Artboards_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_RiveFilePath = { "RiveFilePath", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveFile, RiveFilePath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveFilePath_MetaData), NewProp_RiveFilePath_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveFile, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_InitState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_InitState = { "InitState", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveFile, InitState), Z_Construct_UEnum_RiveRenderer_ERiveInitState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitState_MetaData), NewProp_InitState_MetaData) }; // 2490915981
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_RiveFileData_Inner = { "RiveFileData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_RiveFileData = { "RiveFileData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveFile, RiveFileData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveFileData_MetaData), NewProp_RiveFileData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveFile, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_Assets_ValueProp = { "Assets", nullptr, (EPropertyFlags)0x0104000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URiveAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_Assets_Key_KeyProp = { "Assets_Key", nullptr, (EPropertyFlags)0x0100000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URiveFile_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveFile, Assets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Assets_MetaData), NewProp_Assets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URiveFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_OnRiveReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_ArtboardNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_ArtboardNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_Artboards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_Artboards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_RiveFilePath,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_InitState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_InitState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_RiveFileData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_RiveFileData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_Assets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_Assets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveFile_Statics::NewProp_Assets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveFile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URiveFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveFile_Statics::ClassParams = {
	&URiveFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URiveFile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URiveFile_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveFile_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveFile()
{
	if (!Z_Registration_Info_UClass_URiveFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveFile.OuterSingleton, Z_Construct_UClass_URiveFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveFile.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<URiveFile>()
{
	return URiveFile::StaticClass();
}
URiveFile::URiveFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveFile);
URiveFile::~URiveFile() {}
// End Class URiveFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2309455_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveFile, URiveFile::StaticClass, TEXT("URiveFile"), &Z_Registration_Info_UClass_URiveFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveFile), 2683999792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2309455_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_3697868654(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2309455_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2309455_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveFile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

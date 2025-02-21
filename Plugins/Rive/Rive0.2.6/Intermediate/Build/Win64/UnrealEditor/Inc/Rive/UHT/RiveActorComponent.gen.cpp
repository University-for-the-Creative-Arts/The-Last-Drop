// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Game/RiveActorComponent.h"
#include "Rive/Public/Rive/RiveDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveActorComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RIVE_API UClass* Z_Construct_UClass_URiveActorComponent();
RIVE_API UClass* Z_Construct_UClass_URiveActorComponent_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveArtboard_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveAudioEngine_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveFile_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveTexture_NoRegister();
RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveActorComponent_RiveReadyDelegate__DelegateSignature();
RIVE_API UScriptStruct* Z_Construct_UScriptStruct_FRiveDescriptor();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Delegate FRiveReadyDelegate
struct Z_Construct_UDelegateFunction_URiveActorComponent_RiveReadyDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URiveActorComponent_RiveReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "RiveReadyDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveActorComponent_RiveReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_URiveActorComponent_RiveReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_URiveActorComponent_RiveReadyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URiveActorComponent_RiveReadyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void URiveActorComponent::FRiveReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveReadyDelegate)
{
	RiveReadyDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FRiveReadyDelegate

// Begin Class URiveActorComponent Function AddArtboard
struct Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics
{
	struct RiveActorComponent_eventAddArtboard_Parms
	{
		URiveFile* InRiveFile;
		FString InArtboardName;
		FString InStateMachineName;
		URiveArtboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArtboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStateMachineName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRiveFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InArtboardName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InStateMachineName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::NewProp_InRiveFile = { "InRiveFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventAddArtboard_Parms, InRiveFile), Z_Construct_UClass_URiveFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::NewProp_InArtboardName = { "InArtboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventAddArtboard_Parms, InArtboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArtboardName_MetaData), NewProp_InArtboardName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::NewProp_InStateMachineName = { "InStateMachineName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventAddArtboard_Parms, InStateMachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStateMachineName_MetaData), NewProp_InStateMachineName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventAddArtboard_Parms, ReturnValue), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::NewProp_InRiveFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::NewProp_InArtboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::NewProp_InStateMachineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "AddArtboard", nullptr, nullptr, Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::RiveActorComponent_eventAddArtboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::RiveActorComponent_eventAddArtboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveActorComponent_AddArtboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveActorComponent_AddArtboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveActorComponent::execAddArtboard)
{
	P_GET_OBJECT(URiveFile,Z_Param_InRiveFile);
	P_GET_PROPERTY(FStrProperty,Z_Param_InArtboardName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InStateMachineName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URiveArtboard**)Z_Param__Result=P_THIS->AddArtboard(Z_Param_InRiveFile,Z_Param_InArtboardName,Z_Param_InStateMachineName);
	P_NATIVE_END;
}
// End Class URiveActorComponent Function AddArtboard

// Begin Class URiveActorComponent Function GetArtboardAtIndex
struct Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics
{
	struct RiveActorComponent_eventGetArtboardAtIndex_Parms
	{
		int32 InIndex;
		URiveArtboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventGetArtboardAtIndex_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventGetArtboardAtIndex_Parms, ReturnValue), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "GetArtboardAtIndex", nullptr, nullptr, Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::RiveActorComponent_eventGetArtboardAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::RiveActorComponent_eventGetArtboardAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveActorComponent::execGetArtboardAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URiveArtboard**)Z_Param__Result=P_THIS->GetArtboardAtIndex(Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class URiveActorComponent Function GetArtboardAtIndex

// Begin Class URiveActorComponent Function GetArtboardCount
struct Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics
{
	struct RiveActorComponent_eventGetArtboardCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventGetArtboardCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "GetArtboardCount", nullptr, nullptr, Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::RiveActorComponent_eventGetArtboardCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::RiveActorComponent_eventGetArtboardCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveActorComponent_GetArtboardCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveActorComponent_GetArtboardCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveActorComponent::execGetArtboardCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetArtboardCount();
	P_NATIVE_END;
}
// End Class URiveActorComponent Function GetArtboardCount

// Begin Class URiveActorComponent Function GetArtboardNamesForDropdown
struct Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics
{
	struct RiveActorComponent_eventGetArtboardNamesForDropdown_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventGetArtboardNamesForDropdown_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "GetArtboardNamesForDropdown", nullptr, nullptr, Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::RiveActorComponent_eventGetArtboardNamesForDropdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::RiveActorComponent_eventGetArtboardNamesForDropdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveActorComponent::execGetArtboardNamesForDropdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetArtboardNamesForDropdown();
	P_NATIVE_END;
}
// End Class URiveActorComponent Function GetArtboardNamesForDropdown

// Begin Class URiveActorComponent Function GetDefaultArtboard
struct Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics
{
	struct RiveActorComponent_eventGetDefaultArtboard_Parms
	{
		URiveArtboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventGetDefaultArtboard_Parms, ReturnValue), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "GetDefaultArtboard", nullptr, nullptr, Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::RiveActorComponent_eventGetDefaultArtboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::RiveActorComponent_eventGetDefaultArtboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveActorComponent::execGetDefaultArtboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URiveArtboard**)Z_Param__Result=P_THIS->GetDefaultArtboard();
	P_NATIVE_END;
}
// End Class URiveActorComponent Function GetDefaultArtboard

// Begin Class URiveActorComponent Function GetStateMachineNamesForDropdown
struct Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics
{
	struct RiveActorComponent_eventGetStateMachineNamesForDropdown_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventGetStateMachineNamesForDropdown_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "GetStateMachineNamesForDropdown", nullptr, nullptr, Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::RiveActorComponent_eventGetStateMachineNamesForDropdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::RiveActorComponent_eventGetStateMachineNamesForDropdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveActorComponent::execGetStateMachineNamesForDropdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetStateMachineNamesForDropdown();
	P_NATIVE_END;
}
// End Class URiveActorComponent Function GetStateMachineNamesForDropdown

// Begin Class URiveActorComponent Function OnDefaultArtboardTickRender
struct Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics
{
	struct RiveActorComponent_eventOnDefaultArtboardTickRender_Parms
	{
		float DeltaTime;
		URiveArtboard* InArtboard;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArtboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventOnDefaultArtboardTickRender_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::NewProp_InArtboard = { "InArtboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventOnDefaultArtboardTickRender_Parms, InArtboard), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::NewProp_InArtboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "OnDefaultArtboardTickRender", nullptr, nullptr, Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::RiveActorComponent_eventOnDefaultArtboardTickRender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::RiveActorComponent_eventOnDefaultArtboardTickRender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveActorComponent::execOnDefaultArtboardTickRender)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_OBJECT(URiveArtboard,Z_Param_InArtboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDefaultArtboardTickRender(Z_Param_DeltaTime,Z_Param_InArtboard);
	P_NATIVE_END;
}
// End Class URiveActorComponent Function OnDefaultArtboardTickRender

// Begin Class URiveActorComponent Function RemoveArtboard
struct Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics
{
	struct RiveActorComponent_eventRemoveArtboard_Parms
	{
		URiveArtboard* InArtboard;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArtboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::NewProp_InArtboard = { "InArtboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventRemoveArtboard_Parms, InArtboard), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::NewProp_InArtboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "RemoveArtboard", nullptr, nullptr, Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::RiveActorComponent_eventRemoveArtboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::RiveActorComponent_eventRemoveArtboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveActorComponent_RemoveArtboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveActorComponent_RemoveArtboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveActorComponent::execRemoveArtboard)
{
	P_GET_OBJECT(URiveArtboard,Z_Param_InArtboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveArtboard(Z_Param_InArtboard);
	P_NATIVE_END;
}
// End Class URiveActorComponent Function RemoveArtboard

// Begin Class URiveActorComponent Function RenderRiveTest
struct Z_Construct_UFunction_URiveActorComponent_RenderRiveTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Render a test example for rive renderer\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render a test example for rive renderer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveActorComponent_RenderRiveTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "RenderRiveTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_RenderRiveTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveActorComponent_RenderRiveTest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URiveActorComponent_RenderRiveTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveActorComponent_RenderRiveTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveActorComponent::execRenderRiveTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenderRiveTest();
	P_NATIVE_END;
}
// End Class URiveActorComponent Function RenderRiveTest

// Begin Class URiveActorComponent Function ResizeRenderTarget
struct Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics
{
	struct RiveActorComponent_eventResizeRenderTarget_Parms
	{
		int32 InSizeX;
		int32 InSizeY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSizeY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::NewProp_InSizeX = { "InSizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventResizeRenderTarget_Parms, InSizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::NewProp_InSizeY = { "InSizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventResizeRenderTarget_Parms, InSizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::NewProp_InSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::NewProp_InSizeY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "ResizeRenderTarget", nullptr, nullptr, Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::RiveActorComponent_eventResizeRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::RiveActorComponent_eventResizeRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveActorComponent::execResizeRenderTarget)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InSizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSizeY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResizeRenderTarget(Z_Param_InSizeX,Z_Param_InSizeY);
	P_NATIVE_END;
}
// End Class URiveActorComponent Function ResizeRenderTarget

// Begin Class URiveActorComponent Function SetAudioEngine
struct Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics
{
	struct RiveActorComponent_eventSetAudioEngine_Parms
	{
		URiveAudioEngine* InRiveAudioEngine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRiveAudioEngine_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRiveAudioEngine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::NewProp_InRiveAudioEngine = { "InRiveAudioEngine", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveActorComponent_eventSetAudioEngine_Parms, InRiveAudioEngine), Z_Construct_UClass_URiveAudioEngine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRiveAudioEngine_MetaData), NewProp_InRiveAudioEngine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::NewProp_InRiveAudioEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveActorComponent, nullptr, "SetAudioEngine", nullptr, nullptr, Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::RiveActorComponent_eventSetAudioEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::RiveActorComponent_eventSetAudioEngine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveActorComponent_SetAudioEngine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveActorComponent_SetAudioEngine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveActorComponent::execSetAudioEngine)
{
	P_GET_OBJECT(URiveAudioEngine,Z_Param_InRiveAudioEngine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioEngine(Z_Param_InRiveAudioEngine);
	P_NATIVE_END;
}
// End Class URiveActorComponent Function SetAudioEngine

// Begin Class URiveActorComponent
void URiveActorComponent::StaticRegisterNativesURiveActorComponent()
{
	UClass* Class = URiveActorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddArtboard", &URiveActorComponent::execAddArtboard },
		{ "GetArtboardAtIndex", &URiveActorComponent::execGetArtboardAtIndex },
		{ "GetArtboardCount", &URiveActorComponent::execGetArtboardCount },
		{ "GetArtboardNamesForDropdown", &URiveActorComponent::execGetArtboardNamesForDropdown },
		{ "GetDefaultArtboard", &URiveActorComponent::execGetDefaultArtboard },
		{ "GetStateMachineNamesForDropdown", &URiveActorComponent::execGetStateMachineNamesForDropdown },
		{ "OnDefaultArtboardTickRender", &URiveActorComponent::execOnDefaultArtboardTickRender },
		{ "RemoveArtboard", &URiveActorComponent::execRemoveArtboard },
		{ "RenderRiveTest", &URiveActorComponent::execRenderRiveTest },
		{ "ResizeRenderTarget", &URiveActorComponent::execResizeRenderTarget },
		{ "SetAudioEngine", &URiveActorComponent::execSetAudioEngine },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveActorComponent);
UClass* Z_Construct_UClass_URiveActorComponent_NoRegister()
{
	return URiveActorComponent::StaticClass();
}
struct Z_Construct_UClass_URiveActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rive" },
		{ "DisplayName", "Rive" },
		{ "IncludePath", "Game/RiveActorComponent.h" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRiveReady_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRiveDescriptor_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Rive" },
		{ "ClampMax", "3840" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
		{ "UIMax", "3840" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Artboards_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveTexture_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveAudioEngine_MetaData[] = {
		{ "Category", "Rive" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/RiveActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRiveReady;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultRiveDescriptor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Artboards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Artboards;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RiveTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RiveAudioEngine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URiveActorComponent_AddArtboard, "AddArtboard" }, // 429342597
		{ &Z_Construct_UFunction_URiveActorComponent_GetArtboardAtIndex, "GetArtboardAtIndex" }, // 1396732561
		{ &Z_Construct_UFunction_URiveActorComponent_GetArtboardCount, "GetArtboardCount" }, // 2832816990
		{ &Z_Construct_UFunction_URiveActorComponent_GetArtboardNamesForDropdown, "GetArtboardNamesForDropdown" }, // 3452394932
		{ &Z_Construct_UFunction_URiveActorComponent_GetDefaultArtboard, "GetDefaultArtboard" }, // 1396497323
		{ &Z_Construct_UFunction_URiveActorComponent_GetStateMachineNamesForDropdown, "GetStateMachineNamesForDropdown" }, // 2204766973
		{ &Z_Construct_UFunction_URiveActorComponent_OnDefaultArtboardTickRender, "OnDefaultArtboardTickRender" }, // 1097918248
		{ &Z_Construct_UFunction_URiveActorComponent_RemoveArtboard, "RemoveArtboard" }, // 581724848
		{ &Z_Construct_UFunction_URiveActorComponent_RenderRiveTest, "RenderRiveTest" }, // 1261730656
		{ &Z_Construct_UFunction_URiveActorComponent_ResizeRenderTarget, "ResizeRenderTarget" }, // 2728590485
		{ &Z_Construct_UDelegateFunction_URiveActorComponent_RiveReadyDelegate__DelegateSignature, "RiveReadyDelegate__DelegateSignature" }, // 1483583588
		{ &Z_Construct_UFunction_URiveActorComponent_SetAudioEngine, "SetAudioEngine" }, // 3028489592
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URiveActorComponent_Statics::NewProp_OnRiveReady = { "OnRiveReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveActorComponent, OnRiveReady), Z_Construct_UDelegateFunction_URiveActorComponent_RiveReadyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRiveReady_MetaData), NewProp_OnRiveReady_MetaData) }; // 1483583588
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URiveActorComponent_Statics::NewProp_DefaultRiveDescriptor = { "DefaultRiveDescriptor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveActorComponent, DefaultRiveDescriptor), Z_Construct_UScriptStruct_FRiveDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRiveDescriptor_MetaData), NewProp_DefaultRiveDescriptor_MetaData) }; // 521909231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URiveActorComponent_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveActorComponent, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiveActorComponent_Statics::NewProp_Artboards_Inner = { "Artboards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URiveActorComponent_Statics::NewProp_Artboards = { "Artboards", nullptr, (EPropertyFlags)0x0090000000002004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveActorComponent, Artboards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Artboards_MetaData), NewProp_Artboards_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiveActorComponent_Statics::NewProp_RiveTexture = { "RiveTexture", nullptr, (EPropertyFlags)0x0114000000002004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveActorComponent, RiveTexture), Z_Construct_UClass_URiveTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveTexture_MetaData), NewProp_RiveTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiveActorComponent_Statics::NewProp_RiveAudioEngine = { "RiveAudioEngine", nullptr, (EPropertyFlags)0x011400000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveActorComponent, RiveAudioEngine), Z_Construct_UClass_URiveAudioEngine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveAudioEngine_MetaData), NewProp_RiveAudioEngine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URiveActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveActorComponent_Statics::NewProp_OnRiveReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveActorComponent_Statics::NewProp_DefaultRiveDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveActorComponent_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveActorComponent_Statics::NewProp_Artboards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveActorComponent_Statics::NewProp_Artboards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveActorComponent_Statics::NewProp_RiveTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveActorComponent_Statics::NewProp_RiveAudioEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveActorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URiveActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveActorComponent_Statics::ClassParams = {
	&URiveActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URiveActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URiveActorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveActorComponent()
{
	if (!Z_Registration_Info_UClass_URiveActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveActorComponent.OuterSingleton, Z_Construct_UClass_URiveActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveActorComponent.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<URiveActorComponent>()
{
	return URiveActorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveActorComponent);
URiveActorComponent::~URiveActorComponent() {}
// End Class URiveActorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveActorComponent, URiveActorComponent::StaticClass, TEXT("URiveActorComponent"), &Z_Registration_Info_UClass_URiveActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveActorComponent), 3201242424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_851081133(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_Game_RiveActorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

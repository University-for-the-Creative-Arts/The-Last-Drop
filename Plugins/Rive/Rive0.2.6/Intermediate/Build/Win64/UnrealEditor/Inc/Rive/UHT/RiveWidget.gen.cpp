// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/UMG/RiveWidget.h"
#include "Rive/Public/Rive/RiveDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
RIVE_API UClass* Z_Construct_UClass_URiveArtboard_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveAudioEngine_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveTextureObject_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveWidget();
RIVE_API UClass* Z_Construct_UClass_URiveWidget_NoRegister();
RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveWidget_RiveReadyDelegate__DelegateSignature();
RIVE_API UScriptStruct* Z_Construct_UScriptStruct_FRiveDescriptor();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Delegate FRiveReadyDelegate
struct Z_Construct_UDelegateFunction_URiveWidget_RiveReadyDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URiveWidget_RiveReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveWidget, nullptr, "RiveReadyDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveWidget_RiveReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_URiveWidget_RiveReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_URiveWidget_RiveReadyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URiveWidget_RiveReadyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void URiveWidget::FRiveReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveReadyDelegate)
{
	RiveReadyDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FRiveReadyDelegate

// Begin Class URiveWidget Function CheckArtboardSize
struct Z_Construct_UFunction_URiveWidget_CheckArtboardSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveWidget_CheckArtboardSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveWidget, nullptr, "CheckArtboardSize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_CheckArtboardSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveWidget_CheckArtboardSize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URiveWidget_CheckArtboardSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveWidget_CheckArtboardSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveWidget::execCheckArtboardSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckArtboardSize();
	P_NATIVE_END;
}
// End Class URiveWidget Function CheckArtboardSize

// Begin Class URiveWidget Function GetArtboard
struct Z_Construct_UFunction_URiveWidget_GetArtboard_Statics
{
	struct RiveWidget_eventGetArtboard_Parms
	{
		URiveArtboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveWidget_eventGetArtboard_Parms, ReturnValue), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveWidget, nullptr, "GetArtboard", nullptr, nullptr, Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::RiveWidget_eventGetArtboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::RiveWidget_eventGetArtboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveWidget_GetArtboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveWidget_GetArtboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveWidget::execGetArtboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URiveArtboard**)Z_Param__Result=P_THIS->GetArtboard();
	P_NATIVE_END;
}
// End Class URiveWidget Function GetArtboard

// Begin Class URiveWidget Function GetArtboardNamesForDropdown
struct Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics
{
	struct RiveWidget_eventGetArtboardNamesForDropdown_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveWidget_eventGetArtboardNamesForDropdown_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveWidget, nullptr, "GetArtboardNamesForDropdown", nullptr, nullptr, Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::RiveWidget_eventGetArtboardNamesForDropdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::RiveWidget_eventGetArtboardNamesForDropdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveWidget::execGetArtboardNamesForDropdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetArtboardNamesForDropdown();
	P_NATIVE_END;
}
// End Class URiveWidget Function GetArtboardNamesForDropdown

// Begin Class URiveWidget Function GetStateMachineNamesForDropdown
struct Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics
{
	struct RiveWidget_eventGetStateMachineNamesForDropdown_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveWidget_eventGetStateMachineNamesForDropdown_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveWidget, nullptr, "GetStateMachineNamesForDropdown", nullptr, nullptr, Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::RiveWidget_eventGetStateMachineNamesForDropdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::RiveWidget_eventGetStateMachineNamesForDropdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveWidget::execGetStateMachineNamesForDropdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetStateMachineNamesForDropdown();
	P_NATIVE_END;
}
// End Class URiveWidget Function GetStateMachineNamesForDropdown

// Begin Class URiveWidget Function OnRiveObjectReady
struct Z_Construct_UFunction_URiveWidget_OnRiveObjectReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveWidget_OnRiveObjectReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveWidget, nullptr, "OnRiveObjectReady", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_OnRiveObjectReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveWidget_OnRiveObjectReady_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URiveWidget_OnRiveObjectReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveWidget_OnRiveObjectReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveWidget::execOnRiveObjectReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRiveObjectReady();
	P_NATIVE_END;
}
// End Class URiveWidget Function OnRiveObjectReady

// Begin Class URiveWidget Function OnSWidgetSizeChanged
struct Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics
{
	struct RiveWidget_eventOnSWidgetSizeChanged_Parms
	{
		FVector2D NewSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveWidget_eventOnSWidgetSizeChanged_Parms, NewSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSize_MetaData), NewProp_NewSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::NewProp_NewSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveWidget, nullptr, "OnSWidgetSizeChanged", nullptr, nullptr, Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::RiveWidget_eventOnSWidgetSizeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::RiveWidget_eventOnSWidgetSizeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveWidget::execOnSWidgetSizeChanged)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NewSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSWidgetSizeChanged(Z_Param_Out_NewSize);
	P_NATIVE_END;
}
// End Class URiveWidget Function OnSWidgetSizeChanged

// Begin Class URiveWidget Function SetAudioEngine
struct Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics
{
	struct RiveWidget_eventSetAudioEngine_Parms
	{
		URiveAudioEngine* InRiveAudioEngine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRiveAudioEngine_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRiveAudioEngine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::NewProp_InRiveAudioEngine = { "InRiveAudioEngine", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveWidget_eventSetAudioEngine_Parms, InRiveAudioEngine), Z_Construct_UClass_URiveAudioEngine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRiveAudioEngine_MetaData), NewProp_InRiveAudioEngine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::NewProp_InRiveAudioEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveWidget, nullptr, "SetAudioEngine", nullptr, nullptr, Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::RiveWidget_eventSetAudioEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::RiveWidget_eventSetAudioEngine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveWidget_SetAudioEngine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveWidget_SetAudioEngine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveWidget::execSetAudioEngine)
{
	P_GET_OBJECT(URiveAudioEngine,Z_Param_InRiveAudioEngine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioEngine(Z_Param_InRiveAudioEngine);
	P_NATIVE_END;
}
// End Class URiveWidget Function SetAudioEngine

// Begin Class URiveWidget Function SetRiveDescriptor
struct Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics
{
	struct RiveWidget_eventSetRiveDescriptor_Parms
	{
		FRiveDescriptor newDescriptor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_newDescriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_newDescriptor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::NewProp_newDescriptor = { "newDescriptor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveWidget_eventSetRiveDescriptor_Parms, newDescriptor), Z_Construct_UScriptStruct_FRiveDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_newDescriptor_MetaData), NewProp_newDescriptor_MetaData) }; // 521909231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::NewProp_newDescriptor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveWidget, nullptr, "SetRiveDescriptor", nullptr, nullptr, Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::RiveWidget_eventSetRiveDescriptor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::RiveWidget_eventSetRiveDescriptor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveWidget_SetRiveDescriptor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveWidget_SetRiveDescriptor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveWidget::execSetRiveDescriptor)
{
	P_GET_STRUCT_REF(FRiveDescriptor,Z_Param_Out_newDescriptor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRiveDescriptor(Z_Param_Out_newDescriptor);
	P_NATIVE_END;
}
// End Class URiveWidget Function SetRiveDescriptor

// Begin Class URiveWidget
void URiveWidget::StaticRegisterNativesURiveWidget()
{
	UClass* Class = URiveWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckArtboardSize", &URiveWidget::execCheckArtboardSize },
		{ "GetArtboard", &URiveWidget::execGetArtboard },
		{ "GetArtboardNamesForDropdown", &URiveWidget::execGetArtboardNamesForDropdown },
		{ "GetStateMachineNamesForDropdown", &URiveWidget::execGetStateMachineNamesForDropdown },
		{ "OnRiveObjectReady", &URiveWidget::execOnRiveObjectReady },
		{ "OnSWidgetSizeChanged", &URiveWidget::execOnSWidgetSizeChanged },
		{ "SetAudioEngine", &URiveWidget::execSetAudioEngine },
		{ "SetRiveDescriptor", &URiveWidget::execSetRiveDescriptor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveWidget);
UClass* Z_Construct_UClass_URiveWidget_NoRegister()
{
	return URiveWidget::StaticClass();
}
struct Z_Construct_UClass_URiveWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "UMG/RiveWidget.h" },
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRiveReady_MetaData[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Attribute(s)\n     */" },
#endif
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute(s)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveDescriptor_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveTextureObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMG/RiveWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRiveReady;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RiveDescriptor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RiveTextureObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URiveWidget_CheckArtboardSize, "CheckArtboardSize" }, // 2384898667
		{ &Z_Construct_UFunction_URiveWidget_GetArtboard, "GetArtboard" }, // 2102799457
		{ &Z_Construct_UFunction_URiveWidget_GetArtboardNamesForDropdown, "GetArtboardNamesForDropdown" }, // 4271768984
		{ &Z_Construct_UFunction_URiveWidget_GetStateMachineNamesForDropdown, "GetStateMachineNamesForDropdown" }, // 2125490383
		{ &Z_Construct_UFunction_URiveWidget_OnRiveObjectReady, "OnRiveObjectReady" }, // 3560130694
		{ &Z_Construct_UFunction_URiveWidget_OnSWidgetSizeChanged, "OnSWidgetSizeChanged" }, // 289414964
		{ &Z_Construct_UDelegateFunction_URiveWidget_RiveReadyDelegate__DelegateSignature, "RiveReadyDelegate__DelegateSignature" }, // 4008677513
		{ &Z_Construct_UFunction_URiveWidget_SetAudioEngine, "SetAudioEngine" }, // 505470902
		{ &Z_Construct_UFunction_URiveWidget_SetRiveDescriptor, "SetRiveDescriptor" }, // 2871720130
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URiveWidget_Statics::NewProp_OnRiveReady = { "OnRiveReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveWidget, OnRiveReady), Z_Construct_UDelegateFunction_URiveWidget_RiveReadyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRiveReady_MetaData), NewProp_OnRiveReady_MetaData) }; // 4008677513
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URiveWidget_Statics::NewProp_RiveDescriptor = { "RiveDescriptor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveWidget, RiveDescriptor), Z_Construct_UScriptStruct_FRiveDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveDescriptor_MetaData), NewProp_RiveDescriptor_MetaData) }; // 521909231
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiveWidget_Statics::NewProp_RiveTextureObject = { "RiveTextureObject", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveWidget, RiveTextureObject), Z_Construct_UClass_URiveTextureObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveTextureObject_MetaData), NewProp_RiveTextureObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URiveWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveWidget_Statics::NewProp_OnRiveReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveWidget_Statics::NewProp_RiveDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveWidget_Statics::NewProp_RiveTextureObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URiveWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveWidget_Statics::ClassParams = {
	&URiveWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URiveWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URiveWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveWidget()
{
	if (!Z_Registration_Info_UClass_URiveWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveWidget.OuterSingleton, Z_Construct_UClass_URiveWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveWidget.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<URiveWidget>()
{
	return URiveWidget::StaticClass();
}
URiveWidget::URiveWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveWidget);
// End Class URiveWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveWidget, URiveWidget::StaticClass, TEXT("URiveWidget"), &Z_Registration_Info_UClass_URiveWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveWidget), 3835397124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_951141609(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive_Rive0_2_6_Source_Rive_Public_UMG_RiveWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

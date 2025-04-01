// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Rive/RiveTextureObject.h"
#include "Rive/Public/Rive/RiveDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveTextureObject() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
RIVE_API UClass* Z_Construct_UClass_URiveArtboard_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveAudioEngine_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveTexture();
RIVE_API UClass* Z_Construct_UClass_URiveTextureObject();
RIVE_API UClass* Z_Construct_UClass_URiveTextureObject_NoRegister();
RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveTextureObject_RiveReadyDelegate__DelegateSignature();
RIVE_API UScriptStruct* Z_Construct_UScriptStruct_FRiveDescriptor();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Delegate FRiveReadyDelegate
struct Z_Construct_UDelegateFunction_URiveTextureObject_RiveReadyDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URiveTextureObject_RiveReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveTextureObject, nullptr, "RiveReadyDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveTextureObject_RiveReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_URiveTextureObject_RiveReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_URiveTextureObject_RiveReadyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URiveTextureObject_RiveReadyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void URiveTextureObject::FRiveReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveReadyDelegate)
{
	RiveReadyDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FRiveReadyDelegate

// Begin Class URiveTextureObject Function GetArtboard
struct Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics
{
	struct RiveTextureObject_eventGetArtboard_Parms
	{
		URiveArtboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventGetArtboard_Parms, ReturnValue), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveTextureObject, nullptr, "GetArtboard", nullptr, nullptr, Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::RiveTextureObject_eventGetArtboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::RiveTextureObject_eventGetArtboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveTextureObject_GetArtboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveTextureObject_GetArtboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveTextureObject::execGetArtboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URiveArtboard**)Z_Param__Result=P_THIS->GetArtboard();
	P_NATIVE_END;
}
// End Class URiveTextureObject Function GetArtboard

// Begin Class URiveTextureObject Function GetArtboardNamesForDropdown
struct Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics
{
	struct RiveTextureObject_eventGetArtboardNamesForDropdown_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventGetArtboardNamesForDropdown_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveTextureObject, nullptr, "GetArtboardNamesForDropdown", nullptr, nullptr, Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::RiveTextureObject_eventGetArtboardNamesForDropdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::RiveTextureObject_eventGetArtboardNamesForDropdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveTextureObject::execGetArtboardNamesForDropdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetArtboardNamesForDropdown();
	P_NATIVE_END;
}
// End Class URiveTextureObject Function GetArtboardNamesForDropdown

// Begin Class URiveTextureObject Function GetClearColor
struct Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics
{
	struct RiveTextureObject_eventGetClearColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventGetClearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveTextureObject, nullptr, "GetClearColor", nullptr, nullptr, Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::RiveTextureObject_eventGetClearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::RiveTextureObject_eventGetClearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveTextureObject_GetClearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveTextureObject_GetClearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveTextureObject::execGetClearColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetClearColor();
	P_NATIVE_END;
}
// End Class URiveTextureObject Function GetClearColor

// Begin Class URiveTextureObject Function GetLocalCoordinate
struct Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics
{
	struct RiveTextureObject_eventGetLocalCoordinate_Parms
	{
		URiveArtboard* InArtboard;
		FVector2f InPosition;
		FVector2f ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArtboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::NewProp_InArtboard = { "InArtboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventGetLocalCoordinate_Parms, InArtboard), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventGetLocalCoordinate_Parms, InPosition), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPosition_MetaData), NewProp_InPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventGetLocalCoordinate_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::NewProp_InArtboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::NewProp_InPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveTextureObject, nullptr, "GetLocalCoordinate", nullptr, nullptr, Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::RiveTextureObject_eventGetLocalCoordinate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::RiveTextureObject_eventGetLocalCoordinate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveTextureObject::execGetLocalCoordinate)
{
	P_GET_OBJECT(URiveArtboard,Z_Param_InArtboard);
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_InPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2f*)Z_Param__Result=P_THIS->GetLocalCoordinate(Z_Param_InArtboard,Z_Param_Out_InPosition);
	P_NATIVE_END;
}
// End Class URiveTextureObject Function GetLocalCoordinate

// Begin Class URiveTextureObject Function GetLocalCoordinatesFromExtents
struct Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics
{
	struct RiveTextureObject_eventGetLocalCoordinatesFromExtents_Parms
	{
		FVector2f InPosition;
		FBox2f InExtents;
		FVector2f ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Returns the coordinates in the current Artboard space\n     * @param InExtents Extents of the RenderTarget, will be mapped to the\n     * RenderTarget size\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the coordinates in the current Artboard space\n@param InExtents Extents of the RenderTarget, will be mapped to the\nRenderTarget size" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExtents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InExtents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventGetLocalCoordinatesFromExtents_Parms, InPosition), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPosition_MetaData), NewProp_InPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::NewProp_InExtents = { "InExtents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventGetLocalCoordinatesFromExtents_Parms, InExtents), Z_Construct_UScriptStruct_FBox2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExtents_MetaData), NewProp_InExtents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventGetLocalCoordinatesFromExtents_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::NewProp_InPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::NewProp_InExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveTextureObject, nullptr, "GetLocalCoordinatesFromExtents", nullptr, nullptr, Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::RiveTextureObject_eventGetLocalCoordinatesFromExtents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::RiveTextureObject_eventGetLocalCoordinatesFromExtents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveTextureObject::execGetLocalCoordinatesFromExtents)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_InPosition);
	P_GET_STRUCT_REF(FBox2f,Z_Param_Out_InExtents);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2f*)Z_Param__Result=P_THIS->GetLocalCoordinatesFromExtents(Z_Param_Out_InPosition,Z_Param_Out_InExtents);
	P_NATIVE_END;
}
// End Class URiveTextureObject Function GetLocalCoordinatesFromExtents

// Begin Class URiveTextureObject Function GetStateMachineNamesForDropdown
struct Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics
{
	struct RiveTextureObject_eventGetStateMachineNamesForDropdown_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventGetStateMachineNamesForDropdown_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveTextureObject, nullptr, "GetStateMachineNamesForDropdown", nullptr, nullptr, Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::RiveTextureObject_eventGetStateMachineNamesForDropdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::RiveTextureObject_eventGetStateMachineNamesForDropdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveTextureObject::execGetStateMachineNamesForDropdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetStateMachineNamesForDropdown();
	P_NATIVE_END;
}
// End Class URiveTextureObject Function GetStateMachineNamesForDropdown

// Begin Class URiveTextureObject Function Initialize
struct Z_Construct_UFunction_URiveTextureObject_Initialize_Statics
{
	struct RiveTextureObject_eventInitialize_Parms
	{
		FRiveDescriptor InRiveDescriptor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRiveDescriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRiveDescriptor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::NewProp_InRiveDescriptor = { "InRiveDescriptor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventInitialize_Parms, InRiveDescriptor), Z_Construct_UScriptStruct_FRiveDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRiveDescriptor_MetaData), NewProp_InRiveDescriptor_MetaData) }; // 521909231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::NewProp_InRiveDescriptor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveTextureObject, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::RiveTextureObject_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::RiveTextureObject_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveTextureObject_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveTextureObject_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveTextureObject::execInitialize)
{
	P_GET_STRUCT_REF(FRiveDescriptor,Z_Param_Out_InRiveDescriptor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_Out_InRiveDescriptor);
	P_NATIVE_END;
}
// End Class URiveTextureObject Function Initialize

// Begin Class URiveTextureObject Function OnArtboardTickRender
struct Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics
{
	struct RiveTextureObject_eventOnArtboardTickRender_Parms
	{
		float DeltaTime;
		URiveArtboard* InArtboard;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArtboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventOnArtboardTickRender_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::NewProp_InArtboard = { "InArtboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventOnArtboardTickRender_Parms, InArtboard), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::NewProp_InArtboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveTextureObject, nullptr, "OnArtboardTickRender", nullptr, nullptr, Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::RiveTextureObject_eventOnArtboardTickRender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::RiveTextureObject_eventOnArtboardTickRender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveTextureObject::execOnArtboardTickRender)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_OBJECT(URiveArtboard,Z_Param_InArtboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnArtboardTickRender(Z_Param_DeltaTime,Z_Param_InArtboard);
	P_NATIVE_END;
}
// End Class URiveTextureObject Function OnArtboardTickRender

// Begin Class URiveTextureObject Function SetAudioEngine
struct Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics
{
	struct RiveTextureObject_eventSetAudioEngine_Parms
	{
		URiveAudioEngine* InRiveAudioEngine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRiveAudioEngine_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRiveAudioEngine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::NewProp_InRiveAudioEngine = { "InRiveAudioEngine", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveTextureObject_eventSetAudioEngine_Parms, InRiveAudioEngine), Z_Construct_UClass_URiveAudioEngine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRiveAudioEngine_MetaData), NewProp_InRiveAudioEngine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::NewProp_InRiveAudioEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveTextureObject, nullptr, "SetAudioEngine", nullptr, nullptr, Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::RiveTextureObject_eventSetAudioEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::RiveTextureObject_eventSetAudioEngine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveTextureObject_SetAudioEngine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveTextureObject_SetAudioEngine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveTextureObject::execSetAudioEngine)
{
	P_GET_OBJECT(URiveAudioEngine,Z_Param_InRiveAudioEngine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioEngine(Z_Param_InRiveAudioEngine);
	P_NATIVE_END;
}
// End Class URiveTextureObject Function SetAudioEngine

// Begin Class URiveTextureObject
void URiveTextureObject::StaticRegisterNativesURiveTextureObject()
{
	UClass* Class = URiveTextureObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetArtboard", &URiveTextureObject::execGetArtboard },
		{ "GetArtboardNamesForDropdown", &URiveTextureObject::execGetArtboardNamesForDropdown },
		{ "GetClearColor", &URiveTextureObject::execGetClearColor },
		{ "GetLocalCoordinate", &URiveTextureObject::execGetLocalCoordinate },
		{ "GetLocalCoordinatesFromExtents", &URiveTextureObject::execGetLocalCoordinatesFromExtents },
		{ "GetStateMachineNamesForDropdown", &URiveTextureObject::execGetStateMachineNamesForDropdown },
		{ "Initialize", &URiveTextureObject::execInitialize },
		{ "OnArtboardTickRender", &URiveTextureObject::execOnArtboardTickRender },
		{ "SetAudioEngine", &URiveTextureObject::execSetAudioEngine },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveTextureObject);
UClass* Z_Construct_UClass_URiveTextureObject_NoRegister()
{
	return URiveTextureObject::StaticClass();
}
struct Z_Construct_UClass_URiveTextureObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class represents the logical side of a single RiveTexture /\n * RenderTarget. It implements the logic to instantiate and tick an artboard\n * passed into it with a RiveDescriptor.\n */" },
#endif
		{ "HideCategories", "ImportSettings Compression Adjustments LevelOfDetail Compositing Object" },
		{ "IncludePath", "Rive/RiveTextureObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class represents the logical side of a single RiveTexture /\nRenderTarget. It implements the logic to instantiate and tick an artboard\npassed into it with a RiveDescriptor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRiveReady_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRendering_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveDescriptor_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Artboard_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
		{ "NoResetToDefault", "" },
		{ "ShowInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveAudioEngine_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Rive" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rive/RiveTextureObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRiveReady;
	static void NewProp_bIsRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRendering;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RiveDescriptor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Artboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RiveAudioEngine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URiveTextureObject_GetArtboard, "GetArtboard" }, // 883105596
		{ &Z_Construct_UFunction_URiveTextureObject_GetArtboardNamesForDropdown, "GetArtboardNamesForDropdown" }, // 3966331350
		{ &Z_Construct_UFunction_URiveTextureObject_GetClearColor, "GetClearColor" }, // 20080601
		{ &Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinate, "GetLocalCoordinate" }, // 2183755927
		{ &Z_Construct_UFunction_URiveTextureObject_GetLocalCoordinatesFromExtents, "GetLocalCoordinatesFromExtents" }, // 510827725
		{ &Z_Construct_UFunction_URiveTextureObject_GetStateMachineNamesForDropdown, "GetStateMachineNamesForDropdown" }, // 2529441961
		{ &Z_Construct_UFunction_URiveTextureObject_Initialize, "Initialize" }, // 1662078284
		{ &Z_Construct_UFunction_URiveTextureObject_OnArtboardTickRender, "OnArtboardTickRender" }, // 2381413481
		{ &Z_Construct_UDelegateFunction_URiveTextureObject_RiveReadyDelegate__DelegateSignature, "RiveReadyDelegate__DelegateSignature" }, // 4284761138
		{ &Z_Construct_UFunction_URiveTextureObject_SetAudioEngine, "SetAudioEngine" }, // 4136300901
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveTextureObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URiveTextureObject_Statics::NewProp_OnRiveReady = { "OnRiveReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveTextureObject, OnRiveReady), Z_Construct_UDelegateFunction_URiveTextureObject_RiveReadyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRiveReady_MetaData), NewProp_OnRiveReady_MetaData) }; // 4284761138
void Z_Construct_UClass_URiveTextureObject_Statics::NewProp_bIsRendering_SetBit(void* Obj)
{
	((URiveTextureObject*)Obj)->bIsRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URiveTextureObject_Statics::NewProp_bIsRendering = { "bIsRendering", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URiveTextureObject), &Z_Construct_UClass_URiveTextureObject_Statics::NewProp_bIsRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRendering_MetaData), NewProp_bIsRendering_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URiveTextureObject_Statics::NewProp_RiveDescriptor = { "RiveDescriptor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveTextureObject, RiveDescriptor), Z_Construct_UScriptStruct_FRiveDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveDescriptor_MetaData), NewProp_RiveDescriptor_MetaData) }; // 521909231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URiveTextureObject_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveTextureObject, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearColor_MetaData), NewProp_ClearColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiveTextureObject_Statics::NewProp_Artboard = { "Artboard", nullptr, (EPropertyFlags)0x0040000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveTextureObject, Artboard), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Artboard_MetaData), NewProp_Artboard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiveTextureObject_Statics::NewProp_RiveAudioEngine = { "RiveAudioEngine", nullptr, (EPropertyFlags)0x004000000008201c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveTextureObject, RiveAudioEngine), Z_Construct_UClass_URiveAudioEngine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveAudioEngine_MetaData), NewProp_RiveAudioEngine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URiveTextureObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveTextureObject_Statics::NewProp_OnRiveReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveTextureObject_Statics::NewProp_bIsRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveTextureObject_Statics::NewProp_RiveDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveTextureObject_Statics::NewProp_ClearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveTextureObject_Statics::NewProp_Artboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveTextureObject_Statics::NewProp_RiveAudioEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveTextureObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URiveTextureObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URiveTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveTextureObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveTextureObject_Statics::ClassParams = {
	&URiveTextureObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URiveTextureObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URiveTextureObject_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveTextureObject_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveTextureObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveTextureObject()
{
	if (!Z_Registration_Info_UClass_URiveTextureObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveTextureObject.OuterSingleton, Z_Construct_UClass_URiveTextureObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveTextureObject.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<URiveTextureObject>()
{
	return URiveTextureObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveTextureObject);
URiveTextureObject::~URiveTextureObject() {}
// End Class URiveTextureObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveTextureObject, URiveTextureObject::StaticClass, TEXT("URiveTextureObject"), &Z_Registration_Info_UClass_URiveTextureObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveTextureObject), 4095986577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_1505767923(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveTextureObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

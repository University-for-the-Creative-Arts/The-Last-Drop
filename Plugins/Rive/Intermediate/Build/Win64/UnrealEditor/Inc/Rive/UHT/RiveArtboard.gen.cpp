// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Rive/RiveArtboard.h"
#include "Rive/Public/Rive/RiveEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveArtboard() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
RIVE_API UClass* Z_Construct_UClass_URiveArtboard();
RIVE_API UClass* Z_Construct_UClass_URiveArtboard_NoRegister();
RIVE_API UClass* Z_Construct_UClass_URiveAudioEngine_NoRegister();
RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature();
RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature();
RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature();
RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature();
RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature();
RIVE_API UScriptStruct* Z_Construct_UScriptStruct_FRiveEvent();
RIVERENDERER_API UEnum* Z_Construct_UEnum_RiveRenderer_ERiveAlignment();
RIVERENDERER_API UEnum* Z_Construct_UEnum_RiveRenderer_ERiveFitType();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Delegate FRiveEventDelegate
struct Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics
{
	struct RiveArtboard_eventRiveEventDelegate_Parms
	{
		URiveArtboard* Artboard;
		TArray<FRiveEvent> ReportedEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Artboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReportedEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReportedEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::NewProp_Artboard = { "Artboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventRiveEventDelegate_Parms, Artboard), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::NewProp_ReportedEvents_Inner = { "ReportedEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRiveEvent, METADATA_PARAMS(0, nullptr) }; // 4168395245
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::NewProp_ReportedEvents = { "ReportedEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventRiveEventDelegate_Parms, ReportedEvents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4168395245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::NewProp_Artboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::NewProp_ReportedEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::NewProp_ReportedEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "RiveEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::RiveArtboard_eventRiveEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::RiveArtboard_eventRiveEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void URiveArtboard::FRiveEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveEventDelegate, URiveArtboard* Artboard, const TArray<FRiveEvent>& ReportedEvents)
{
	struct RiveArtboard_eventRiveEventDelegate_Parms
	{
		URiveArtboard* Artboard;
		TArray<FRiveEvent> ReportedEvents;
	};
	RiveArtboard_eventRiveEventDelegate_Parms Parms;
	Parms.Artboard=Artboard;
	Parms.ReportedEvents=ReportedEvents;
	RiveEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRiveEventDelegate

// Begin Delegate FRiveNamedEventDelegate
struct Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics
{
	struct RiveArtboard_eventRiveNamedEventDelegate_Parms
	{
		URiveArtboard* Artboard;
		FRiveEvent Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Artboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::NewProp_Artboard = { "Artboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventRiveNamedEventDelegate_Parms, Artboard), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventRiveNamedEventDelegate_Parms, Event), Z_Construct_UScriptStruct_FRiveEvent, METADATA_PARAMS(0, nullptr) }; // 4168395245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::NewProp_Artboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "RiveNamedEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::RiveArtboard_eventRiveNamedEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::RiveArtboard_eventRiveNamedEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void URiveArtboard::FRiveNamedEventDelegate_DelegateWrapper(const FScriptDelegate& RiveNamedEventDelegate, URiveArtboard* Artboard, FRiveEvent Event)
{
	struct RiveArtboard_eventRiveNamedEventDelegate_Parms
	{
		URiveArtboard* Artboard;
		FRiveEvent Event;
	};
	RiveArtboard_eventRiveNamedEventDelegate_Parms Parms;
	Parms.Artboard=Artboard;
	Parms.Event=Event;
	RiveNamedEventDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FRiveNamedEventDelegate

// Begin Delegate FRiveNamedEventsDelegate
struct Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics
{
	struct RiveArtboard_eventRiveNamedEventsDelegate_Parms
	{
		URiveArtboard* Artboard;
		FRiveEvent Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Artboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::NewProp_Artboard = { "Artboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventRiveNamedEventsDelegate_Parms, Artboard), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventRiveNamedEventsDelegate_Parms, Event), Z_Construct_UScriptStruct_FRiveEvent, METADATA_PARAMS(0, nullptr) }; // 4168395245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::NewProp_Artboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "RiveNamedEventsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::RiveArtboard_eventRiveNamedEventsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::RiveArtboard_eventRiveNamedEventsDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void URiveArtboard::FRiveNamedEventsDelegate_DelegateWrapper(const FMulticastScriptDelegate& RiveNamedEventsDelegate, URiveArtboard* Artboard, FRiveEvent Event)
{
	struct RiveArtboard_eventRiveNamedEventsDelegate_Parms
	{
		URiveArtboard* Artboard;
		FRiveEvent Event;
	};
	RiveArtboard_eventRiveNamedEventsDelegate_Parms Parms;
	Parms.Artboard=Artboard;
	Parms.Event=Event;
	RiveNamedEventsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRiveNamedEventsDelegate

// Begin Delegate FRiveCoordinatesDelegate
struct Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics
{
	struct RiveArtboard_eventRiveCoordinatesDelegate_Parms
	{
		URiveArtboard* Artboard;
		FVector2f TexturePosition;
		FVector2f ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturePosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Artboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TexturePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::NewProp_Artboard = { "Artboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventRiveCoordinatesDelegate_Parms, Artboard), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::NewProp_TexturePosition = { "TexturePosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventRiveCoordinatesDelegate_Parms, TexturePosition), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturePosition_MetaData), NewProp_TexturePosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventRiveCoordinatesDelegate_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::NewProp_Artboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::NewProp_TexturePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "RiveCoordinatesDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::RiveArtboard_eventRiveCoordinatesDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D20000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::RiveArtboard_eventRiveCoordinatesDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
FVector2f URiveArtboard::FRiveCoordinatesDelegate_DelegateWrapper(const FScriptDelegate& RiveCoordinatesDelegate, URiveArtboard* Artboard, FVector2f const& TexturePosition)
{
	struct RiveArtboard_eventRiveCoordinatesDelegate_Parms
	{
		URiveArtboard* Artboard;
		FVector2f TexturePosition;
		FVector2f ReturnValue;

		/** Constructor, initializes return property only **/
		RiveArtboard_eventRiveCoordinatesDelegate_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	RiveArtboard_eventRiveCoordinatesDelegate_Parms Parms;
	Parms.Artboard=Artboard;
	Parms.TexturePosition=TexturePosition;
	RiveCoordinatesDelegate.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FRiveCoordinatesDelegate

// Begin Delegate FRiveTickDelegate
struct Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics
{
	struct RiveArtboard_eventRiveTickDelegate_Parms
	{
		float DeltaTime;
		URiveArtboard* Artboard;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Artboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventRiveTickDelegate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::NewProp_Artboard = { "Artboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventRiveTickDelegate_Parms, Artboard), Z_Construct_UClass_URiveArtboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::NewProp_Artboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "RiveTickDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::RiveArtboard_eventRiveTickDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::RiveArtboard_eventRiveTickDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void URiveArtboard::FRiveTickDelegate_DelegateWrapper(const FScriptDelegate& RiveTickDelegate, float DeltaTime, URiveArtboard* Artboard)
{
	struct RiveArtboard_eventRiveTickDelegate_Parms
	{
		float DeltaTime;
		URiveArtboard* Artboard;
	};
	RiveArtboard_eventRiveTickDelegate_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	Parms.Artboard=Artboard;
	RiveTickDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FRiveTickDelegate

// Begin Class URiveArtboard Function AdvanceStateMachine
struct Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics
{
	struct RiveArtboard_eventAdvanceStateMachine_Parms
	{
		float InDeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::NewProp_InDeltaSeconds = { "InDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventAdvanceStateMachine_Parms, InDeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::NewProp_InDeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "AdvanceStateMachine", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::RiveArtboard_eventAdvanceStateMachine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::RiveArtboard_eventAdvanceStateMachine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execAdvanceStateMachine)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdvanceStateMachine(Z_Param_InDeltaSeconds);
	P_NATIVE_END;
}
// End Class URiveArtboard Function AdvanceStateMachine

// Begin Class URiveArtboard Function Align
struct Z_Construct_UFunction_URiveArtboard_Align_Statics
{
	struct RiveArtboard_eventAlign_Parms
	{
		FBox2f InBox;
		ERiveFitType InFitType;
		ERiveAlignment InAlignment;
		float InScaleFactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBox;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InFitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InFitType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InAlignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InAlignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InScaleFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InBox = { "InBox", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventAlign_Parms, InBox), Z_Construct_UScriptStruct_FBox2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBox_MetaData), NewProp_InBox_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InFitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InFitType = { "InFitType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventAlign_Parms, InFitType), Z_Construct_UEnum_RiveRenderer_ERiveFitType, METADATA_PARAMS(0, nullptr) }; // 2097954338
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InAlignment = { "InAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventAlign_Parms, InAlignment), Z_Construct_UEnum_RiveRenderer_ERiveAlignment, METADATA_PARAMS(0, nullptr) }; // 3279353217
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InScaleFactor = { "InScaleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventAlign_Parms, InScaleFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_Align_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InFitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InFitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InAlignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_Align_Statics::NewProp_InScaleFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_Align_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_Align_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "Align", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_Align_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_Align_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_Align_Statics::RiveArtboard_eventAlign_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_Align_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_Align_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_Align_Statics::RiveArtboard_eventAlign_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_Align()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_Align_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execAlign)
{
	P_GET_STRUCT(FBox2f,Z_Param_InBox);
	P_GET_ENUM(ERiveFitType,Z_Param_InFitType);
	P_GET_ENUM(ERiveAlignment,Z_Param_InAlignment);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InScaleFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Align(Z_Param_InBox,ERiveFitType(Z_Param_InFitType),ERiveAlignment(Z_Param_InAlignment),Z_Param_InScaleFactor);
	P_NATIVE_END;
}
// End Class URiveArtboard Function Align

// Begin Class URiveArtboard Function BindNamedRiveEvent
struct Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics
{
	struct RiveArtboard_eventBindNamedRiveEvent_Parms
	{
		FString EventName;
		FScriptDelegate Event;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Event;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventBindNamedRiveEvent_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventBindNamedRiveEvent_Parms, Event), Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 535670754
void Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiveArtboard_eventBindNamedRiveEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventBindNamedRiveEvent_Parms), &Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "BindNamedRiveEvent", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::RiveArtboard_eventBindNamedRiveEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::RiveArtboard_eventBindNamedRiveEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execBindNamedRiveEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BindNamedRiveEvent(Z_Param_EventName,FRiveNamedEventDelegate(Z_Param_Out_Event));
	P_NATIVE_END;
}
// End Class URiveArtboard Function BindNamedRiveEvent

// Begin Class URiveArtboard Function Draw
struct Z_Construct_UFunction_URiveArtboard_Draw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_Draw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "Draw", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_Draw_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_Draw_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URiveArtboard_Draw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_Draw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execDraw)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Draw();
	P_NATIVE_END;
}
// End Class URiveArtboard Function Draw

// Begin Class URiveArtboard Function FireTrigger
struct Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics
{
	struct RiveArtboard_eventFireTrigger_Parms
	{
		FString InPropertyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::NewProp_InPropertyName = { "InPropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventFireTrigger_Parms, InPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPropertyName_MetaData), NewProp_InPropertyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::NewProp_InPropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "FireTrigger", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::RiveArtboard_eventFireTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::RiveArtboard_eventFireTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_FireTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_FireTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execFireTrigger)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireTrigger(Z_Param_InPropertyName);
	P_NATIVE_END;
}
// End Class URiveArtboard Function FireTrigger

// Begin Class URiveArtboard Function FireTriggerAtPath
struct Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics
{
	struct RiveArtboard_eventFireTriggerAtPath_Parms
	{
		FString InInputName;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InInputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventFireTriggerAtPath_Parms, InInputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputName_MetaData), NewProp_InInputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventFireTriggerAtPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::NewProp_InInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "FireTriggerAtPath", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::RiveArtboard_eventFireTriggerAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::RiveArtboard_eventFireTriggerAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execFireTriggerAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InInputName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireTriggerAtPath(Z_Param_InInputName,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class URiveArtboard Function FireTriggerAtPath

// Begin Class URiveArtboard Function GetBoolValue
struct Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics
{
	struct RiveArtboard_eventGetBoolValue_Parms
	{
		FString InPropertyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPropertyName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::NewProp_InPropertyName = { "InPropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetBoolValue_Parms, InPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPropertyName_MetaData), NewProp_InPropertyName_MetaData) };
void Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiveArtboard_eventGetBoolValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventGetBoolValue_Parms), &Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::NewProp_InPropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetBoolValue", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::RiveArtboard_eventGetBoolValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::RiveArtboard_eventGetBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetBoolValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetBoolValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetBoolValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolValue(Z_Param_InPropertyName);
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetBoolValue

// Begin Class URiveArtboard Function GetBoolValueAtPath
struct Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics
{
	struct RiveArtboard_eventGetBoolValueAtPath_Parms
	{
		FString InInputName;
		FString InPath;
		bool OutSuccess;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InInputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static void NewProp_OutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetBoolValueAtPath_Parms, InInputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputName_MetaData), NewProp_InInputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetBoolValueAtPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
void Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((RiveArtboard_eventGetBoolValueAtPath_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventGetBoolValueAtPath_Parms), &Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiveArtboard_eventGetBoolValueAtPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventGetBoolValueAtPath_Parms), &Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_InInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_OutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetBoolValueAtPath", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::RiveArtboard_eventGetBoolValueAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::RiveArtboard_eventGetBoolValueAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetBoolValueAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InInputName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolValueAtPath(Z_Param_InInputName,Z_Param_InPath,Z_Param_Out_OutSuccess);
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetBoolValueAtPath

// Begin Class URiveArtboard Function GetLastDrawTransformMatrix
struct Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct RiveArtboard_eventGetLastDrawTransformMatrix_Parms
	{
		FMatrix ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the transformation Matrix from the start of the Render Queue up\n     * to now */" },
#endif
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the transformation Matrix from the start of the Render Queue up\nto now" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLastDrawTransformMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetLastDrawTransformMatrix", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::RiveArtboard_eventGetLastDrawTransformMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::RiveArtboard_eventGetLastDrawTransformMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetLastDrawTransformMatrix)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMatrix*)Z_Param__Result=P_THIS->GetLastDrawTransformMatrix();
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetLastDrawTransformMatrix

// Begin Class URiveArtboard Function GetLocalCoordinate
struct Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics
{
	struct RiveArtboard_eventGetLocalCoordinate_Parms
	{
		FVector2f InPosition;
		FIntPoint InTextureSize;
		ERiveAlignment InAlignment;
		ERiveFitType InFit;
		FVector2f ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to convert from a given point (InPosition) on a texture local\n// position to the position for this artboard, taking into account\n// alignment, fit, and an offset (if custom translation has been used)\n" },
#endif
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to convert from a given point (InPosition) on a texture local\nposition to the position for this artboard, taking into account\nalignment, fit, and an offset (if custom translation has been used)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTextureSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTextureSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InAlignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InFit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InFit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLocalCoordinate_Parms, InPosition), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPosition_MetaData), NewProp_InPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InTextureSize = { "InTextureSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLocalCoordinate_Parms, InTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTextureSize_MetaData), NewProp_InTextureSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InAlignment = { "InAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLocalCoordinate_Parms, InAlignment), Z_Construct_UEnum_RiveRenderer_ERiveAlignment, METADATA_PARAMS(0, nullptr) }; // 3279353217
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InFit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InFit = { "InFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLocalCoordinate_Parms, InFit), Z_Construct_UEnum_RiveRenderer_ERiveFitType, METADATA_PARAMS(0, nullptr) }; // 2097954338
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLocalCoordinate_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InAlignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InFit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_InFit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetLocalCoordinate", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::RiveArtboard_eventGetLocalCoordinate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::RiveArtboard_eventGetLocalCoordinate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetLocalCoordinate)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_InPosition);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InTextureSize);
	P_GET_ENUM(ERiveAlignment,Z_Param_InAlignment);
	P_GET_ENUM(ERiveFitType,Z_Param_InFit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2f*)Z_Param__Result=P_THIS->GetLocalCoordinate(Z_Param_Out_InPosition,Z_Param_Out_InTextureSize,ERiveAlignment(Z_Param_InAlignment),ERiveFitType(Z_Param_InFit));
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetLocalCoordinate

// Begin Class URiveArtboard Function GetLocalCoordinatesFromExtents
struct Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics
{
	struct RiveArtboard_eventGetLocalCoordinatesFromExtents_Parms
	{
		FVector2f InPosition;
		FBox2f InExtents;
		FIntPoint TextureSize;
		ERiveAlignment Alignment;
		ERiveFitType FitType;
		FVector2f ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Returns the coordinates in the current Artboard space\n     * @param InExtents Extents of the RenderTarget, will be mapped to the\n     * RenderTarget size\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InExtents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FitType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLocalCoordinatesFromExtents_Parms, InPosition), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPosition_MetaData), NewProp_InPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_InExtents = { "InExtents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLocalCoordinatesFromExtents_Parms, InExtents), Z_Construct_UScriptStruct_FBox2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExtents_MetaData), NewProp_InExtents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLocalCoordinatesFromExtents_Parms, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLocalCoordinatesFromExtents_Parms, Alignment), Z_Construct_UEnum_RiveRenderer_ERiveAlignment, METADATA_PARAMS(0, nullptr) }; // 3279353217
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_FitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_FitType = { "FitType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLocalCoordinatesFromExtents_Parms, FitType), Z_Construct_UEnum_RiveRenderer_ERiveFitType, METADATA_PARAMS(0, nullptr) }; // 2097954338
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetLocalCoordinatesFromExtents_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_InPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_InExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_FitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_FitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetLocalCoordinatesFromExtents", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::RiveArtboard_eventGetLocalCoordinatesFromExtents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::RiveArtboard_eventGetLocalCoordinatesFromExtents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetLocalCoordinatesFromExtents)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_InPosition);
	P_GET_STRUCT_REF(FBox2f,Z_Param_Out_InExtents);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_TextureSize);
	P_GET_ENUM(ERiveAlignment,Z_Param_Alignment);
	P_GET_ENUM(ERiveFitType,Z_Param_FitType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2f*)Z_Param__Result=P_THIS->GetLocalCoordinatesFromExtents(Z_Param_Out_InPosition,Z_Param_Out_InExtents,Z_Param_Out_TextureSize,ERiveAlignment(Z_Param_Alignment),ERiveFitType(Z_Param_FitType));
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetLocalCoordinatesFromExtents

// Begin Class URiveArtboard Function GetNumberValue
struct Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics
{
	struct RiveArtboard_eventGetNumberValue_Parms
	{
		FString InPropertyName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPropertyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::NewProp_InPropertyName = { "InPropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetNumberValue_Parms, InPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPropertyName_MetaData), NewProp_InPropertyName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetNumberValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::NewProp_InPropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetNumberValue", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::RiveArtboard_eventGetNumberValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::RiveArtboard_eventGetNumberValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetNumberValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetNumberValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetNumberValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNumberValue(Z_Param_InPropertyName);
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetNumberValue

// Begin Class URiveArtboard Function GetNumberValueAtPath
struct Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics
{
	struct RiveArtboard_eventGetNumberValueAtPath_Parms
	{
		FString InInputName;
		FString InPath;
		bool OutSuccess;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InInputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static void NewProp_OutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetNumberValueAtPath_Parms, InInputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputName_MetaData), NewProp_InInputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetNumberValueAtPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
void Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((RiveArtboard_eventGetNumberValueAtPath_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventGetNumberValueAtPath_Parms), &Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetNumberValueAtPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::NewProp_InInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::NewProp_OutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetNumberValueAtPath", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::RiveArtboard_eventGetNumberValueAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::RiveArtboard_eventGetNumberValueAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetNumberValueAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InInputName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNumberValueAtPath(Z_Param_InInputName,Z_Param_InPath,Z_Param_Out_OutSuccess);
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetNumberValueAtPath

// Begin Class URiveArtboard Function GetOriginalSize
struct Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics
{
	struct RiveArtboard_eventGetOriginalSize_Parms
	{
		FVector2f ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetOriginalSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetOriginalSize", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::RiveArtboard_eventGetOriginalSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::RiveArtboard_eventGetOriginalSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetOriginalSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetOriginalSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetOriginalSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2f*)Z_Param__Result=P_THIS->GetOriginalSize();
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetOriginalSize

// Begin Class URiveArtboard Function GetSize
struct Z_Construct_UFunction_URiveArtboard_GetSize_Statics
{
	struct RiveArtboard_eventGetSize_Parms
	{
		FVector2f ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetSize", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetSize_Statics::RiveArtboard_eventGetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetSize_Statics::RiveArtboard_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2f*)Z_Param__Result=P_THIS->GetSize();
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetSize

// Begin Class URiveArtboard Function GetStateMachineNames
struct Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics
{
	struct RiveArtboard_eventGetStateMachineNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetStateMachineNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetStateMachineNames", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::RiveArtboard_eventGetStateMachineNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::RiveArtboard_eventGetStateMachineNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetStateMachineNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetStateMachineNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetStateMachineNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetStateMachineNames();
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetStateMachineNames

// Begin Class URiveArtboard Function GetTextValue
struct Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics
{
	struct RiveArtboard_eventGetTextValue_Parms
	{
		FString InPropertyName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::NewProp_InPropertyName = { "InPropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetTextValue_Parms, InPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPropertyName_MetaData), NewProp_InPropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetTextValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::NewProp_InPropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetTextValue", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::RiveArtboard_eventGetTextValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::RiveArtboard_eventGetTextValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetTextValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetTextValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetTextValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTextValue(Z_Param_InPropertyName);
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetTextValue

// Begin Class URiveArtboard Function GetTextValueAtPath
struct Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics
{
	struct RiveArtboard_eventGetTextValueAtPath_Parms
	{
		FString InInputName;
		FString InPath;
		bool OutSuccess;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InInputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static void NewProp_OutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetTextValueAtPath_Parms, InInputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputName_MetaData), NewProp_InInputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetTextValueAtPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
void Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((RiveArtboard_eventGetTextValueAtPath_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventGetTextValueAtPath_Parms), &Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetTextValueAtPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::NewProp_InInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::NewProp_OutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetTextValueAtPath", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::RiveArtboard_eventGetTextValueAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::RiveArtboard_eventGetTextValueAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetTextValueAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InInputName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTextValueAtPath(Z_Param_InInputName,Z_Param_InPath,Z_Param_Out_OutSuccess);
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetTextValueAtPath

// Begin Class URiveArtboard Function GetTransformMatrix
struct Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct RiveArtboard_eventGetTransformMatrix_Parms
	{
		FMatrix ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the transformation Matrix from the start of the Render Queue up\n     * to now */" },
#endif
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the transformation Matrix from the start of the Render Queue up\nto now" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventGetTransformMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "GetTransformMatrix", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::RiveArtboard_eventGetTransformMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::RiveArtboard_eventGetTransformMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_GetTransformMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_GetTransformMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execGetTransformMatrix)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMatrix*)Z_Param__Result=P_THIS->GetTransformMatrix();
	P_NATIVE_END;
}
// End Class URiveArtboard Function GetTransformMatrix

// Begin Class URiveArtboard Function HasCustomRender
struct Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics
{
	struct RiveArtboard_eventHasCustomRender_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiveArtboard_eventHasCustomRender_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventHasCustomRender_Parms), &Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "HasCustomRender", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::RiveArtboard_eventHasCustomRender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::RiveArtboard_eventHasCustomRender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_HasCustomRender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_HasCustomRender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execHasCustomRender)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCustomRender();
	P_NATIVE_END;
}
// End Class URiveArtboard Function HasCustomRender

// Begin Class URiveArtboard Function PointerDown
struct Z_Construct_UFunction_URiveArtboard_PointerDown_Statics
{
	struct RiveArtboard_eventPointerDown_Parms
	{
		FVector2f NewPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventPointerDown_Parms, NewPosition), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPosition_MetaData), NewProp_NewPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::NewProp_NewPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "PointerDown", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::RiveArtboard_eventPointerDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::RiveArtboard_eventPointerDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_PointerDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_PointerDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execPointerDown)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_NewPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointerDown(Z_Param_Out_NewPosition);
	P_NATIVE_END;
}
// End Class URiveArtboard Function PointerDown

// Begin Class URiveArtboard Function PointerExit
struct Z_Construct_UFunction_URiveArtboard_PointerExit_Statics
{
	struct RiveArtboard_eventPointerExit_Parms
	{
		FVector2f NewPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventPointerExit_Parms, NewPosition), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPosition_MetaData), NewProp_NewPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::NewProp_NewPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "PointerExit", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::RiveArtboard_eventPointerExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::RiveArtboard_eventPointerExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_PointerExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_PointerExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execPointerExit)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_NewPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointerExit(Z_Param_Out_NewPosition);
	P_NATIVE_END;
}
// End Class URiveArtboard Function PointerExit

// Begin Class URiveArtboard Function PointerMove
struct Z_Construct_UFunction_URiveArtboard_PointerMove_Statics
{
	struct RiveArtboard_eventPointerMove_Parms
	{
		FVector2f NewPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventPointerMove_Parms, NewPosition), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPosition_MetaData), NewProp_NewPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::NewProp_NewPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "PointerMove", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::RiveArtboard_eventPointerMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::RiveArtboard_eventPointerMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_PointerMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_PointerMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execPointerMove)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_NewPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointerMove(Z_Param_Out_NewPosition);
	P_NATIVE_END;
}
// End Class URiveArtboard Function PointerMove

// Begin Class URiveArtboard Function PointerUp
struct Z_Construct_UFunction_URiveArtboard_PointerUp_Statics
{
	struct RiveArtboard_eventPointerUp_Parms
	{
		FVector2f NewPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventPointerUp_Parms, NewPosition), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPosition_MetaData), NewProp_NewPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::NewProp_NewPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "PointerUp", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::RiveArtboard_eventPointerUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::RiveArtboard_eventPointerUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_PointerUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_PointerUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execPointerUp)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_NewPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PointerUp(Z_Param_Out_NewPosition);
	P_NATIVE_END;
}
// End Class URiveArtboard Function PointerUp

// Begin Class URiveArtboard Function SetAudioEngine
struct Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics
{
	struct RiveArtboard_eventSetAudioEngine_Parms
	{
		URiveAudioEngine* AudioEngine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * This requires that the audio engine has been initialized via BeginPlay\n     * before setting\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This requires that the audio engine has been initialized via BeginPlay\n* before setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioEngine_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioEngine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::NewProp_AudioEngine = { "AudioEngine", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetAudioEngine_Parms, AudioEngine), Z_Construct_UClass_URiveAudioEngine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioEngine_MetaData), NewProp_AudioEngine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::NewProp_AudioEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "SetAudioEngine", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::RiveArtboard_eventSetAudioEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::RiveArtboard_eventSetAudioEngine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_SetAudioEngine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_SetAudioEngine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execSetAudioEngine)
{
	P_GET_OBJECT(URiveAudioEngine,Z_Param_AudioEngine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioEngine(Z_Param_AudioEngine);
	P_NATIVE_END;
}
// End Class URiveArtboard Function SetAudioEngine

// Begin Class URiveArtboard Function SetBoolValue
struct Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics
{
	struct RiveArtboard_eventSetBoolValue_Parms
	{
		FString InPropertyName;
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPropertyName;
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::NewProp_InPropertyName = { "InPropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetBoolValue_Parms, InPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPropertyName_MetaData), NewProp_InPropertyName_MetaData) };
void Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((RiveArtboard_eventSetBoolValue_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventSetBoolValue_Parms), &Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::NewProp_InPropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "SetBoolValue", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::RiveArtboard_eventSetBoolValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::RiveArtboard_eventSetBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_SetBoolValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_SetBoolValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execSetBoolValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPropertyName);
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolValue(Z_Param_InPropertyName,Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class URiveArtboard Function SetBoolValue

// Begin Class URiveArtboard Function SetBoolValueAtPath
struct Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics
{
	struct RiveArtboard_eventSetBoolValueAtPath_Parms
	{
		FString InInputName;
		bool InValue;
		FString InPath;
		bool OutSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InInputName;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static void NewProp_OutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetBoolValueAtPath_Parms, InInputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputName_MetaData), NewProp_InInputName_MetaData) };
void Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((RiveArtboard_eventSetBoolValueAtPath_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventSetBoolValueAtPath_Parms), &Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetBoolValueAtPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
void Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((RiveArtboard_eventSetBoolValueAtPath_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventSetBoolValueAtPath_Parms), &Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_InInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::NewProp_OutSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "SetBoolValueAtPath", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::RiveArtboard_eventSetBoolValueAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::RiveArtboard_eventSetBoolValueAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execSetBoolValueAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InInputName);
	P_GET_UBOOL(Z_Param_InValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolValueAtPath(Z_Param_InInputName,Z_Param_InValue,Z_Param_InPath,Z_Param_Out_OutSuccess);
	P_NATIVE_END;
}
// End Class URiveArtboard Function SetBoolValueAtPath

// Begin Class URiveArtboard Function SetNumberValue
struct Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics
{
	struct RiveArtboard_eventSetNumberValue_Parms
	{
		FString InPropertyName;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPropertyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::NewProp_InPropertyName = { "InPropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetNumberValue_Parms, InPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPropertyName_MetaData), NewProp_InPropertyName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetNumberValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::NewProp_InPropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "SetNumberValue", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::RiveArtboard_eventSetNumberValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::RiveArtboard_eventSetNumberValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_SetNumberValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_SetNumberValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execSetNumberValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPropertyName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberValue(Z_Param_InPropertyName,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class URiveArtboard Function SetNumberValue

// Begin Class URiveArtboard Function SetNumberValueAtPath
struct Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics
{
	struct RiveArtboard_eventSetNumberValueAtPath_Parms
	{
		FString InInputName;
		float InValue;
		FString InPath;
		bool OutSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InInputName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static void NewProp_OutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetNumberValueAtPath_Parms, InInputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputName_MetaData), NewProp_InInputName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetNumberValueAtPath_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetNumberValueAtPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
void Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((RiveArtboard_eventSetNumberValueAtPath_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventSetNumberValueAtPath_Parms), &Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::NewProp_InInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::NewProp_OutSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "SetNumberValueAtPath", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::RiveArtboard_eventSetNumberValueAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::RiveArtboard_eventSetNumberValueAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execSetNumberValueAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InInputName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberValueAtPath(Z_Param_InInputName,Z_Param_InValue,Z_Param_InPath,Z_Param_Out_OutSuccess);
	P_NATIVE_END;
}
// End Class URiveArtboard Function SetNumberValueAtPath

// Begin Class URiveArtboard Function SetSize
struct Z_Construct_UFunction_URiveArtboard_SetSize_Statics
{
	struct RiveArtboard_eventSetSize_Parms
	{
		FVector2f InVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_SetSize_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetSize_Parms, InVector), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_SetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetSize_Statics::NewProp_InVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "SetSize", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_SetSize_Statics::RiveArtboard_eventSetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_SetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_SetSize_Statics::RiveArtboard_eventSetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_SetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_SetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execSetSize)
{
	P_GET_STRUCT(FVector2f,Z_Param_InVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSize(Z_Param_InVector);
	P_NATIVE_END;
}
// End Class URiveArtboard Function SetSize

// Begin Class URiveArtboard Function SetStateMachineName
struct Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics
{
	struct RiveArtboard_eventSetStateMachineName_Parms
	{
		FString NewStateMachineName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewStateMachineName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewStateMachineName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::NewProp_NewStateMachineName = { "NewStateMachineName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetStateMachineName_Parms, NewStateMachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewStateMachineName_MetaData), NewProp_NewStateMachineName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::NewProp_NewStateMachineName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "SetStateMachineName", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::RiveArtboard_eventSetStateMachineName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::RiveArtboard_eventSetStateMachineName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_SetStateMachineName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_SetStateMachineName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execSetStateMachineName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewStateMachineName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStateMachineName(Z_Param_NewStateMachineName);
	P_NATIVE_END;
}
// End Class URiveArtboard Function SetStateMachineName

// Begin Class URiveArtboard Function SetTextValue
struct Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics
{
	struct RiveArtboard_eventSetTextValue_Parms
	{
		FString InPropertyName;
		FString NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::NewProp_InPropertyName = { "InPropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetTextValue_Parms, InPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPropertyName_MetaData), NewProp_InPropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetTextValue_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::NewProp_InPropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "SetTextValue", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::RiveArtboard_eventSetTextValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::RiveArtboard_eventSetTextValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_SetTextValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_SetTextValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execSetTextValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPropertyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextValue(Z_Param_InPropertyName,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class URiveArtboard Function SetTextValue

// Begin Class URiveArtboard Function SetTextValueAtPath
struct Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics
{
	struct RiveArtboard_eventSetTextValueAtPath_Parms
	{
		FString InInputName;
		FString InValue;
		FString InPath;
		bool OutSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InInputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static void NewProp_OutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetTextValueAtPath_Parms, InInputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputName_MetaData), NewProp_InInputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetTextValueAtPath_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventSetTextValueAtPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
void Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((RiveArtboard_eventSetTextValueAtPath_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventSetTextValueAtPath_Parms), &Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::NewProp_InInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::NewProp_OutSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "SetTextValueAtPath", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::RiveArtboard_eventSetTextValueAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::RiveArtboard_eventSetTextValueAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execSetTextValueAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InInputName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextValueAtPath(Z_Param_InInputName,Z_Param_InValue,Z_Param_InPath,Z_Param_Out_OutSuccess);
	P_NATIVE_END;
}
// End Class URiveArtboard Function SetTextValueAtPath

// Begin Class URiveArtboard Function Transform
struct Z_Construct_UFunction_URiveArtboard_Transform_Statics
{
	struct RiveArtboard_eventTransform_Parms
	{
		FVector2f One;
		FVector2f Two;
		FVector2f T;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_One_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Two_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_One;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Two;
	static const UECodeGen_Private::FStructPropertyParams NewProp_T;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_Transform_Statics::NewProp_One = { "One", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventTransform_Parms, One), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_One_MetaData), NewProp_One_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_Transform_Statics::NewProp_Two = { "Two", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventTransform_Parms, Two), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Two_MetaData), NewProp_Two_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_Transform_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventTransform_Parms, T), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_MetaData), NewProp_T_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_Transform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_Transform_Statics::NewProp_One,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_Transform_Statics::NewProp_Two,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_Transform_Statics::NewProp_T,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_Transform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "Transform", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_Transform_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_Transform_Statics::RiveArtboard_eventTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_Transform_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_Transform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_Transform_Statics::RiveArtboard_eventTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_Transform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_Transform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execTransform)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_One);
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_Two);
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_T);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Transform(Z_Param_Out_One,Z_Param_Out_Two,Z_Param_Out_T);
	P_NATIVE_END;
}
// End Class URiveArtboard Function Transform

// Begin Class URiveArtboard Function Translate
struct Z_Construct_UFunction_URiveArtboard_Translate_Statics
{
	struct RiveArtboard_eventTranslate_Parms
	{
		FVector2f InVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URiveArtboard_Translate_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventTranslate_Parms, InVector), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVector_MetaData), NewProp_InVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_Translate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_Translate_Statics::NewProp_InVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_Translate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_Translate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "Translate", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_Translate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_Translate_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_Translate_Statics::RiveArtboard_eventTranslate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_Translate_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_Translate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_Translate_Statics::RiveArtboard_eventTranslate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_Translate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_Translate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execTranslate)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_InVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Translate(Z_Param_Out_InVector);
	P_NATIVE_END;
}
// End Class URiveArtboard Function Translate

// Begin Class URiveArtboard Function TriggerNamedRiveEvent
struct Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics
{
	struct RiveArtboard_eventTriggerNamedRiveEvent_Parms
	{
		FString EventName;
		float ReportedDelaySeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReportedDelaySeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventTriggerNamedRiveEvent_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::NewProp_ReportedDelaySeconds = { "ReportedDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventTriggerNamedRiveEvent_Parms, ReportedDelaySeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiveArtboard_eventTriggerNamedRiveEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventTriggerNamedRiveEvent_Parms), &Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::NewProp_ReportedDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "TriggerNamedRiveEvent", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::RiveArtboard_eventTriggerNamedRiveEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::RiveArtboard_eventTriggerNamedRiveEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execTriggerNamedRiveEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ReportedDelaySeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TriggerNamedRiveEvent(Z_Param_EventName,Z_Param_ReportedDelaySeconds);
	P_NATIVE_END;
}
// End Class URiveArtboard Function TriggerNamedRiveEvent

// Begin Class URiveArtboard Function UnbindNamedRiveEvent
struct Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics
{
	struct RiveArtboard_eventUnbindNamedRiveEvent_Parms
	{
		FString EventName;
		FScriptDelegate Event;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Event;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventUnbindNamedRiveEvent_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiveArtboard_eventUnbindNamedRiveEvent_Parms, Event), Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 535670754
void Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiveArtboard_eventUnbindNamedRiveEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiveArtboard_eventUnbindNamedRiveEvent_Parms), &Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiveArtboard, nullptr, "UnbindNamedRiveEvent", nullptr, nullptr, Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::RiveArtboard_eventUnbindNamedRiveEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::RiveArtboard_eventUnbindNamedRiveEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiveArtboard::execUnbindNamedRiveEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnbindNamedRiveEvent(Z_Param_EventName,FRiveNamedEventDelegate(Z_Param_Out_Event));
	P_NATIVE_END;
}
// End Class URiveArtboard Function UnbindNamedRiveEvent

// Begin Class URiveArtboard
void URiveArtboard::StaticRegisterNativesURiveArtboard()
{
	UClass* Class = URiveArtboard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdvanceStateMachine", &URiveArtboard::execAdvanceStateMachine },
		{ "Align", &URiveArtboard::execAlign },
		{ "BindNamedRiveEvent", &URiveArtboard::execBindNamedRiveEvent },
		{ "Draw", &URiveArtboard::execDraw },
		{ "FireTrigger", &URiveArtboard::execFireTrigger },
		{ "FireTriggerAtPath", &URiveArtboard::execFireTriggerAtPath },
		{ "GetBoolValue", &URiveArtboard::execGetBoolValue },
		{ "GetBoolValueAtPath", &URiveArtboard::execGetBoolValueAtPath },
		{ "GetLastDrawTransformMatrix", &URiveArtboard::execGetLastDrawTransformMatrix },
		{ "GetLocalCoordinate", &URiveArtboard::execGetLocalCoordinate },
		{ "GetLocalCoordinatesFromExtents", &URiveArtboard::execGetLocalCoordinatesFromExtents },
		{ "GetNumberValue", &URiveArtboard::execGetNumberValue },
		{ "GetNumberValueAtPath", &URiveArtboard::execGetNumberValueAtPath },
		{ "GetOriginalSize", &URiveArtboard::execGetOriginalSize },
		{ "GetSize", &URiveArtboard::execGetSize },
		{ "GetStateMachineNames", &URiveArtboard::execGetStateMachineNames },
		{ "GetTextValue", &URiveArtboard::execGetTextValue },
		{ "GetTextValueAtPath", &URiveArtboard::execGetTextValueAtPath },
		{ "GetTransformMatrix", &URiveArtboard::execGetTransformMatrix },
		{ "HasCustomRender", &URiveArtboard::execHasCustomRender },
		{ "PointerDown", &URiveArtboard::execPointerDown },
		{ "PointerExit", &URiveArtboard::execPointerExit },
		{ "PointerMove", &URiveArtboard::execPointerMove },
		{ "PointerUp", &URiveArtboard::execPointerUp },
		{ "SetAudioEngine", &URiveArtboard::execSetAudioEngine },
		{ "SetBoolValue", &URiveArtboard::execSetBoolValue },
		{ "SetBoolValueAtPath", &URiveArtboard::execSetBoolValueAtPath },
		{ "SetNumberValue", &URiveArtboard::execSetNumberValue },
		{ "SetNumberValueAtPath", &URiveArtboard::execSetNumberValueAtPath },
		{ "SetSize", &URiveArtboard::execSetSize },
		{ "SetStateMachineName", &URiveArtboard::execSetStateMachineName },
		{ "SetTextValue", &URiveArtboard::execSetTextValue },
		{ "SetTextValueAtPath", &URiveArtboard::execSetTextValueAtPath },
		{ "Transform", &URiveArtboard::execTransform },
		{ "Translate", &URiveArtboard::execTranslate },
		{ "TriggerNamedRiveEvent", &URiveArtboard::execTriggerNamedRiveEvent },
		{ "UnbindNamedRiveEvent", &URiveArtboard::execUnbindNamedRiveEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveArtboard);
UClass* Z_Construct_UClass_URiveArtboard_NoRegister()
{
	return URiveArtboard::StaticClass();
}
struct Z_Construct_UClass_URiveArtboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Rive/RiveArtboard.h" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[] = {
		{ "Category", "Rive" },
		{ "GetOptions", "GetStateMachineNamesForDropdown" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnArtboardTick_Render_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnArtboardTick_StateMachine_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGetLocalCoordinate_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArtboardName_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArtboardIndex_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventNames_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamedRiveEventsDelegates_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// todo: unexpose to BP and UI\n" },
#endif
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "todo: unexpose to BP and UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineNames_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveEventDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickRiveReportedEvents_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveArtboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StateMachineName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnArtboardTick_Render;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnArtboardTick_StateMachine;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGetLocalCoordinate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ArtboardName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArtboardIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventNames;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NamedRiveEventsDelegates_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NamedRiveEventsDelegates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NamedRiveEventsDelegates;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StateMachineNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StateMachineNames;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RiveEventDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickRiveReportedEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TickRiveReportedEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URiveArtboard_AdvanceStateMachine, "AdvanceStateMachine" }, // 1584212974
		{ &Z_Construct_UFunction_URiveArtboard_Align, "Align" }, // 696354728
		{ &Z_Construct_UFunction_URiveArtboard_BindNamedRiveEvent, "BindNamedRiveEvent" }, // 3834828663
		{ &Z_Construct_UFunction_URiveArtboard_Draw, "Draw" }, // 2349866167
		{ &Z_Construct_UFunction_URiveArtboard_FireTrigger, "FireTrigger" }, // 2415083693
		{ &Z_Construct_UFunction_URiveArtboard_FireTriggerAtPath, "FireTriggerAtPath" }, // 3721408735
		{ &Z_Construct_UFunction_URiveArtboard_GetBoolValue, "GetBoolValue" }, // 1293872740
		{ &Z_Construct_UFunction_URiveArtboard_GetBoolValueAtPath, "GetBoolValueAtPath" }, // 1792860948
		{ &Z_Construct_UFunction_URiveArtboard_GetLastDrawTransformMatrix, "GetLastDrawTransformMatrix" }, // 1080362542
		{ &Z_Construct_UFunction_URiveArtboard_GetLocalCoordinate, "GetLocalCoordinate" }, // 2671165482
		{ &Z_Construct_UFunction_URiveArtboard_GetLocalCoordinatesFromExtents, "GetLocalCoordinatesFromExtents" }, // 3751968188
		{ &Z_Construct_UFunction_URiveArtboard_GetNumberValue, "GetNumberValue" }, // 2711283040
		{ &Z_Construct_UFunction_URiveArtboard_GetNumberValueAtPath, "GetNumberValueAtPath" }, // 1380133617
		{ &Z_Construct_UFunction_URiveArtboard_GetOriginalSize, "GetOriginalSize" }, // 850372518
		{ &Z_Construct_UFunction_URiveArtboard_GetSize, "GetSize" }, // 2569769059
		{ &Z_Construct_UFunction_URiveArtboard_GetStateMachineNames, "GetStateMachineNames" }, // 2765743979
		{ &Z_Construct_UFunction_URiveArtboard_GetTextValue, "GetTextValue" }, // 1134202579
		{ &Z_Construct_UFunction_URiveArtboard_GetTextValueAtPath, "GetTextValueAtPath" }, // 27047921
		{ &Z_Construct_UFunction_URiveArtboard_GetTransformMatrix, "GetTransformMatrix" }, // 4016942060
		{ &Z_Construct_UFunction_URiveArtboard_HasCustomRender, "HasCustomRender" }, // 3550700465
		{ &Z_Construct_UFunction_URiveArtboard_PointerDown, "PointerDown" }, // 4084409712
		{ &Z_Construct_UFunction_URiveArtboard_PointerExit, "PointerExit" }, // 1121140045
		{ &Z_Construct_UFunction_URiveArtboard_PointerMove, "PointerMove" }, // 2693304326
		{ &Z_Construct_UFunction_URiveArtboard_PointerUp, "PointerUp" }, // 1793399307
		{ &Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature, "RiveCoordinatesDelegate__DelegateSignature" }, // 289269411
		{ &Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature, "RiveEventDelegate__DelegateSignature" }, // 3447403046
		{ &Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature, "RiveNamedEventDelegate__DelegateSignature" }, // 535670754
		{ &Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature, "RiveNamedEventsDelegate__DelegateSignature" }, // 3732691272
		{ &Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature, "RiveTickDelegate__DelegateSignature" }, // 2762689194
		{ &Z_Construct_UFunction_URiveArtboard_SetAudioEngine, "SetAudioEngine" }, // 3863638050
		{ &Z_Construct_UFunction_URiveArtboard_SetBoolValue, "SetBoolValue" }, // 1307374088
		{ &Z_Construct_UFunction_URiveArtboard_SetBoolValueAtPath, "SetBoolValueAtPath" }, // 300681451
		{ &Z_Construct_UFunction_URiveArtboard_SetNumberValue, "SetNumberValue" }, // 2560923135
		{ &Z_Construct_UFunction_URiveArtboard_SetNumberValueAtPath, "SetNumberValueAtPath" }, // 3214594518
		{ &Z_Construct_UFunction_URiveArtboard_SetSize, "SetSize" }, // 3038924146
		{ &Z_Construct_UFunction_URiveArtboard_SetStateMachineName, "SetStateMachineName" }, // 177243746
		{ &Z_Construct_UFunction_URiveArtboard_SetTextValue, "SetTextValue" }, // 4258481671
		{ &Z_Construct_UFunction_URiveArtboard_SetTextValueAtPath, "SetTextValueAtPath" }, // 4204927322
		{ &Z_Construct_UFunction_URiveArtboard_Transform, "Transform" }, // 3484113866
		{ &Z_Construct_UFunction_URiveArtboard_Translate, "Translate" }, // 4281945217
		{ &Z_Construct_UFunction_URiveArtboard_TriggerNamedRiveEvent, "TriggerNamedRiveEvent" }, // 780908432
		{ &Z_Construct_UFunction_URiveArtboard_UnbindNamedRiveEvent, "UnbindNamedRiveEvent" }, // 817919566
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveArtboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveArtboard, StateMachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachineName_MetaData), NewProp_StateMachineName_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_OnArtboardTick_Render = { "OnArtboardTick_Render", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveArtboard, OnArtboardTick_Render), Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnArtboardTick_Render_MetaData), NewProp_OnArtboardTick_Render_MetaData) }; // 2762689194
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_OnArtboardTick_StateMachine = { "OnArtboardTick_StateMachine", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveArtboard, OnArtboardTick_StateMachine), Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnArtboardTick_StateMachine_MetaData), NewProp_OnArtboardTick_StateMachine_MetaData) }; // 2762689194
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_OnGetLocalCoordinate = { "OnGetLocalCoordinate", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveArtboard, OnGetLocalCoordinate), Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGetLocalCoordinate_MetaData), NewProp_OnGetLocalCoordinate_MetaData) }; // 289269411
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_ArtboardName = { "ArtboardName", nullptr, (EPropertyFlags)0x0040000000022815, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveArtboard, ArtboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArtboardName_MetaData), NewProp_ArtboardName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_ArtboardIndex = { "ArtboardIndex", nullptr, (EPropertyFlags)0x0040000000022815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveArtboard, ArtboardIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArtboardIndex_MetaData), NewProp_ArtboardIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_EventNames_Inner = { "EventNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_EventNames = { "EventNames", nullptr, (EPropertyFlags)0x0040000000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveArtboard, EventNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventNames_MetaData), NewProp_EventNames_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_NamedRiveEventsDelegates_ValueProp = { "NamedRiveEventsDelegates", nullptr, (EPropertyFlags)0x00000000000a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3732691272
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_NamedRiveEventsDelegates_Key_KeyProp = { "NamedRiveEventsDelegates_Key", nullptr, (EPropertyFlags)0x00000000000a0001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_NamedRiveEventsDelegates = { "NamedRiveEventsDelegates", nullptr, (EPropertyFlags)0x0040008000022801, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveArtboard, NamedRiveEventsDelegates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamedRiveEventsDelegates_MetaData), NewProp_NamedRiveEventsDelegates_MetaData) }; // 3732691272
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_StateMachineNames_Inner = { "StateMachineNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_StateMachineNames = { "StateMachineNames", nullptr, (EPropertyFlags)0x0040000000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveArtboard, StateMachineNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachineNames_MetaData), NewProp_StateMachineNames_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_RiveEventDelegate = { "RiveEventDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveArtboard, RiveEventDelegate), Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveEventDelegate_MetaData), NewProp_RiveEventDelegate_MetaData) }; // 3447403046
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_TickRiveReportedEvents_Inner = { "TickRiveReportedEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRiveEvent, METADATA_PARAMS(0, nullptr) }; // 4168395245
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URiveArtboard_Statics::NewProp_TickRiveReportedEvents = { "TickRiveReportedEvents", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveArtboard, TickRiveReportedEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickRiveReportedEvents_MetaData), NewProp_TickRiveReportedEvents_MetaData) }; // 4168395245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URiveArtboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_StateMachineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_OnArtboardTick_Render,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_OnArtboardTick_StateMachine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_OnGetLocalCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_ArtboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_ArtboardIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_EventNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_EventNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_NamedRiveEventsDelegates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_NamedRiveEventsDelegates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_NamedRiveEventsDelegates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_StateMachineNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_StateMachineNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_RiveEventDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_TickRiveReportedEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveArtboard_Statics::NewProp_TickRiveReportedEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveArtboard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URiveArtboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveArtboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveArtboard_Statics::ClassParams = {
	&URiveArtboard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URiveArtboard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URiveArtboard_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveArtboard_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveArtboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveArtboard()
{
	if (!Z_Registration_Info_UClass_URiveArtboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveArtboard.OuterSingleton, Z_Construct_UClass_URiveArtboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveArtboard.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<URiveArtboard>()
{
	return URiveArtboard::StaticClass();
}
URiveArtboard::URiveArtboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveArtboard);
URiveArtboard::~URiveArtboard() {}
// End Class URiveArtboard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveArtboard, URiveArtboard::StaticClass, TEXT("URiveArtboard"), &Z_Registration_Info_UClass_URiveArtboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveArtboard), 2141487789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_1266814544(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308083_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveArtboard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

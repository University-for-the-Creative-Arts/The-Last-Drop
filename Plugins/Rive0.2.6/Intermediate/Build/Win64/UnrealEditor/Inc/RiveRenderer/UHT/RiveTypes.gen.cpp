// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiveRenderer/Public/RiveTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
RIVERENDERER_API UEnum* Z_Construct_UEnum_RiveRenderer_ERiveAlignment();
RIVERENDERER_API UEnum* Z_Construct_UEnum_RiveRenderer_ERiveFitType();
RIVERENDERER_API UEnum* Z_Construct_UEnum_RiveRenderer_ERiveInitState();
RIVERENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FRiveAlignment();
RIVERENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FRiveStateMachineEvent();
UPackage* Z_Construct_UPackage__Script_RiveRenderer();
// End Cross Module References

// Begin ScriptStruct FRiveStateMachineEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RiveStateMachineEvent;
class UScriptStruct* FRiveStateMachineEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RiveStateMachineEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RiveStateMachineEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRiveStateMachineEvent, (UObject*)Z_Construct_UPackage__Script_RiveRenderer(), TEXT("RiveStateMachineEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RiveStateMachineEvent.OuterSingleton;
}
template<> RIVERENDERER_API UScriptStruct* StaticStruct<FRiveStateMachineEvent>()
{
	return FRiveStateMachineEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RiveTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MousePosition_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/RiveTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MousePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRiveStateMachineEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics::NewProp_MousePosition = { "MousePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveStateMachineEvent, MousePosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MousePosition_MetaData), NewProp_MousePosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics::NewProp_MousePosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RiveRenderer,
	nullptr,
	&NewStructOps,
	"RiveStateMachineEvent",
	Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics::PropPointers),
	sizeof(FRiveStateMachineEvent),
	alignof(FRiveStateMachineEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRiveStateMachineEvent()
{
	if (!Z_Registration_Info_UScriptStruct_RiveStateMachineEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RiveStateMachineEvent.InnerSingleton, Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RiveStateMachineEvent.InnerSingleton;
}
// End ScriptStruct FRiveStateMachineEvent

// Begin Enum ERiveFitType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERiveFitType;
static UEnum* ERiveFitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERiveFitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERiveFitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RiveRenderer_ERiveFitType, (UObject*)Z_Construct_UPackage__Script_RiveRenderer(), TEXT("ERiveFitType"));
	}
	return Z_Registration_Info_UEnum_ERiveFitType.OuterSingleton;
}
template<> RIVERENDERER_API UEnum* StaticEnum<ERiveFitType>()
{
	return ERiveFitType_StaticEnum();
}
struct Z_Construct_UEnum_RiveRenderer_ERiveFitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Contain.Name", "ERiveFitType::Contain" },
		{ "Cover.Name", "ERiveFitType::Cover" },
		{ "Fill.Name", "ERiveFitType::Fill" },
		{ "FitHeight.Name", "ERiveFitType::FitHeight" },
		{ "FitWidth.Name", "ERiveFitType::FitWidth" },
		{ "Layout.Name", "ERiveFitType::Layout" },
		{ "ModuleRelativePath", "Public/RiveTypes.h" },
		{ "None.Name", "ERiveFitType::None" },
		{ "ScaleDown.Name", "ERiveFitType::ScaleDown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERiveFitType::Fill", (int64)ERiveFitType::Fill },
		{ "ERiveFitType::Contain", (int64)ERiveFitType::Contain },
		{ "ERiveFitType::Cover", (int64)ERiveFitType::Cover },
		{ "ERiveFitType::FitWidth", (int64)ERiveFitType::FitWidth },
		{ "ERiveFitType::FitHeight", (int64)ERiveFitType::FitHeight },
		{ "ERiveFitType::None", (int64)ERiveFitType::None },
		{ "ERiveFitType::ScaleDown", (int64)ERiveFitType::ScaleDown },
		{ "ERiveFitType::Layout", (int64)ERiveFitType::Layout },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RiveRenderer_ERiveFitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RiveRenderer,
	nullptr,
	"ERiveFitType",
	"ERiveFitType",
	Z_Construct_UEnum_RiveRenderer_ERiveFitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RiveRenderer_ERiveFitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RiveRenderer_ERiveFitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RiveRenderer_ERiveFitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RiveRenderer_ERiveFitType()
{
	if (!Z_Registration_Info_UEnum_ERiveFitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERiveFitType.InnerSingleton, Z_Construct_UEnum_RiveRenderer_ERiveFitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERiveFitType.InnerSingleton;
}
// End Enum ERiveFitType

// Begin Enum ERiveAlignment
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERiveAlignment;
static UEnum* ERiveAlignment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERiveAlignment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERiveAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RiveRenderer_ERiveAlignment, (UObject*)Z_Construct_UPackage__Script_RiveRenderer(), TEXT("ERiveAlignment"));
	}
	return Z_Registration_Info_UEnum_ERiveAlignment.OuterSingleton;
}
template<> RIVERENDERER_API UEnum* StaticEnum<ERiveAlignment>()
{
	return ERiveAlignment_StaticEnum();
}
struct Z_Construct_UEnum_RiveRenderer_ERiveAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomCenter.Name", "ERiveAlignment::BottomCenter" },
		{ "BottomLeft.Name", "ERiveAlignment::BottomLeft" },
		{ "BottomRight.Name", "ERiveAlignment::BottomRight" },
		{ "Center.Name", "ERiveAlignment::Center" },
		{ "CenterLeft.Name", "ERiveAlignment::CenterLeft" },
		{ "CenterRight.Name", "ERiveAlignment::CenterRight" },
		{ "ModuleRelativePath", "Public/RiveTypes.h" },
		{ "ScriptName", "ERiveAlignment" },
		{ "TopCenter.Name", "ERiveAlignment::TopCenter" },
		{ "TopLeft.Name", "ERiveAlignment::TopLeft" },
		{ "TopRight.Name", "ERiveAlignment::TopRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERiveAlignment::TopLeft", (int64)ERiveAlignment::TopLeft },
		{ "ERiveAlignment::TopCenter", (int64)ERiveAlignment::TopCenter },
		{ "ERiveAlignment::TopRight", (int64)ERiveAlignment::TopRight },
		{ "ERiveAlignment::CenterLeft", (int64)ERiveAlignment::CenterLeft },
		{ "ERiveAlignment::Center", (int64)ERiveAlignment::Center },
		{ "ERiveAlignment::CenterRight", (int64)ERiveAlignment::CenterRight },
		{ "ERiveAlignment::BottomLeft", (int64)ERiveAlignment::BottomLeft },
		{ "ERiveAlignment::BottomCenter", (int64)ERiveAlignment::BottomCenter },
		{ "ERiveAlignment::BottomRight", (int64)ERiveAlignment::BottomRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RiveRenderer_ERiveAlignment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RiveRenderer,
	nullptr,
	"ERiveAlignment",
	"ERiveAlignment",
	Z_Construct_UEnum_RiveRenderer_ERiveAlignment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RiveRenderer_ERiveAlignment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RiveRenderer_ERiveAlignment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RiveRenderer_ERiveAlignment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RiveRenderer_ERiveAlignment()
{
	if (!Z_Registration_Info_UEnum_ERiveAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERiveAlignment.InnerSingleton, Z_Construct_UEnum_RiveRenderer_ERiveAlignment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERiveAlignment.InnerSingleton;
}
// End Enum ERiveAlignment

// Begin ScriptStruct FRiveAlignment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RiveAlignment;
class UScriptStruct* FRiveAlignment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RiveAlignment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RiveAlignment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRiveAlignment, (UObject*)Z_Construct_UPackage__Script_RiveRenderer(), TEXT("RiveAlignment"));
	}
	return Z_Registration_Info_UScriptStruct_RiveAlignment.OuterSingleton;
}
template<> RIVERENDERER_API UScriptStruct* StaticStruct<FRiveAlignment>()
{
	return FRiveAlignment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRiveAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RiveTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRiveAlignment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRiveAlignment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RiveRenderer,
	nullptr,
	&NewStructOps,
	"RiveAlignment",
	nullptr,
	0,
	sizeof(FRiveAlignment),
	alignof(FRiveAlignment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveAlignment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRiveAlignment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRiveAlignment()
{
	if (!Z_Registration_Info_UScriptStruct_RiveAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RiveAlignment.InnerSingleton, Z_Construct_UScriptStruct_FRiveAlignment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RiveAlignment.InnerSingleton;
}
// End ScriptStruct FRiveAlignment

// Begin Enum ERiveInitState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERiveInitState;
static UEnum* ERiveInitState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERiveInitState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERiveInitState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RiveRenderer_ERiveInitState, (UObject*)Z_Construct_UPackage__Script_RiveRenderer(), TEXT("ERiveInitState"));
	}
	return Z_Registration_Info_UEnum_ERiveInitState.OuterSingleton;
}
template<> RIVERENDERER_API UEnum* StaticEnum<ERiveInitState>()
{
	return ERiveInitState_StaticEnum();
}
struct Z_Construct_UEnum_RiveRenderer_ERiveInitState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deinitializing.Name", "ERiveInitState::Deinitializing" },
		{ "Initialized.Name", "ERiveInitState::Initialized" },
		{ "Initializing.Name", "ERiveInitState::Initializing" },
		{ "ModuleRelativePath", "Public/RiveTypes.h" },
		{ "Uninitialized.Name", "ERiveInitState::Uninitialized" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERiveInitState::Uninitialized", (int64)ERiveInitState::Uninitialized },
		{ "ERiveInitState::Deinitializing", (int64)ERiveInitState::Deinitializing },
		{ "ERiveInitState::Initializing", (int64)ERiveInitState::Initializing },
		{ "ERiveInitState::Initialized", (int64)ERiveInitState::Initialized },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RiveRenderer_ERiveInitState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RiveRenderer,
	nullptr,
	"ERiveInitState",
	"ERiveInitState",
	Z_Construct_UEnum_RiveRenderer_ERiveInitState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RiveRenderer_ERiveInitState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RiveRenderer_ERiveInitState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RiveRenderer_ERiveInitState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RiveRenderer_ERiveInitState()
{
	if (!Z_Registration_Info_UEnum_ERiveInitState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERiveInitState.InnerSingleton, Z_Construct_UEnum_RiveRenderer_ERiveInitState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERiveInitState.InnerSingleton;
}
// End Enum ERiveInitState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_RiveRenderer_Public_RiveTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERiveFitType_StaticEnum, TEXT("ERiveFitType"), &Z_Registration_Info_UEnum_ERiveFitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2097954338U) },
		{ ERiveAlignment_StaticEnum, TEXT("ERiveAlignment"), &Z_Registration_Info_UEnum_ERiveAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3279353217U) },
		{ ERiveInitState_StaticEnum, TEXT("ERiveInitState"), &Z_Registration_Info_UEnum_ERiveInitState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2490915981U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRiveStateMachineEvent::StaticStruct, Z_Construct_UScriptStruct_FRiveStateMachineEvent_Statics::NewStructOps, TEXT("RiveStateMachineEvent"), &Z_Registration_Info_UScriptStruct_RiveStateMachineEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRiveStateMachineEvent), 3234150090U) },
		{ FRiveAlignment::StaticStruct, Z_Construct_UScriptStruct_FRiveAlignment_Statics::NewStructOps, TEXT("RiveAlignment"), &Z_Registration_Info_UScriptStruct_RiveAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRiveAlignment), 921290078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_RiveRenderer_Public_RiveTypes_h_3746879580(TEXT("/Script/RiveRenderer"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_RiveRenderer_Public_RiveTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_RiveRenderer_Public_RiveTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_RiveRenderer_Public_RiveTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_Documents_GitHub_The_Last_Drop_Plugins_Rive0_2_6_Source_RiveRenderer_Public_RiveTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiveRenderer/Public/RiveRenderCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveRenderCommand() {}

// Begin Cross Module References
RIVERENDERER_API UEnum* Z_Construct_UEnum_RiveRenderer_ERiveFitType();
RIVERENDERER_API UEnum* Z_Construct_UEnum_RiveRenderer_ERiveRenderCommandType();
RIVERENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FRiveRenderCommand();
UPackage* Z_Construct_UPackage__Script_RiveRenderer();
// End Cross Module References

// Begin Enum ERiveRenderCommandType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERiveRenderCommandType;
static UEnum* ERiveRenderCommandType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERiveRenderCommandType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERiveRenderCommandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RiveRenderer_ERiveRenderCommandType, (UObject*)Z_Construct_UPackage__Script_RiveRenderer(), TEXT("ERiveRenderCommandType"));
	}
	return Z_Registration_Info_UEnum_ERiveRenderCommandType.OuterSingleton;
}
template<> RIVERENDERER_API UEnum* StaticEnum<ERiveRenderCommandType>()
{
	return ERiveRenderCommandType_StaticEnum();
}
struct Z_Construct_UEnum_RiveRenderer_ERiveRenderCommandType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlignArtboard.Name", "ERiveRenderCommandType::AlignArtboard" },
		{ "BlueprintType", "true" },
		{ "ClipPath.Name", "ERiveRenderCommandType::ClipPath" },
		{ "DrawArtboard.Name", "ERiveRenderCommandType::DrawArtboard" },
		{ "DrawPath.Name", "ERiveRenderCommandType::DrawPath" },
		{ "ModuleRelativePath", "Public/RiveRenderCommand.h" },
		{ "Restore.Name", "ERiveRenderCommandType::Restore" },
		{ "Save.Name", "ERiveRenderCommandType::Save" },
		{ "Transform.Name", "ERiveRenderCommandType::Transform" },
		{ "Translate.Name", "ERiveRenderCommandType::Translate" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERiveRenderCommandType::Save", (int64)ERiveRenderCommandType::Save },
		{ "ERiveRenderCommandType::Restore", (int64)ERiveRenderCommandType::Restore },
		{ "ERiveRenderCommandType::Transform", (int64)ERiveRenderCommandType::Transform },
		{ "ERiveRenderCommandType::DrawArtboard", (int64)ERiveRenderCommandType::DrawArtboard },
		{ "ERiveRenderCommandType::DrawPath", (int64)ERiveRenderCommandType::DrawPath },
		{ "ERiveRenderCommandType::ClipPath", (int64)ERiveRenderCommandType::ClipPath },
		{ "ERiveRenderCommandType::AlignArtboard", (int64)ERiveRenderCommandType::AlignArtboard },
		{ "ERiveRenderCommandType::Translate", (int64)ERiveRenderCommandType::Translate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RiveRenderer_ERiveRenderCommandType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RiveRenderer,
	nullptr,
	"ERiveRenderCommandType",
	"ERiveRenderCommandType",
	Z_Construct_UEnum_RiveRenderer_ERiveRenderCommandType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RiveRenderer_ERiveRenderCommandType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RiveRenderer_ERiveRenderCommandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RiveRenderer_ERiveRenderCommandType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RiveRenderer_ERiveRenderCommandType()
{
	if (!Z_Registration_Info_UEnum_ERiveRenderCommandType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERiveRenderCommandType.InnerSingleton, Z_Construct_UEnum_RiveRenderer_ERiveRenderCommandType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERiveRenderCommandType.InnerSingleton;
}
// End Enum ERiveRenderCommandType

// Begin ScriptStruct FRiveRenderCommand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RiveRenderCommand;
class UScriptStruct* FRiveRenderCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RiveRenderCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RiveRenderCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRiveRenderCommand, (UObject*)Z_Construct_UPackage__Script_RiveRenderer(), TEXT("RiveRenderCommand"));
	}
	return Z_Registration_Info_UScriptStruct_RiveRenderCommand.OuterSingleton;
}
template<> RIVERENDERER_API UScriptStruct* StaticStruct<FRiveRenderCommand>()
{
	return FRiveRenderCommand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRiveRenderCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RiveRenderCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/RiveRenderCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitType_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/RiveRenderCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/RiveRenderCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/RiveRenderCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/RiveRenderCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X2_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/RiveRenderCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y2_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/RiveRenderCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TX_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/RiveRenderCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TY_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/RiveRenderCommand.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FitType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRiveRenderCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveRenderCommand, Type), Z_Construct_UEnum_RiveRenderer_ERiveRenderCommandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2096226932
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_FitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_FitType = { "FitType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveRenderCommand, FitType), Z_Construct_UEnum_RiveRenderer_ERiveFitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitType_MetaData), NewProp_FitType_MetaData) }; // 2097954338
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveRenderCommand, ScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFactor_MetaData), NewProp_ScaleFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveRenderCommand, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveRenderCommand, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_X2 = { "X2", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveRenderCommand, X2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X2_MetaData), NewProp_X2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_Y2 = { "Y2", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveRenderCommand, Y2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y2_MetaData), NewProp_Y2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_TX = { "TX", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveRenderCommand, TX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TX_MetaData), NewProp_TX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_TY = { "TY", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveRenderCommand, TY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TY_MetaData), NewProp_TY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_FitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_FitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_ScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_X2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_Y2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_TX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewProp_TY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RiveRenderer,
	nullptr,
	&NewStructOps,
	"RiveRenderCommand",
	Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::PropPointers),
	sizeof(FRiveRenderCommand),
	alignof(FRiveRenderCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRiveRenderCommand()
{
	if (!Z_Registration_Info_UScriptStruct_RiveRenderCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RiveRenderCommand.InnerSingleton, Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RiveRenderCommand.InnerSingleton;
}
// End ScriptStruct FRiveRenderCommand

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveRenderer_Public_RiveRenderCommand_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERiveRenderCommandType_StaticEnum, TEXT("ERiveRenderCommandType"), &Z_Registration_Info_UEnum_ERiveRenderCommandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2096226932U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRiveRenderCommand::StaticStruct, Z_Construct_UScriptStruct_FRiveRenderCommand_Statics::NewStructOps, TEXT("RiveRenderCommand"), &Z_Registration_Info_UScriptStruct_RiveRenderCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRiveRenderCommand), 527536900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveRenderer_Public_RiveRenderCommand_h_2495551900(TEXT("/Script/RiveRenderer"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveRenderer_Public_RiveRenderCommand_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveRenderer_Public_RiveRenderCommand_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveRenderer_Public_RiveRenderCommand_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveRenderer_Public_RiveRenderCommand_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

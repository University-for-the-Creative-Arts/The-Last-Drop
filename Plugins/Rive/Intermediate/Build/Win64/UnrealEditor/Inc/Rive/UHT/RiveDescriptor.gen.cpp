// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Rive/RiveDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveDescriptor() {}

// Begin Cross Module References
RIVE_API UClass* Z_Construct_UClass_URiveFile_NoRegister();
RIVE_API UScriptStruct* Z_Construct_UScriptStruct_FRiveDescriptor();
RIVERENDERER_API UEnum* Z_Construct_UEnum_RiveRenderer_ERiveAlignment();
RIVERENDERER_API UEnum* Z_Construct_UEnum_RiveRenderer_ERiveFitType();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin ScriptStruct FRiveDescriptor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RiveDescriptor;
class UScriptStruct* FRiveDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RiveDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RiveDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRiveDescriptor, (UObject*)Z_Construct_UPackage__Script_Rive(), TEXT("RiveDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_RiveDescriptor.OuterSingleton;
}
template<> RIVE_API UScriptStruct* StaticStruct<FRiveDescriptor>()
{
	return FRiveDescriptor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRiveDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Describes information about instantiating an artboard from a RiveFile\n */" },
#endif
		{ "ModuleRelativePath", "Public/Rive/RiveDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Describes information about instantiating an artboard from a RiveFile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveFile_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArtboardName_MetaData[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Artboard Name is used if specified, otherwise ArtboardIndex will always\n// be used\n" },
#endif
		{ "GetOptions", "GetArtboardNamesForDropdown" },
		{ "ModuleRelativePath", "Public/Rive/RiveDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Artboard Name is used if specified, otherwise ArtboardIndex will always\nbe used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArtboardIndex_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[] = {
		{ "Category", "Rive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// StateMachine name to pass into our default artboard instance\n" },
#endif
		{ "GetOptions", "GetStateMachineNamesForDropdown" },
		{ "ModuleRelativePath", "Public/Rive/RiveDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateMachine name to pass into our default artboard instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitType_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/RiveDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RiveFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ArtboardName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArtboardIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StateMachineName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FitType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRiveDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_RiveFile = { "RiveFile", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveDescriptor, RiveFile), Z_Construct_UClass_URiveFile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveFile_MetaData), NewProp_RiveFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_ArtboardName = { "ArtboardName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveDescriptor, ArtboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArtboardName_MetaData), NewProp_ArtboardName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_ArtboardIndex = { "ArtboardIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveDescriptor, ArtboardIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArtboardIndex_MetaData), NewProp_ArtboardIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveDescriptor, StateMachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachineName_MetaData), NewProp_StateMachineName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_FitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_FitType = { "FitType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveDescriptor, FitType), Z_Construct_UEnum_RiveRenderer_ERiveFitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitType_MetaData), NewProp_FitType_MetaData) }; // 2097954338
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveDescriptor, Alignment), Z_Construct_UEnum_RiveRenderer_ERiveAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 3279353217
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveDescriptor, ScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFactor_MetaData), NewProp_ScaleFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRiveDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_RiveFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_ArtboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_ArtboardIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_StateMachineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_FitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_FitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewProp_ScaleFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRiveDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
	nullptr,
	&NewStructOps,
	"RiveDescriptor",
	Z_Construct_UScriptStruct_FRiveDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveDescriptor_Statics::PropPointers),
	sizeof(FRiveDescriptor),
	alignof(FRiveDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRiveDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRiveDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_RiveDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RiveDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FRiveDescriptor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RiveDescriptor.InnerSingleton;
}
// End ScriptStruct FRiveDescriptor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308303_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveDescriptor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRiveDescriptor::StaticStruct, Z_Construct_UScriptStruct_FRiveDescriptor_Statics::NewStructOps, TEXT("RiveDescriptor"), &Z_Registration_Info_UScriptStruct_RiveDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRiveDescriptor), 521909231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308303_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveDescriptor_h_3350694794(TEXT("/Script/Rive"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_2308303_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveDescriptor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308303_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveDescriptor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

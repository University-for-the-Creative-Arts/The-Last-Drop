// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Rive/Assets/RiveAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RIVE_API UClass* Z_Construct_UClass_URiveAsset();
RIVE_API UClass* Z_Construct_UClass_URiveAsset_NoRegister();
RIVE_API UEnum* Z_Construct_UEnum_Rive_ERiveAssetType();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin Enum ERiveAssetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERiveAssetType;
static UEnum* ERiveAssetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERiveAssetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERiveAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Rive_ERiveAssetType, (UObject*)Z_Construct_UPackage__Script_Rive(), TEXT("ERiveAssetType"));
	}
	return Z_Registration_Info_UEnum_ERiveAssetType.OuterSingleton;
}
template<> RIVE_API UEnum* StaticEnum<ERiveAssetType>()
{
	return ERiveAssetType_StaticEnum();
}
struct Z_Construct_UEnum_Rive_ERiveAssetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Audio.Name", "ERiveAssetType::Audio" },
		{ "BlueprintType", "true" },
		{ "FileBase.Name", "ERiveAssetType::FileBase" },
		{ "Font.Name", "ERiveAssetType::Font" },
		{ "Image.Name", "ERiveAssetType::Image" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveAsset.h" },
		{ "None.Name", "ERiveAssetType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERiveAssetType::None", (int64)ERiveAssetType::None },
		{ "ERiveAssetType::FileBase", (int64)ERiveAssetType::FileBase },
		{ "ERiveAssetType::Image", (int64)ERiveAssetType::Image },
		{ "ERiveAssetType::Font", (int64)ERiveAssetType::Font },
		{ "ERiveAssetType::Audio", (int64)ERiveAssetType::Audio },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Rive_ERiveAssetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Rive,
	nullptr,
	"ERiveAssetType",
	"ERiveAssetType",
	Z_Construct_UEnum_Rive_ERiveAssetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Rive_ERiveAssetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Rive_ERiveAssetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Rive_ERiveAssetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Rive_ERiveAssetType()
{
	if (!Z_Registration_Info_UEnum_ERiveAssetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERiveAssetType.InnerSingleton, Z_Construct_UEnum_Rive_ERiveAssetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERiveAssetType.InnerSingleton;
}
// End Enum ERiveAssetType

// Begin Class URiveAsset
void URiveAsset::StaticRegisterNativesURiveAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URiveAsset);
UClass* Z_Construct_UClass_URiveAsset_NoRegister()
{
	return URiveAsset::StaticClass();
}
struct Z_Construct_UClass_URiveAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Rive/Assets/RiveAsset.h" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveAsset.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveAsset.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveAsset.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInBand_MetaData[] = {
		{ "Category", "Rive" },
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveAsset.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeAssetBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rive/Assets/RiveAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Id;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bIsInBand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInBand;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_ByteSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NativeAssetBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeAssetBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiveAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URiveAsset_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveAsset, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URiveAsset_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URiveAsset_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveAsset, Type), Z_Construct_UEnum_Rive_ERiveAssetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3236009694
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URiveAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveAsset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UClass_URiveAsset_Statics::NewProp_bIsInBand_SetBit(void* Obj)
{
	((URiveAsset*)Obj)->bIsInBand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URiveAsset_Statics::NewProp_bIsInBand = { "bIsInBand", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URiveAsset), &Z_Construct_UClass_URiveAsset_Statics::NewProp_bIsInBand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInBand_MetaData), NewProp_bIsInBand_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_URiveAsset_Statics::NewProp_ByteSize = { "ByteSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveAsset, ByteSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteSize_MetaData), NewProp_ByteSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URiveAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveAsset, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URiveAsset_Statics::NewProp_NativeAssetBytes_Inner = { "NativeAssetBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URiveAsset_Statics::NewProp_NativeAssetBytes = { "NativeAssetBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URiveAsset, NativeAssetBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeAssetBytes_MetaData), NewProp_NativeAssetBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URiveAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveAsset_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveAsset_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveAsset_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveAsset_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveAsset_Statics::NewProp_bIsInBand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveAsset_Statics::NewProp_ByteSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveAsset_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveAsset_Statics::NewProp_NativeAssetBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiveAsset_Statics::NewProp_NativeAssetBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URiveAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiveAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiveAsset_Statics::ClassParams = {
	&URiveAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URiveAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URiveAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiveAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_URiveAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiveAsset()
{
	if (!Z_Registration_Info_UClass_URiveAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiveAsset.OuterSingleton, Z_Construct_UClass_URiveAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiveAsset.OuterSingleton;
}
template<> RIVE_API UClass* StaticClass<URiveAsset>()
{
	return URiveAsset::StaticClass();
}
URiveAsset::URiveAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiveAsset);
URiveAsset::~URiveAsset() {}
// End Class URiveAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2308303_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERiveAssetType_StaticEnum, TEXT("ERiveAssetType"), &Z_Registration_Info_UEnum_ERiveAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3236009694U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiveAsset, URiveAsset::StaticClass, TEXT("URiveAsset"), &Z_Registration_Info_UClass_URiveAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiveAsset), 2237361683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2308303_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveAsset_h_2996177830(TEXT("/Script/Rive"),
	Z_CompiledInDeferFile_FID_Users_2308303_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308303_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveAsset_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_2308303_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2308303_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_Assets_RiveAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

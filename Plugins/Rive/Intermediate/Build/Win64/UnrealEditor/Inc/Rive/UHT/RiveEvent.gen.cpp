// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rive/Public/Rive/RiveEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiveEvent() {}

// Begin Cross Module References
RIVE_API UScriptStruct* Z_Construct_UScriptStruct_FRiveEvent();
RIVE_API UScriptStruct* Z_Construct_UScriptStruct_FRiveEventBoolProperty();
RIVE_API UScriptStruct* Z_Construct_UScriptStruct_FRiveEventNumberProperty();
RIVE_API UScriptStruct* Z_Construct_UScriptStruct_FRiveEventProperty();
RIVE_API UScriptStruct* Z_Construct_UScriptStruct_FRiveEventStringProperty();
UPackage* Z_Construct_UPackage__Script_Rive();
// End Cross Module References

// Begin ScriptStruct FRiveEventProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RiveEventProperty;
class UScriptStruct* FRiveEventProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RiveEventProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RiveEventProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRiveEventProperty, (UObject*)Z_Construct_UPackage__Script_Rive(), TEXT("RiveEventProperty"));
	}
	return Z_Registration_Info_UScriptStruct_RiveEventProperty.OuterSingleton;
}
template<> RIVE_API UScriptStruct* StaticStruct<FRiveEventProperty>()
{
	return FRiveEventProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRiveEventProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Rive | Events" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRiveEventProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRiveEventProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveEventProperty, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRiveEventProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEventProperty_Statics::NewProp_PropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRiveEventProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
	nullptr,
	&NewStructOps,
	"RiveEventProperty",
	Z_Construct_UScriptStruct_FRiveEventProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventProperty_Statics::PropPointers),
	sizeof(FRiveEventProperty),
	alignof(FRiveEventProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRiveEventProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRiveEventProperty()
{
	if (!Z_Registration_Info_UScriptStruct_RiveEventProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RiveEventProperty.InnerSingleton, Z_Construct_UScriptStruct_FRiveEventProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RiveEventProperty.InnerSingleton;
}
// End ScriptStruct FRiveEventProperty

// Begin ScriptStruct FRiveEventBoolProperty
static_assert(std::is_polymorphic<FRiveEventBoolProperty>() == std::is_polymorphic<FRiveEventProperty>(), "USTRUCT FRiveEventBoolProperty cannot be polymorphic unless super FRiveEventProperty is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RiveEventBoolProperty;
class UScriptStruct* FRiveEventBoolProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RiveEventBoolProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RiveEventBoolProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRiveEventBoolProperty, (UObject*)Z_Construct_UPackage__Script_Rive(), TEXT("RiveEventBoolProperty"));
	}
	return Z_Registration_Info_UScriptStruct_RiveEventBoolProperty.OuterSingleton;
}
template<> RIVE_API UScriptStruct* StaticStruct<FRiveEventBoolProperty>()
{
	return FRiveEventBoolProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolProperty_MetaData[] = {
		{ "Category", "Rive | Events" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_BoolProperty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRiveEventBoolProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::NewProp_BoolProperty_SetBit(void* Obj)
{
	((FRiveEventBoolProperty*)Obj)->BoolProperty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::NewProp_BoolProperty = { "BoolProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRiveEventBoolProperty), &Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::NewProp_BoolProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolProperty_MetaData), NewProp_BoolProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::NewProp_BoolProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
	Z_Construct_UScriptStruct_FRiveEventProperty,
	&NewStructOps,
	"RiveEventBoolProperty",
	Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::PropPointers),
	sizeof(FRiveEventBoolProperty),
	alignof(FRiveEventBoolProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRiveEventBoolProperty()
{
	if (!Z_Registration_Info_UScriptStruct_RiveEventBoolProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RiveEventBoolProperty.InnerSingleton, Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RiveEventBoolProperty.InnerSingleton;
}
// End ScriptStruct FRiveEventBoolProperty

// Begin ScriptStruct FRiveEventNumberProperty
static_assert(std::is_polymorphic<FRiveEventNumberProperty>() == std::is_polymorphic<FRiveEventProperty>(), "USTRUCT FRiveEventNumberProperty cannot be polymorphic unless super FRiveEventProperty is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RiveEventNumberProperty;
class UScriptStruct* FRiveEventNumberProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RiveEventNumberProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RiveEventNumberProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRiveEventNumberProperty, (UObject*)Z_Construct_UPackage__Script_Rive(), TEXT("RiveEventNumberProperty"));
	}
	return Z_Registration_Info_UScriptStruct_RiveEventNumberProperty.OuterSingleton;
}
template<> RIVE_API UScriptStruct* StaticStruct<FRiveEventNumberProperty>()
{
	return FRiveEventNumberProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberProperty_MetaData[] = {
		{ "Category", "Rive | Events" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumberProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRiveEventNumberProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics::NewProp_NumberProperty = { "NumberProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveEventNumberProperty, NumberProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberProperty_MetaData), NewProp_NumberProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics::NewProp_NumberProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
	Z_Construct_UScriptStruct_FRiveEventProperty,
	&NewStructOps,
	"RiveEventNumberProperty",
	Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics::PropPointers),
	sizeof(FRiveEventNumberProperty),
	alignof(FRiveEventNumberProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRiveEventNumberProperty()
{
	if (!Z_Registration_Info_UScriptStruct_RiveEventNumberProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RiveEventNumberProperty.InnerSingleton, Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RiveEventNumberProperty.InnerSingleton;
}
// End ScriptStruct FRiveEventNumberProperty

// Begin ScriptStruct FRiveEventStringProperty
static_assert(std::is_polymorphic<FRiveEventStringProperty>() == std::is_polymorphic<FRiveEventProperty>(), "USTRUCT FRiveEventStringProperty cannot be polymorphic unless super FRiveEventProperty is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RiveEventStringProperty;
class UScriptStruct* FRiveEventStringProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RiveEventStringProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RiveEventStringProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRiveEventStringProperty, (UObject*)Z_Construct_UPackage__Script_Rive(), TEXT("RiveEventStringProperty"));
	}
	return Z_Registration_Info_UScriptStruct_RiveEventStringProperty.OuterSingleton;
}
template<> RIVE_API UScriptStruct* StaticStruct<FRiveEventStringProperty>()
{
	return FRiveEventStringProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringProperty_MetaData[] = {
		{ "Category", "Rive | Events" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRiveEventStringProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics::NewProp_StringProperty = { "StringProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveEventStringProperty, StringProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringProperty_MetaData), NewProp_StringProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics::NewProp_StringProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
	Z_Construct_UScriptStruct_FRiveEventProperty,
	&NewStructOps,
	"RiveEventStringProperty",
	Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics::PropPointers),
	sizeof(FRiveEventStringProperty),
	alignof(FRiveEventStringProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRiveEventStringProperty()
{
	if (!Z_Registration_Info_UScriptStruct_RiveEventStringProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RiveEventStringProperty.InnerSingleton, Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RiveEventStringProperty.InnerSingleton;
}
// End ScriptStruct FRiveEventStringProperty

// Begin ScriptStruct FRiveEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RiveEvent;
class UScriptStruct* FRiveEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RiveEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RiveEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRiveEvent, (UObject*)Z_Construct_UPackage__Script_Rive(), TEXT("RiveEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RiveEvent.OuterSingleton;
}
template<> RIVE_API UScriptStruct* StaticStruct<FRiveEvent>()
{
	return FRiveEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRiveEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Rive Event" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayInSeconds_MetaData[] = {
		{ "Category", "Rive | Events" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Rive | Events" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Rive | Events" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveEventBoolProperties_MetaData[] = {
		{ "Category", "Rive | Events" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveEventNumberProperties_MetaData[] = {
		{ "Category", "Rive | Events" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiveEventStringProperties_MetaData[] = {
		{ "Category", "Rive | Events" },
		{ "ModuleRelativePath", "Public/Rive/RiveEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayInSeconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RiveEventBoolProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RiveEventBoolProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RiveEventNumberProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RiveEventNumberProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RiveEventStringProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RiveEventStringProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRiveEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_DelayInSeconds = { "DelayInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveEvent, DelayInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayInSeconds_MetaData), NewProp_DelayInSeconds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveEvent, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveEvent, Type), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventBoolProperties_Inner = { "RiveEventBoolProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRiveEventBoolProperty, METADATA_PARAMS(0, nullptr) }; // 507113052
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventBoolProperties = { "RiveEventBoolProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveEvent, RiveEventBoolProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveEventBoolProperties_MetaData), NewProp_RiveEventBoolProperties_MetaData) }; // 507113052
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventNumberProperties_Inner = { "RiveEventNumberProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRiveEventNumberProperty, METADATA_PARAMS(0, nullptr) }; // 1388668815
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventNumberProperties = { "RiveEventNumberProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveEvent, RiveEventNumberProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveEventNumberProperties_MetaData), NewProp_RiveEventNumberProperties_MetaData) }; // 1388668815
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventStringProperties_Inner = { "RiveEventStringProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRiveEventStringProperty, METADATA_PARAMS(0, nullptr) }; // 2138986509
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventStringProperties = { "RiveEventStringProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRiveEvent, RiveEventStringProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiveEventStringProperties_MetaData), NewProp_RiveEventStringProperties_MetaData) }; // 2138986509
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRiveEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_DelayInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventBoolProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventBoolProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventNumberProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventNumberProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventStringProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRiveEvent_Statics::NewProp_RiveEventStringProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRiveEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Rive,
	nullptr,
	&NewStructOps,
	"RiveEvent",
	Z_Construct_UScriptStruct_FRiveEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEvent_Statics::PropPointers),
	sizeof(FRiveEvent),
	alignof(FRiveEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRiveEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRiveEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRiveEvent()
{
	if (!Z_Registration_Info_UScriptStruct_RiveEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RiveEvent.InnerSingleton, Z_Construct_UScriptStruct_FRiveEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RiveEvent.InnerSingleton;
}
// End ScriptStruct FRiveEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveEvent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRiveEventProperty::StaticStruct, Z_Construct_UScriptStruct_FRiveEventProperty_Statics::NewStructOps, TEXT("RiveEventProperty"), &Z_Registration_Info_UScriptStruct_RiveEventProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRiveEventProperty), 2661104778U) },
		{ FRiveEventBoolProperty::StaticStruct, Z_Construct_UScriptStruct_FRiveEventBoolProperty_Statics::NewStructOps, TEXT("RiveEventBoolProperty"), &Z_Registration_Info_UScriptStruct_RiveEventBoolProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRiveEventBoolProperty), 507113052U) },
		{ FRiveEventNumberProperty::StaticStruct, Z_Construct_UScriptStruct_FRiveEventNumberProperty_Statics::NewStructOps, TEXT("RiveEventNumberProperty"), &Z_Registration_Info_UScriptStruct_RiveEventNumberProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRiveEventNumberProperty), 1388668815U) },
		{ FRiveEventStringProperty::StaticStruct, Z_Construct_UScriptStruct_FRiveEventStringProperty_Statics::NewStructOps, TEXT("RiveEventStringProperty"), &Z_Registration_Info_UScriptStruct_RiveEventStringProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRiveEventStringProperty), 2138986509U) },
		{ FRiveEvent::StaticStruct, Z_Construct_UScriptStruct_FRiveEvent_Statics::NewStructOps, TEXT("RiveEvent"), &Z_Registration_Info_UScriptStruct_RiveEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRiveEvent), 4168395245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveEvent_h_332372464(TEXT("/Script/Rive"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2318999_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_Rive_Public_Rive_RiveEvent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

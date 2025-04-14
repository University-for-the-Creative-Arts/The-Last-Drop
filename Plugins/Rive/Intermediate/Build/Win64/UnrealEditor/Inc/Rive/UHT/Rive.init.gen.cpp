// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRive_init() {}
	RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveActorComponent_RiveReadyDelegate__DelegateSignature();
	RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature();
	RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature();
	RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature();
	RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature();
	RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature();
	RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveFile_RiveReadyDelegate__DelegateSignature();
	RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveTextureObject_RiveReadyDelegate__DelegateSignature();
	RIVE_API UFunction* Z_Construct_UDelegateFunction_URiveWidget_RiveReadyDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Rive;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Rive()
	{
		if (!Z_Registration_Info_UPackage__Script_Rive.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_URiveActorComponent_RiveReadyDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_URiveArtboard_RiveCoordinatesDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_URiveArtboard_RiveEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_URiveArtboard_RiveNamedEventsDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_URiveArtboard_RiveTickDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_URiveFile_RiveReadyDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_URiveTextureObject_RiveReadyDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_URiveWidget_RiveReadyDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Rive",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x401CD621,
				0x07839EDB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Rive.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Rive.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Rive(Z_Construct_UPackage__Script_Rive, TEXT("/Script/Rive"), Z_Registration_Info_UPackage__Script_Rive, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x401CD621, 0x07839EDB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

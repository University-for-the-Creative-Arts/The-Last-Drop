// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RiveRenderCommand.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIVERENDERER_RiveRenderCommand_generated_h
#error "RiveRenderCommand.generated.h already included, missing '#pragma once' in RiveRenderCommand.h"
#endif
#define RIVERENDERER_RiveRenderCommand_generated_h

#define FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveRenderer_Public_RiveRenderCommand_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRiveRenderCommand_Statics; \
	RIVERENDERER_API static class UScriptStruct* StaticStruct();


template<> RIVERENDERER_API UScriptStruct* StaticStruct<struct FRiveRenderCommand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2308729_UCREATIVE_Documents_GitHub_The_Last_Drop_Plugins_Rive_Source_RiveRenderer_Public_RiveRenderCommand_h


#define FOREACH_ENUM_ERIVERENDERCOMMANDTYPE(op) \
	op(ERiveRenderCommandType::Save) \
	op(ERiveRenderCommandType::Restore) \
	op(ERiveRenderCommandType::Transform) \
	op(ERiveRenderCommandType::DrawArtboard) \
	op(ERiveRenderCommandType::DrawPath) \
	op(ERiveRenderCommandType::ClipPath) \
	op(ERiveRenderCommandType::AlignArtboard) \
	op(ERiveRenderCommandType::Translate) 

enum class ERiveRenderCommandType : uint8;
template<> struct TIsUEnumClass<ERiveRenderCommandType> { enum { Value = true }; };
template<> RIVERENDERER_API UEnum* StaticEnum<ERiveRenderCommandType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

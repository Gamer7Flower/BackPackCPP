// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BackPackSystem/OperateUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BACKPACK_CPP_OperateUI_generated_h
#error "OperateUI.generated.h already included, missing '#pragma once' in OperateUI.h"
#endif
#define BACKPACK_CPP_OperateUI_generated_h

#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnThrowButtonClick); \
	DECLARE_FUNCTION(execOnUseButtonClick);


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOperateUI(); \
	friend struct Z_Construct_UClass_UOperateUI_Statics; \
public: \
	DECLARE_CLASS(UOperateUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BackPack_Cpp"), NO_API) \
	DECLARE_SERIALIZER(UOperateUI)


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOperateUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOperateUI(UOperateUI&&); \
	UOperateUI(const UOperateUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperateUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperateUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOperateUI) \
	NO_API virtual ~UOperateUI();


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_13_PROLOG
#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BACKPACK_CPP_API UClass* StaticClass<class UOperateUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

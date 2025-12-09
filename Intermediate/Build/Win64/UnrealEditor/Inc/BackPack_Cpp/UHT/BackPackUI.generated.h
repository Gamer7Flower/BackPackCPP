// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BackPackSystem/BackPackUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BACKPACK_CPP_BackPackUI_generated_h
#error "BackPackUI.generated.h already included, missing '#pragma once' in BackPackUI.h"
#endif
#define BACKPACK_CPP_BackPackUI_generated_h

#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCloseButtonClick); \
	DECLARE_FUNCTION(execRefreshBackPack);


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackPackUI(); \
	friend struct Z_Construct_UClass_UBackPackUI_Statics; \
public: \
	DECLARE_CLASS(UBackPackUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BackPack_Cpp"), NO_API) \
	DECLARE_SERIALIZER(UBackPackUI)


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackPackUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBackPackUI(UBackPackUI&&); \
	UBackPackUI(const UBackPackUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackPackUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackPackUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackPackUI) \
	NO_API virtual ~UBackPackUI();


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_16_PROLOG
#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BACKPACK_CPP_API UClass* StaticClass<class UBackPackUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BackPackSystem/BackPackComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BACKPACK_CPP_BackPackComponent_generated_h
#error "BackPackComponent.generated.h already included, missing '#pragma once' in BackPackComponent.h"
#endif
#define BACKPACK_CPP_BackPackComponent_generated_h

#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBackPackUIController); \
	DECLARE_FUNCTION(execSwapItem);


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackPackComponent(); \
	friend struct Z_Construct_UClass_UBackPackComponent_Statics; \
public: \
	DECLARE_CLASS(UBackPackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BackPack_Cpp"), NO_API) \
	DECLARE_SERIALIZER(UBackPackComponent)


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBackPackComponent(UBackPackComponent&&); \
	UBackPackComponent(const UBackPackComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackPackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackPackComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBackPackComponent) \
	NO_API virtual ~UBackPackComponent();


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_19_PROLOG
#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BACKPACK_CPP_API UClass* StaticClass<class UBackPackComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

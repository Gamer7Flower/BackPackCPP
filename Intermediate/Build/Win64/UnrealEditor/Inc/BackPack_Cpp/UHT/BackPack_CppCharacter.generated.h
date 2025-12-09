// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BackPack_CppCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BACKPACK_CPP_BackPack_CppCharacter_generated_h
#error "BackPack_CppCharacter.generated.h already included, missing '#pragma once' in BackPack_CppCharacter.h"
#endif
#define BACKPACK_CPP_BackPack_CppCharacter_generated_h

#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBackPackUIController);


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABackPack_CppCharacter(); \
	friend struct Z_Construct_UClass_ABackPack_CppCharacter_Statics; \
public: \
	DECLARE_CLASS(ABackPack_CppCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BackPack_Cpp"), NO_API) \
	DECLARE_SERIALIZER(ABackPack_CppCharacter)


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABackPack_CppCharacter(ABackPack_CppCharacter&&); \
	ABackPack_CppCharacter(const ABackPack_CppCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABackPack_CppCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABackPack_CppCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABackPack_CppCharacter) \
	NO_API virtual ~ABackPack_CppCharacter();


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_20_PROLOG
#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BACKPACK_CPP_API UClass* StaticClass<class ABackPack_CppCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

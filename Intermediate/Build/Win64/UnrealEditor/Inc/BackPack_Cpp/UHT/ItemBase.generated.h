// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BackPackSystem/ItemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BACKPACK_CPP_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define BACKPACK_CPP_ItemBase_generated_h

#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_ItemBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_ItemBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BackPack_Cpp"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_ItemBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItemBase(AItemBase&&); \
	AItemBase(const AItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBase) \
	NO_API virtual ~AItemBase();


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_ItemBase_h_13_PROLOG
#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_ItemBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_ItemBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_ItemBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_ItemBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BACKPACK_CPP_API UClass* StaticClass<class AItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

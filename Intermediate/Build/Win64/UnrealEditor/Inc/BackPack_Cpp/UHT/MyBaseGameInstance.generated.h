// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/MyBaseGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BACKPACK_CPP_MyBaseGameInstance_generated_h
#error "MyBaseGameInstance.generated.h already included, missing '#pragma once' in MyBaseGameInstance.h"
#endif
#define BACKPACK_CPP_MyBaseGameInstance_generated_h

#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItem_Struct_Statics; \
	BACKPACK_CPP_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> BACKPACK_CPP_API UScriptStruct* StaticStruct<struct FItem_Struct>();

#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBaseGameInstance(); \
	friend struct Z_Construct_UClass_UMyBaseGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BackPack_Cpp"), NO_API) \
	DECLARE_SERIALIZER(UMyBaseGameInstance)


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBaseGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyBaseGameInstance(UMyBaseGameInstance&&); \
	UMyBaseGameInstance(const UMyBaseGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBaseGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBaseGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBaseGameInstance) \
	NO_API virtual ~UMyBaseGameInstance();


#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_43_PROLOG
#define FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_46_INCLASS_NO_PURE_DECLS \
	FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BACKPACK_CPP_API UClass* StaticClass<class UMyBaseGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h


#define FOREACH_ENUM_EITEM_TYPE(op) \
	op(EItem_Type::Weapon) \
	op(EItem_Type::Prop) \
	op(EItem_Type::Food) 

enum class EItem_Type : uint8;
template<> struct TIsUEnumClass<EItem_Type> { enum { Value = true }; };
template<> BACKPACK_CPP_API UEnum* StaticEnum<EItem_Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackPack_Cpp/Public/Gameplay/MyBaseGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBaseGameInstance() {}

// Begin Cross Module References
BACKPACK_CPP_API UClass* Z_Construct_UClass_UMyBaseGameInstance();
BACKPACK_CPP_API UClass* Z_Construct_UClass_UMyBaseGameInstance_NoRegister();
BACKPACK_CPP_API UEnum* Z_Construct_UEnum_BackPack_Cpp_EItem_Type();
BACKPACK_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FItem_Struct();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_BackPack_Cpp();
// End Cross Module References

// Begin Enum EItem_Type
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItem_Type;
static UEnum* EItem_Type_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItem_Type.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItem_Type.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BackPack_Cpp_EItem_Type, (UObject*)Z_Construct_UPackage__Script_BackPack_Cpp(), TEXT("EItem_Type"));
	}
	return Z_Registration_Info_UEnum_EItem_Type.OuterSingleton;
}
template<> BACKPACK_CPP_API UEnum* StaticEnum<EItem_Type>()
{
	return EItem_Type_StaticEnum();
}
struct Z_Construct_UEnum_BackPack_Cpp_EItem_Type_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe\n" },
#endif
		{ "Food.DisplayName", "Food" },
		{ "Food.Name", "EItem_Type::Food" },
		{ "ModuleRelativePath", "Public/Gameplay/MyBaseGameInstance.h" },
		{ "Prop.DisplayName", "Prop" },
		{ "Prop.Name", "EItem_Type::Prop" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe" },
#endif
		{ "Weapon.DisplayName", "Weapon" },
		{ "Weapon.Name", "EItem_Type::Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItem_Type::Weapon", (int64)EItem_Type::Weapon },
		{ "EItem_Type::Prop", (int64)EItem_Type::Prop },
		{ "EItem_Type::Food", (int64)EItem_Type::Food },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BackPack_Cpp_EItem_Type_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BackPack_Cpp,
	nullptr,
	"EItem_Type",
	"EItem_Type",
	Z_Construct_UEnum_BackPack_Cpp_EItem_Type_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BackPack_Cpp_EItem_Type_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BackPack_Cpp_EItem_Type_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BackPack_Cpp_EItem_Type_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BackPack_Cpp_EItem_Type()
{
	if (!Z_Registration_Info_UEnum_EItem_Type.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItem_Type.InnerSingleton, Z_Construct_UEnum_BackPack_Cpp_EItem_Type_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItem_Type.InnerSingleton;
}
// End Enum EItem_Type

// Begin ScriptStruct FItem_Struct
static_assert(std::is_polymorphic<FItem_Struct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItem_Struct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Item_Struct;
class UScriptStruct* FItem_Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Item_Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Item_Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItem_Struct, (UObject*)Z_Construct_UPackage__Script_BackPack_Cpp(), TEXT("Item_Struct"));
	}
	return Z_Registration_Info_UScriptStruct_Item_Struct.OuterSingleton;
}
template<> BACKPACK_CPP_API UScriptStruct* StaticStruct<FItem_Struct>()
{
	return FItem_Struct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItem_Struct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n// \xe6\xa0\x87\xe8\xae\xb0\xef\xbc\x8c\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba""DataTable\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/MyBaseGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n\xe6\xa0\x87\xe8\xae\xb0\xef\xbc\x8c\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba""DataTable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Item_Struct" },
		{ "ModuleRelativePath", "Public/Gameplay/MyBaseGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Item_Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/MyBaseGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Item_Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xb4\xa2\xe5\xbc\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/MyBaseGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb4\xa2\xe5\xbc\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Item_Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/MyBaseGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_Count_MetaData[] = {
		{ "Category", "Item_Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/MyBaseGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Can_Stack_MetaData[] = {
		{ "Category", "Item_Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/MyBaseGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_Type_MetaData[] = {
		{ "Category", "Item_Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/MyBaseGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Max_Count;
	static void NewProp_Can_Stack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Can_Stack;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Item_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Item_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItem_Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem_Struct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem_Struct, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem_Struct, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem_Struct, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Max_Count = { "Max_Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem_Struct, Max_Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_Count_MetaData), NewProp_Max_Count_MetaData) };
void Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Can_Stack_SetBit(void* Obj)
{
	((FItem_Struct*)Obj)->Can_Stack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Can_Stack = { "Can_Stack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItem_Struct), &Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Can_Stack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Can_Stack_MetaData), NewProp_Can_Stack_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Item_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Item_Type = { "Item_Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem_Struct, Item_Type), Z_Construct_UEnum_BackPack_Cpp_EItem_Type, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_Type_MetaData), NewProp_Item_Type_MetaData) }; // 1955724543
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItem_Struct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Max_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Can_Stack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Item_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Struct_Statics::NewProp_Item_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Struct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItem_Struct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BackPack_Cpp,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Item_Struct",
	Z_Construct_UScriptStruct_FItem_Struct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Struct_Statics::PropPointers),
	sizeof(FItem_Struct),
	alignof(FItem_Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItem_Struct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItem_Struct()
{
	if (!Z_Registration_Info_UScriptStruct_Item_Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Item_Struct.InnerSingleton, Z_Construct_UScriptStruct_FItem_Struct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Item_Struct.InnerSingleton;
}
// End ScriptStruct FItem_Struct

// Begin Class UMyBaseGameInstance
void UMyBaseGameInstance::StaticRegisterNativesUMyBaseGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBaseGameInstance);
UClass* Z_Construct_UClass_UMyBaseGameInstance_NoRegister()
{
	return UMyBaseGameInstance::StaticClass();
}
struct Z_Construct_UClass_UMyBaseGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/MyBaseGameInstance.h" },
		{ "ModuleRelativePath", "Public/Gameplay/MyBaseGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackPack_Array_MetaData[] = {
		{ "Category", "MyBaseGameInstance" },
		{ "ModuleRelativePath", "Public/Gameplay/MyBaseGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackPack_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BackPack_Array;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBaseGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyBaseGameInstance_Statics::NewProp_BackPack_Array_Inner = { "BackPack_Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItem_Struct, METADATA_PARAMS(0, nullptr) }; // 2474143910
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyBaseGameInstance_Statics::NewProp_BackPack_Array = { "BackPack_Array", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBaseGameInstance, BackPack_Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackPack_Array_MetaData), NewProp_BackPack_Array_MetaData) }; // 2474143910
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBaseGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBaseGameInstance_Statics::NewProp_BackPack_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBaseGameInstance_Statics::NewProp_BackPack_Array,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBaseGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyBaseGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_BackPack_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBaseGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBaseGameInstance_Statics::ClassParams = {
	&UMyBaseGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyBaseGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyBaseGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBaseGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBaseGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBaseGameInstance()
{
	if (!Z_Registration_Info_UClass_UMyBaseGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBaseGameInstance.OuterSingleton, Z_Construct_UClass_UMyBaseGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBaseGameInstance.OuterSingleton;
}
template<> BACKPACK_CPP_API UClass* StaticClass<UMyBaseGameInstance>()
{
	return UMyBaseGameInstance::StaticClass();
}
UMyBaseGameInstance::UMyBaseGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBaseGameInstance);
UMyBaseGameInstance::~UMyBaseGameInstance() {}
// End Class UMyBaseGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItem_Type_StaticEnum, TEXT("EItem_Type"), &Z_Registration_Info_UEnum_EItem_Type, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1955724543U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItem_Struct::StaticStruct, Z_Construct_UScriptStruct_FItem_Struct_Statics::NewStructOps, TEXT("Item_Struct"), &Z_Registration_Info_UScriptStruct_Item_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItem_Struct), 2474143910U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBaseGameInstance, UMyBaseGameInstance::StaticClass, TEXT("UMyBaseGameInstance"), &Z_Registration_Info_UClass_UMyBaseGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBaseGameInstance), 3507833265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_2814958207(TEXT("/Script/BackPack_Cpp"),
	Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_Gameplay_MyBaseGameInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackPack_Cpp/Public/BackPackSystem/OperateUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperateUI() {}

// Begin Cross Module References
BACKPACK_CPP_API UClass* Z_Construct_UClass_UOperateUI();
BACKPACK_CPP_API UClass* Z_Construct_UClass_UOperateUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BackPack_Cpp();
// End Cross Module References

// Begin Class UOperateUI Function OnThrowButtonClick
struct Z_Construct_UFunction_UOperateUI_OnThrowButtonClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BackPackSystem" },
		{ "ModuleRelativePath", "Public/BackPackSystem/OperateUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateUI_OnThrowButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateUI, nullptr, "OnThrowButtonClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateUI_OnThrowButtonClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateUI_OnThrowButtonClick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOperateUI_OnThrowButtonClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateUI_OnThrowButtonClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateUI::execOnThrowButtonClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnThrowButtonClick();
	P_NATIVE_END;
}
// End Class UOperateUI Function OnThrowButtonClick

// Begin Class UOperateUI Function OnUseButtonClick
struct Z_Construct_UFunction_UOperateUI_OnUseButtonClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BackPackSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9c\xa8\xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81\xe6\x97\xb6\xef\xbc\x8c\xe9\x80\x9a\xe8\xbf\x87\xe8\xbf\x99\xe4\xb8\xaaSlotIndex\xe5\x8e\xbb\xe5\xae\x9a\xe4\xbd\x8d\xe6\x95\xb0\xe7\xbb\x84\xe4\xb8\xad\xe7\x9a\x84\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/BackPackSystem/OperateUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81\xe6\x97\xb6\xef\xbc\x8c\xe9\x80\x9a\xe8\xbf\x87\xe8\xbf\x99\xe4\xb8\xaaSlotIndex\xe5\x8e\xbb\xe5\xae\x9a\xe4\xbd\x8d\xe6\x95\xb0\xe7\xbb\x84\xe4\xb8\xad\xe7\x9a\x84\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateUI_OnUseButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateUI, nullptr, "OnUseButtonClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateUI_OnUseButtonClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateUI_OnUseButtonClick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOperateUI_OnUseButtonClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateUI_OnUseButtonClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateUI::execOnUseButtonClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUseButtonClick();
	P_NATIVE_END;
}
// End Class UOperateUI Function OnUseButtonClick

// Begin Class UOperateUI
void UOperateUI::StaticRegisterNativesUOperateUI()
{
	UClass* Class = UOperateUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnThrowButtonClick", &UOperateUI::execOnThrowButtonClick },
		{ "OnUseButtonClick", &UOperateUI::execOnUseButtonClick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperateUI);
UClass* Z_Construct_UClass_UOperateUI_NoRegister()
{
	return UOperateUI::StaticClass();
}
struct Z_Construct_UClass_UOperateUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BackPackSystem/OperateUI.h" },
		{ "ModuleRelativePath", "Public/BackPackSystem/OperateUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BackPackSytstem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackSystem/OperateUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BackPackSytstem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackSystem/OperateUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "BackPackSytstem" },
		{ "ModuleRelativePath", "Public/BackPackSystem/OperateUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UseButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowButton;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperateUI_OnThrowButtonClick, "OnThrowButtonClick" }, // 2633222808
		{ &Z_Construct_UFunction_UOperateUI_OnUseButtonClick, "OnUseButtonClick" }, // 1663114853
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperateUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOperateUI_Statics::NewProp_UseButton = { "UseButton", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperateUI, UseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseButton_MetaData), NewProp_UseButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOperateUI_Statics::NewProp_ThrowButton = { "ThrowButton", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperateUI, ThrowButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowButton_MetaData), NewProp_ThrowButton_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOperateUI_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperateUI, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperateUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperateUI_Statics::NewProp_UseButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperateUI_Statics::NewProp_ThrowButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperateUI_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperateUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOperateUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BackPack_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperateUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperateUI_Statics::ClassParams = {
	&UOperateUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOperateUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOperateUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperateUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperateUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOperateUI()
{
	if (!Z_Registration_Info_UClass_UOperateUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperateUI.OuterSingleton, Z_Construct_UClass_UOperateUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOperateUI.OuterSingleton;
}
template<> BACKPACK_CPP_API UClass* StaticClass<UOperateUI>()
{
	return UOperateUI::StaticClass();
}
UOperateUI::UOperateUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOperateUI);
UOperateUI::~UOperateUI() {}
// End Class UOperateUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOperateUI, UOperateUI::StaticClass, TEXT("UOperateUI"), &Z_Registration_Info_UClass_UOperateUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperateUI), 2853137129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_1160856178(TEXT("/Script/BackPack_Cpp"),
	Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_OperateUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

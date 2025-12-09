// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackPack_Cpp/Public/BackPackSystem/BackPackUI.h"
#include "BackPack_Cpp/Public/Gameplay/MyBaseGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackPackUI() {}

// Begin Cross Module References
BACKPACK_CPP_API UClass* Z_Construct_UClass_UBackPackSlot_NoRegister();
BACKPACK_CPP_API UClass* Z_Construct_UClass_UBackPackUI();
BACKPACK_CPP_API UClass* Z_Construct_UClass_UBackPackUI_NoRegister();
BACKPACK_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FItem_Struct();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BackPack_Cpp();
// End Cross Module References

// Begin Class UBackPackUI Function OnCloseButtonClick
struct Z_Construct_UFunction_UBackPackUI_OnCloseButtonClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BackPackSystem" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackPackUI_OnCloseButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackPackUI, nullptr, "OnCloseButtonClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackPackUI_OnCloseButtonClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackPackUI_OnCloseButtonClick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBackPackUI_OnCloseButtonClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackPackUI_OnCloseButtonClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackPackUI::execOnCloseButtonClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCloseButtonClick();
	P_NATIVE_END;
}
// End Class UBackPackUI Function OnCloseButtonClick

// Begin Class UBackPackUI Function RefreshBackPack
struct Z_Construct_UFunction_UBackPackUI_RefreshBackPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BackPackSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe4\xba\x8e\xe6\x9e\x84\xe9\x80\xa0\xe6\x97\xb6\xe4\xbb\x8eGameInstance\xe4\xb8\xad\xe5\xa4\x8d\xe5\x88\xb6\xe6\x95\xb0\xe7\xbb\x84\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe6\x9e\x84\xe9\x80\xa0\xe6\x97\xb6\xe4\xbb\x8eGameInstance\xe4\xb8\xad\xe5\xa4\x8d\xe5\x88\xb6\xe6\x95\xb0\xe7\xbb\x84\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackPackUI_RefreshBackPack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackPackUI, nullptr, "RefreshBackPack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackPackUI_RefreshBackPack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackPackUI_RefreshBackPack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBackPackUI_RefreshBackPack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackPackUI_RefreshBackPack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackPackUI::execRefreshBackPack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshBackPack();
	P_NATIVE_END;
}
// End Class UBackPackUI Function RefreshBackPack

// Begin Class UBackPackUI
void UBackPackUI::StaticRegisterNativesUBackPackUI()
{
	UClass* Class = UBackPackUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCloseButtonClick", &UBackPackUI::execOnCloseButtonClick },
		{ "RefreshBackPack", &UBackPackUI::execRefreshBackPack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackPackUI);
UClass* Z_Construct_UClass_UBackPackUI_NoRegister()
{
	return UBackPackUI::StaticClass();
}
struct Z_Construct_UClass_UBackPackUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BackPackSystem/BackPackUI.h" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackPackPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BackPackSytstem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BackPackSytstem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xbb\x9f\xe4\xb8\x80\xe7\xbd\x91\xe6\xa0\xbc\xe9\x9d\xa2\xe6\x9d\xbf\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x9f\xe4\xb8\x80\xe7\xbd\x91\xe6\xa0\xbc\xe9\x9d\xa2\xe6\x9d\xbf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackPackSlot_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x83\x8c\xe5\x8c\x85\xe5\x85\x81\xe8\xae\xb8\xe5\xad\x98\xe5\x9c\xa8\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe5\x85\x81\xe8\xae\xb8\xe5\xad\x98\xe5\x9c\xa8\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackPackTransfer_MetaData[] = {
		{ "Category", "BackPackSytstem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8f\x90\xe5\x89\x8d\xe5\xa3\xb0\xe6\x98\x8eSlotUI\n" },
#endif
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8f\x90\xe5\x89\x8d\xe5\xa3\xb0\xe6\x98\x8eSlotUI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackPackPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackPackSlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackPackTransfer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BackPackTransfer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackPackUI_OnCloseButtonClick, "OnCloseButtonClick" }, // 3148302610
		{ &Z_Construct_UFunction_UBackPackUI_RefreshBackPack, "RefreshBackPack" }, // 371854144
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackPackUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackUI_Statics::NewProp_BackPackPanel = { "BackPackPanel", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackUI, BackPackPanel), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackPackPanel_MetaData), NewProp_BackPackPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackUI_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackUI, CloseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseButton_MetaData), NewProp_CloseButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackUI_Statics::NewProp_BackPackSlot = { "BackPackSlot", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackUI, BackPackSlot), Z_Construct_UClass_UBackPackSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackPackSlot_MetaData), NewProp_BackPackSlot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackPackUI_Statics::NewProp_BackPackTransfer_Inner = { "BackPackTransfer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItem_Struct, METADATA_PARAMS(0, nullptr) }; // 2474143910
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBackPackUI_Statics::NewProp_BackPackTransfer = { "BackPackTransfer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackUI, BackPackTransfer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackPackTransfer_MetaData), NewProp_BackPackTransfer_MetaData) }; // 2474143910
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackPackUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackUI_Statics::NewProp_BackPackPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackUI_Statics::NewProp_CloseButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackUI_Statics::NewProp_BackPackSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackUI_Statics::NewProp_BackPackTransfer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackUI_Statics::NewProp_BackPackTransfer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackPackUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BackPack_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackPackUI_Statics::ClassParams = {
	&UBackPackUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBackPackUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackPackUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackPackUI()
{
	if (!Z_Registration_Info_UClass_UBackPackUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackPackUI.OuterSingleton, Z_Construct_UClass_UBackPackUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackPackUI.OuterSingleton;
}
template<> BACKPACK_CPP_API UClass* StaticClass<UBackPackUI>()
{
	return UBackPackUI::StaticClass();
}
UBackPackUI::UBackPackUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackPackUI);
UBackPackUI::~UBackPackUI() {}
// End Class UBackPackUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackPackUI, UBackPackUI::StaticClass, TEXT("UBackPackUI"), &Z_Registration_Info_UClass_UBackPackUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackPackUI), 2387164954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_1600860680(TEXT("/Script/BackPack_Cpp"),
	Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

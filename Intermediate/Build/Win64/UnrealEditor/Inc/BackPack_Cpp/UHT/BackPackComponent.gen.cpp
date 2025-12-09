// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackPack_Cpp/Public/BackPackSystem/BackPackComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackPackComponent() {}

// Begin Cross Module References
BACKPACK_CPP_API UClass* Z_Construct_UClass_UBackPackComponent();
BACKPACK_CPP_API UClass* Z_Construct_UClass_UBackPackComponent_NoRegister();
BACKPACK_CPP_API UClass* Z_Construct_UClass_UBackPackUI_NoRegister();
BACKPACK_CPP_API UClass* Z_Construct_UClass_UOperateUI_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BackPack_Cpp();
// End Cross Module References

// Begin Class UBackPackComponent Function BackPackUIController
struct Z_Construct_UFunction_UBackPackComponent_BackPackUIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BackPackSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa0\x87\xe8\xaf\x86""BackPackUI\xe6\x98\xaf\xe5\x90\xa6\xe5\xad\x98\xe5\x9c\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\x87\xe8\xaf\x86""BackPackUI\xe6\x98\xaf\xe5\x90\xa6\xe5\xad\x98\xe5\x9c\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackPackComponent_BackPackUIController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackPackComponent, nullptr, "BackPackUIController", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackPackComponent_BackPackUIController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackPackComponent_BackPackUIController_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBackPackComponent_BackPackUIController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackPackComponent_BackPackUIController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackPackComponent::execBackPackUIController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BackPackUIController();
	P_NATIVE_END;
}
// End Class UBackPackComponent Function BackPackUIController

// Begin Class UBackPackComponent Function SwapItem
struct Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics
{
	struct BackPackComponent_eventSwapItem_Parms
	{
		int32 DragIndex;
		int32 DropIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BackPackSystem" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DragIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DropIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::NewProp_DragIndex = { "DragIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackPackComponent_eventSwapItem_Parms, DragIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::NewProp_DropIndex = { "DropIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackPackComponent_eventSwapItem_Parms, DropIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::NewProp_DragIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::NewProp_DropIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackPackComponent, nullptr, "SwapItem", nullptr, nullptr, Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::BackPackComponent_eventSwapItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::BackPackComponent_eventSwapItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackPackComponent_SwapItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackPackComponent_SwapItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackPackComponent::execSwapItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DragIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_DropIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwapItem(Z_Param_DragIndex,Z_Param_DropIndex);
	P_NATIVE_END;
}
// End Class UBackPackComponent Function SwapItem

// Begin Class UBackPackComponent
void UBackPackComponent::StaticRegisterNativesUBackPackComponent()
{
	UClass* Class = UBackPackComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BackPackUIController", &UBackPackComponent::execBackPackUIController },
		{ "SwapItem", &UBackPackComponent::execSwapItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackPackComponent);
UClass* Z_Construct_UClass_UBackPackComponent_NoRegister()
{
	return UBackPackComponent::StaticClass();
}
struct Z_Construct_UClass_UBackPackComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BackPackSystem/BackPackComponent.h" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperateUI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***\xe7\xae\xa1\xe7\x90\x86\xe6\x8e\xa7\xe4\xbb\xb6***\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***\xe7\xae\xa1\xe7\x90\x86\xe6\x8e\xa7\xe4\xbb\xb6***" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackPackUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OperateUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackPackUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackPackComponent_BackPackUIController, "BackPackUIController" }, // 2807959004
		{ &Z_Construct_UFunction_UBackPackComponent_SwapItem, "SwapItem" }, // 3465020613
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackPackComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackComponent_Statics::NewProp_OperateUI = { "OperateUI", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackComponent, OperateUI), Z_Construct_UClass_UOperateUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperateUI_MetaData), NewProp_OperateUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackComponent_Statics::NewProp_BackPackUI = { "BackPackUI", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackComponent, BackPackUI), Z_Construct_UClass_UBackPackUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackPackUI_MetaData), NewProp_BackPackUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackPackComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackComponent_Statics::NewProp_OperateUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackComponent_Statics::NewProp_BackPackUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackPackComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BackPack_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackPackComponent_Statics::ClassParams = {
	&UBackPackComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBackPackComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackPackComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackPackComponent()
{
	if (!Z_Registration_Info_UClass_UBackPackComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackPackComponent.OuterSingleton, Z_Construct_UClass_UBackPackComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackPackComponent.OuterSingleton;
}
template<> BACKPACK_CPP_API UClass* StaticClass<UBackPackComponent>()
{
	return UBackPackComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackPackComponent);
UBackPackComponent::~UBackPackComponent() {}
// End Class UBackPackComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackPackComponent, UBackPackComponent::StaticClass, TEXT("UBackPackComponent"), &Z_Registration_Info_UClass_UBackPackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackPackComponent), 3793116738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_3599124519(TEXT("/Script/BackPack_Cpp"),
	Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

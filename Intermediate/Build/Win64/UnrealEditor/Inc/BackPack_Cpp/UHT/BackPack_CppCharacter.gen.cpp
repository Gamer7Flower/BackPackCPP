// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackPack_Cpp/BackPack_CppCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackPack_CppCharacter() {}

// Begin Cross Module References
BACKPACK_CPP_API UClass* Z_Construct_UClass_ABackPack_CppCharacter();
BACKPACK_CPP_API UClass* Z_Construct_UClass_ABackPack_CppCharacter_NoRegister();
BACKPACK_CPP_API UClass* Z_Construct_UClass_AItemBase_NoRegister();
BACKPACK_CPP_API UClass* Z_Construct_UClass_UBackPackComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_BackPack_Cpp();
// End Cross Module References

// Begin Class ABackPack_CppCharacter Function BackPackUIController
struct Z_Construct_UFunction_ABackPack_CppCharacter_BackPackUIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BackPackSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABackPack_CppCharacter_BackPackUIController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABackPack_CppCharacter, nullptr, "BackPackUIController", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABackPack_CppCharacter_BackPackUIController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABackPack_CppCharacter_BackPackUIController_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABackPack_CppCharacter_BackPackUIController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABackPack_CppCharacter_BackPackUIController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABackPack_CppCharacter::execBackPackUIController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BackPackUIController();
	P_NATIVE_END;
}
// End Class ABackPack_CppCharacter Function BackPackUIController

// Begin Class ABackPack_CppCharacter
void ABackPack_CppCharacter::StaticRegisterNativesABackPack_CppCharacter()
{
	UClass* Class = ABackPack_CppCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BackPackUIController", &ABackPack_CppCharacter::execBackPackUIController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABackPack_CppCharacter);
UClass* Z_Construct_UClass_ABackPack_CppCharacter_NoRegister()
{
	return ABackPack_CppCharacter::StaticClass();
}
struct Z_Construct_UClass_ABackPack_CppCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BackPack_CppCharacter.h" },
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenBPAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackPackComponent_MetaData[] = {
		{ "Category", "BackPackSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/***************BackPcakSystem*******************/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "************BackPcakSystem******************" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusedItem_MetaData[] = {
		{ "ModuleRelativePath", "BackPack_CppCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenBPAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackPackComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABackPack_CppCharacter_BackPackUIController, "BackPackUIController" }, // 2834323190
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABackPack_CppCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABackPack_CppCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABackPack_CppCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABackPack_CppCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABackPack_CppCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABackPack_CppCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABackPack_CppCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_OpenBPAction = { "OpenBPAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABackPack_CppCharacter, OpenBPAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenBPAction_MetaData), NewProp_OpenBPAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABackPack_CppCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_BackPackComponent = { "BackPackComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABackPack_CppCharacter, BackPackComponent), Z_Construct_UClass_UBackPackComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackPackComponent_MetaData), NewProp_BackPackComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_FocusedItem = { "FocusedItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABackPack_CppCharacter, FocusedItem), Z_Construct_UClass_AItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusedItem_MetaData), NewProp_FocusedItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABackPack_CppCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_OpenBPAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_BackPackComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackPack_CppCharacter_Statics::NewProp_FocusedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABackPack_CppCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABackPack_CppCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BackPack_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABackPack_CppCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABackPack_CppCharacter_Statics::ClassParams = {
	&ABackPack_CppCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABackPack_CppCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABackPack_CppCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABackPack_CppCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABackPack_CppCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABackPack_CppCharacter()
{
	if (!Z_Registration_Info_UClass_ABackPack_CppCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABackPack_CppCharacter.OuterSingleton, Z_Construct_UClass_ABackPack_CppCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABackPack_CppCharacter.OuterSingleton;
}
template<> BACKPACK_CPP_API UClass* StaticClass<ABackPack_CppCharacter>()
{
	return ABackPack_CppCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABackPack_CppCharacter);
ABackPack_CppCharacter::~ABackPack_CppCharacter() {}
// End Class ABackPack_CppCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABackPack_CppCharacter, ABackPack_CppCharacter::StaticClass, TEXT("ABackPack_CppCharacter"), &Z_Registration_Info_UClass_ABackPack_CppCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABackPack_CppCharacter), 1587574891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_3345100493(TEXT("/Script/BackPack_Cpp"),
	Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

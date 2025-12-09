// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackPack_Cpp/Public/BackPackSystem/BackPackSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackPackSlot() {}

// Begin Cross Module References
BACKPACK_CPP_API UClass* Z_Construct_UClass_ABackPack_CppCharacter_NoRegister();
BACKPACK_CPP_API UClass* Z_Construct_UClass_UBackPackSlot();
BACKPACK_CPP_API UClass* Z_Construct_UClass_UBackPackSlot_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BackPack_Cpp();
// End Cross Module References

// Begin Class UBackPackSlot
void UBackPackSlot::StaticRegisterNativesUBackPackSlot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackPackSlot);
UClass* Z_Construct_UClass_UBackPackSlot_NoRegister()
{
	return UBackPackSlot::StaticClass();
}
struct Z_Construct_UClass_UBackPackSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BackPackSystem/BackPackSlot.h" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BackPackSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Number_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BackPackSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "BackPackSystem" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[] = {
		{ "Category", "BackPackSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\x96\xe9\x83\xa8\xe4\xbc\xa0\xe5\x85\xa5\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\x9c\x89\xe4\xb8\x9c\xe8\xa5\xbf\xe5\xb0\xb1\xe6\x98\xaf\xe5\xaf\xb9\xe5\xba\x94\xe7\x89\xa9\xe5\x93\x81\xe5\x9c\xa8\xe6\x95\xb0\xe7\xbb\x84\xe4\xb8\xad\xe7\x9a\x84\xe7\xb4\xa2\xe5\xbc\x95\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\xb2\xa1\xe6\x9c\x89\xe5\xb0\xb1\xe6\x98\xaf-1\n" },
#endif
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackSlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe9\x83\xa8\xe4\xbc\xa0\xe5\x85\xa5\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\x9c\x89\xe4\xb8\x9c\xe8\xa5\xbf\xe5\xb0\xb1\xe6\x98\xaf\xe5\xaf\xb9\xe5\xba\x94\xe7\x89\xa9\xe5\x93\x81\xe5\x9c\xa8\xe6\x95\xb0\xe7\xbb\x84\xe4\xb8\xad\xe7\x9a\x84\xe7\xb4\xa2\xe5\xbc\x95\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\xb2\xa1\xe6\x9c\x89\xe5\xb0\xb1\xe6\x98\xaf-1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "BackPackSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\x96\xe9\x83\xa8\xe4\xbc\xa0\xe5\x85\xa5\xef\xbc\x8c\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackSlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe9\x83\xa8\xe4\xbc\xa0\xe5\x85\xa5\xef\xbc\x8c\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackSystem/BackPackSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Number_Text;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackPackSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackSlot_Statics::NewProp_SlotImage = { "SlotImage", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackSlot, SlotImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotImage_MetaData), NewProp_SlotImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Number_Text = { "Number_Text", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackSlot, Number_Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Number_Text_MetaData), NewProp_Number_Text_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackSlot, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackSlot, Number), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Number_MetaData), NewProp_Number_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackSlot, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackSlot, Player), Z_Construct_UClass_ABackPack_CppCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackPackSlot, Payload), Z_Construct_UClass_UBackPackSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackPackSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackSlot_Statics::NewProp_SlotImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Number_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Number,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackSlot_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackPackSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BackPack_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackPackSlot_Statics::ClassParams = {
	&UBackPackSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackPackSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackPackSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackPackSlot()
{
	if (!Z_Registration_Info_UClass_UBackPackSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackPackSlot.OuterSingleton, Z_Construct_UClass_UBackPackSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackPackSlot.OuterSingleton;
}
template<> BACKPACK_CPP_API UClass* StaticClass<UBackPackSlot>()
{
	return UBackPackSlot::StaticClass();
}
UBackPackSlot::UBackPackSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackPackSlot);
UBackPackSlot::~UBackPackSlot() {}
// End Class UBackPackSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackPackSlot, UBackPackSlot::StaticClass, TEXT("UBackPackSlot"), &Z_Registration_Info_UClass_UBackPackSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackPackSlot), 3586628690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackSlot_h_704469503(TEXT("/Script/BackPack_Cpp"),
	Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_Public_BackPackSystem_BackPackSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

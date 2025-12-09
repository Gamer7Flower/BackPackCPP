// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackPack_Cpp/BackPack_CppGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackPack_CppGameMode() {}

// Begin Cross Module References
BACKPACK_CPP_API UClass* Z_Construct_UClass_ABackPack_CppGameMode();
BACKPACK_CPP_API UClass* Z_Construct_UClass_ABackPack_CppGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BackPack_Cpp();
// End Cross Module References

// Begin Class ABackPack_CppGameMode
void ABackPack_CppGameMode::StaticRegisterNativesABackPack_CppGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABackPack_CppGameMode);
UClass* Z_Construct_UClass_ABackPack_CppGameMode_NoRegister()
{
	return ABackPack_CppGameMode::StaticClass();
}
struct Z_Construct_UClass_ABackPack_CppGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BackPack_CppGameMode.h" },
		{ "ModuleRelativePath", "BackPack_CppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABackPack_CppGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABackPack_CppGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BackPack_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABackPack_CppGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABackPack_CppGameMode_Statics::ClassParams = {
	&ABackPack_CppGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABackPack_CppGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABackPack_CppGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABackPack_CppGameMode()
{
	if (!Z_Registration_Info_UClass_ABackPack_CppGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABackPack_CppGameMode.OuterSingleton, Z_Construct_UClass_ABackPack_CppGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABackPack_CppGameMode.OuterSingleton;
}
template<> BACKPACK_CPP_API UClass* StaticClass<ABackPack_CppGameMode>()
{
	return ABackPack_CppGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABackPack_CppGameMode);
ABackPack_CppGameMode::~ABackPack_CppGameMode() {}
// End Class ABackPack_CppGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABackPack_CppGameMode, ABackPack_CppGameMode::StaticClass, TEXT("ABackPack_CppGameMode"), &Z_Registration_Info_UClass_ABackPack_CppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABackPack_CppGameMode), 4232640713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppGameMode_h_2877235746(TEXT("/Script/BackPack_Cpp"),
	Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_4_Projects_BackPack_Cpp_Source_BackPack_Cpp_BackPack_CppGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

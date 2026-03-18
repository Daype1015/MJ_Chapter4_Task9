// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/GameState/NBGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBGameStateBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Class ANBGameStateBase
void ANBGameStateBase::StaticRegisterNativesANBGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBGameStateBase);
UClass* Z_Construct_UClass_ANBGameStateBase_NoRegister()
{
	return ANBGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ANBGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/NBGameStateBase.h" },
		{ "ModuleRelativePath", "GameState/NBGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBGameStateBase_Statics::ClassParams = {
	&ANBGameStateBase::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBGameStateBase()
{
	if (!Z_Registration_Info_UClass_ANBGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBGameStateBase.OuterSingleton, Z_Construct_UClass_ANBGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBGameStateBase.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<ANBGameStateBase>()
{
	return ANBGameStateBase::StaticClass();
}
ANBGameStateBase::ANBGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBGameStateBase);
ANBGameStateBase::~ANBGameStateBase() {}
// End Class ANBGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_GameState_NBGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBGameStateBase, ANBGameStateBase::StaticClass, TEXT("ANBGameStateBase"), &Z_Registration_Info_UClass_ANBGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBGameStateBase), 2244796594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_GameState_NBGameStateBase_h_610472074(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_GameState_NBGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_GameState_NBGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

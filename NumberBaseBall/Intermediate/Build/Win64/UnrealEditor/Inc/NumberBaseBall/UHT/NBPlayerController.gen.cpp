// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/Player/NBPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPlayerController();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Class ANBPlayerController
void ANBPlayerController::StaticRegisterNativesANBPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBPlayerController);
UClass* Z_Construct_UClass_ANBPlayerController_NoRegister()
{
	return ANBPlayerController::StaticClass();
}
struct Z_Construct_UClass_ANBPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/NBPlayerController.h" },
		{ "ModuleRelativePath", "Player/NBPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBPlayerController_Statics::ClassParams = {
	&ANBPlayerController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBPlayerController()
{
	if (!Z_Registration_Info_UClass_ANBPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBPlayerController.OuterSingleton, Z_Construct_UClass_ANBPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBPlayerController.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<ANBPlayerController>()
{
	return ANBPlayerController::StaticClass();
}
ANBPlayerController::ANBPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBPlayerController);
ANBPlayerController::~ANBPlayerController() {}
// End Class ANBPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBPlayerController, ANBPlayerController::StaticClass, TEXT("ANBPlayerController"), &Z_Registration_Info_UClass_ANBPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBPlayerController), 3613730460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_413286249(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_UnrealProjects_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

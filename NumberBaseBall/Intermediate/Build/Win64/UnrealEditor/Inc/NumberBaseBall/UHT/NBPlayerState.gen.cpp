// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/Player/NBPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPlayerState();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Class ANBPlayerState
void ANBPlayerState::StaticRegisterNativesANBPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBPlayerState);
UClass* Z_Construct_UClass_ANBPlayerState_NoRegister()
{
	return ANBPlayerState::StaticClass();
}
struct Z_Construct_UClass_ANBPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/NBPlayerState.h" },
		{ "ModuleRelativePath", "Player/NBPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNumber_MetaData[] = {
		{ "ModuleRelativePath", "Player/NBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameCount_MetaData[] = {
		{ "ModuleRelativePath", "Player/NBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGameCount_MetaData[] = {
		{ "ModuleRelativePath", "Player/NBPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGameCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGameCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANBPlayerState_Statics::NewProp_PlayerNumber = { "PlayerNumber", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBPlayerState, PlayerNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNumber_MetaData), NewProp_PlayerNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANBPlayerState_Statics::NewProp_CurrentGameCount = { "CurrentGameCount", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBPlayerState, CurrentGameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGameCount_MetaData), NewProp_CurrentGameCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANBPlayerState_Statics::NewProp_MaxGameCount = { "MaxGameCount", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBPlayerState, MaxGameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGameCount_MetaData), NewProp_MaxGameCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBPlayerState_Statics::NewProp_PlayerNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBPlayerState_Statics::NewProp_CurrentGameCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBPlayerState_Statics::NewProp_MaxGameCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBPlayerState_Statics::ClassParams = {
	&ANBPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBPlayerState()
{
	if (!Z_Registration_Info_UClass_ANBPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBPlayerState.OuterSingleton, Z_Construct_UClass_ANBPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBPlayerState.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<ANBPlayerState>()
{
	return ANBPlayerState::StaticClass();
}
void ANBPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PlayerNumber(TEXT("PlayerNumber"));
	static const FName Name_CurrentGameCount(TEXT("CurrentGameCount"));
	static const FName Name_MaxGameCount(TEXT("MaxGameCount"));
	const bool bIsValid = true
		&& Name_PlayerNumber == ClassReps[(int32)ENetFields_Private::PlayerNumber].Property->GetFName()
		&& Name_CurrentGameCount == ClassReps[(int32)ENetFields_Private::CurrentGameCount].Property->GetFName()
		&& Name_MaxGameCount == ClassReps[(int32)ENetFields_Private::MaxGameCount].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANBPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBPlayerState);
ANBPlayerState::~ANBPlayerState() {}
// End Class ANBPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBPlayerState, ANBPlayerState::StaticClass, TEXT("ANBPlayerState"), &Z_Registration_Info_UClass_ANBPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBPlayerState), 1028423267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerState_h_3987168115(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

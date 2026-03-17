// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/UI/NBGameWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBGameWidget() {}

// Begin Cross Module References
NUMBERBASEBALL_API UClass* Z_Construct_UClass_UNBGameWidget();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_UNBGameWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Class UNBGameWidget
void UNBGameWidget::StaticRegisterNativesUNBGameWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNBGameWidget);
UClass* Z_Construct_UClass_UNBGameWidget_NoRegister()
{
	return UNBGameWidget::StaticClass();
}
struct Z_Construct_UClass_UNBGameWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/NBGameWidget.h" },
		{ "ModuleRelativePath", "UI/NBGameWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/NBGameWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_ChatInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNBGameWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNBGameWidget_Statics::NewProp_EditableTextBox_ChatInput = { "EditableTextBox_ChatInput", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNBGameWidget, EditableTextBox_ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_ChatInput_MetaData), NewProp_EditableTextBox_ChatInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNBGameWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNBGameWidget_Statics::NewProp_EditableTextBox_ChatInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBGameWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNBGameWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBGameWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNBGameWidget_Statics::ClassParams = {
	&UNBGameWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNBGameWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNBGameWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNBGameWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNBGameWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNBGameWidget()
{
	if (!Z_Registration_Info_UClass_UNBGameWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNBGameWidget.OuterSingleton, Z_Construct_UClass_UNBGameWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNBGameWidget.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<UNBGameWidget>()
{
	return UNBGameWidget::StaticClass();
}
UNBGameWidget::UNBGameWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNBGameWidget);
UNBGameWidget::~UNBGameWidget() {}
// End Class UNBGameWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_UI_NBGameWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNBGameWidget, UNBGameWidget::StaticClass, TEXT("UNBGameWidget"), &Z_Registration_Info_UClass_UNBGameWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNBGameWidget), 2430868581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_UI_NBGameWidget_h_928020785(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_UI_NBGameWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_UI_NBGameWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

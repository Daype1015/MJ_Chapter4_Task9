// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/NBPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBERBASEBALL_NBPlayerController_generated_h
#error "NBPlayerController.generated.h already included, missing '#pragma once' in NBPlayerController.h"
#endif
#define NUMBERBASEBALL_NBPlayerController_generated_h

#define FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InputChatMessage); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InputChatMessage); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_18_CALLBACK_WRAPPERS
#define FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBPlayerController(); \
	friend struct Z_Construct_UClass_ANBPlayerController_Statics; \
public: \
	DECLARE_CLASS(ANBPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NumberBaseBall"), NO_API) \
	DECLARE_SERIALIZER(ANBPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBPlayerController(ANBPlayerController&&); \
	ANBPlayerController(const ANBPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBPlayerController) \
	NO_API virtual ~ANBPlayerController();


#define FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_15_PROLOG
#define FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_18_CALLBACK_WRAPPERS \
	FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBERBASEBALL_API UClass* StaticClass<class ANBPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_MJ_Chapter4_Task9_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

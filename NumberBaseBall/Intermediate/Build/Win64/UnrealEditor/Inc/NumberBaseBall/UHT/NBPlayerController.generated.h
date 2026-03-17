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

#define FID_UnrealProjects_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBPlayerController(); \
	friend struct Z_Construct_UClass_ANBPlayerController_Statics; \
public: \
	DECLARE_CLASS(ANBPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NumberBaseBall"), NO_API) \
	DECLARE_SERIALIZER(ANBPlayerController)


#define FID_UnrealProjects_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANBPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBPlayerController(ANBPlayerController&&); \
	ANBPlayerController(const ANBPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANBPlayerController) \
	NO_API virtual ~ANBPlayerController();


#define FID_UnrealProjects_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_13_PROLOG
#define FID_UnrealProjects_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBERBASEBALL_API UClass* StaticClass<class ANBPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_NumberBaseBall_Source_NumberBaseBall_Player_NBPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BASE2_SplitscreenController_generated_h
#error "SplitscreenController.generated.h already included, missing '#pragma once' in SplitscreenController.h"
#endif
#define BASE2_SplitscreenController_generated_h

#define Base2_Source_Base2_SplitscreenController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnToggleSplitScreen) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Context); \
		P_GET_UBOOL(Z_Param_bStatus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ASplitscreenController::OnToggleSplitScreen(Z_Param_Context,Z_Param_bStatus); \
		P_NATIVE_END; \
	}


#define Base2_Source_Base2_SplitscreenController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnToggleSplitScreen) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Context); \
		P_GET_UBOOL(Z_Param_bStatus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ASplitscreenController::OnToggleSplitScreen(Z_Param_Context,Z_Param_bStatus); \
		P_NATIVE_END; \
	}


#define Base2_Source_Base2_SplitscreenController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASplitscreenController(); \
	friend struct Z_Construct_UClass_ASplitscreenController_Statics; \
public: \
	DECLARE_CLASS(ASplitscreenController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Base2"), NO_API) \
	DECLARE_SERIALIZER(ASplitscreenController)


#define Base2_Source_Base2_SplitscreenController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASplitscreenController(); \
	friend struct Z_Construct_UClass_ASplitscreenController_Statics; \
public: \
	DECLARE_CLASS(ASplitscreenController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Base2"), NO_API) \
	DECLARE_SERIALIZER(ASplitscreenController)


#define Base2_Source_Base2_SplitscreenController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASplitscreenController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASplitscreenController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASplitscreenController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASplitscreenController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASplitscreenController(ASplitscreenController&&); \
	NO_API ASplitscreenController(const ASplitscreenController&); \
public:


#define Base2_Source_Base2_SplitscreenController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASplitscreenController(ASplitscreenController&&); \
	NO_API ASplitscreenController(const ASplitscreenController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASplitscreenController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASplitscreenController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASplitscreenController)


#define Base2_Source_Base2_SplitscreenController_h_13_PRIVATE_PROPERTY_OFFSET
#define Base2_Source_Base2_SplitscreenController_h_10_PROLOG
#define Base2_Source_Base2_SplitscreenController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Base2_Source_Base2_SplitscreenController_h_13_PRIVATE_PROPERTY_OFFSET \
	Base2_Source_Base2_SplitscreenController_h_13_RPC_WRAPPERS \
	Base2_Source_Base2_SplitscreenController_h_13_INCLASS \
	Base2_Source_Base2_SplitscreenController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Base2_Source_Base2_SplitscreenController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Base2_Source_Base2_SplitscreenController_h_13_PRIVATE_PROPERTY_OFFSET \
	Base2_Source_Base2_SplitscreenController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Base2_Source_Base2_SplitscreenController_h_13_INCLASS_NO_PURE_DECLS \
	Base2_Source_Base2_SplitscreenController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Base2_Source_Base2_SplitscreenController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

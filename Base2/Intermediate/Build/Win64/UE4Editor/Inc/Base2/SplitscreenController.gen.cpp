// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base2/SplitscreenController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplitscreenController() {}
// Cross Module References
	BASE2_API UClass* Z_Construct_UClass_ASplitscreenController_NoRegister();
	BASE2_API UClass* Z_Construct_UClass_ASplitscreenController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Base2();
	BASE2_API UFunction* Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASplitscreenController::StaticRegisterNativesASplitscreenController()
	{
		UClass* Class = ASplitscreenController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnToggleSplitScreen", &ASplitscreenController::execOnToggleSplitScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics
	{
		struct SplitscreenController_eventOnToggleSplitScreen_Parms
		{
			AActor* Context;
			bool bStatus;
		};
		static void NewProp_bStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStatus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::NewProp_bStatus_SetBit(void* Obj)
	{
		((SplitscreenController_eventOnToggleSplitScreen_Parms*)Obj)->bStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::NewProp_bStatus = { UE4CodeGen_Private::EPropertyClass::Bool, "bStatus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplitscreenController_eventOnToggleSplitScreen_Parms), &Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::NewProp_bStatus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::NewProp_Context = { UE4CodeGen_Private::EPropertyClass::Object, "Context", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplitscreenController_eventOnToggleSplitScreen_Parms, Context), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::NewProp_bStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "splitscreen" },
		{ "ModuleRelativePath", "SplitscreenController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplitscreenController, "OnToggleSplitScreen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SplitscreenController_eventOnToggleSplitScreen_Parms), Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASplitscreenController_NoRegister()
	{
		return ASplitscreenController::StaticClass();
	}
	struct Z_Construct_UClass_ASplitscreenController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplitscreenController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Base2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASplitscreenController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplitscreenController_OnToggleSplitScreen, "OnToggleSplitScreen" }, // 1780050796
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplitscreenController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplitscreenController.h" },
		{ "ModuleRelativePath", "SplitscreenController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplitscreenController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplitscreenController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASplitscreenController_Statics::ClassParams = {
		&ASplitscreenController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASplitscreenController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASplitscreenController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplitscreenController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASplitscreenController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASplitscreenController, 767841596);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASplitscreenController(Z_Construct_UClass_ASplitscreenController, &ASplitscreenController::StaticClass, TEXT("/Script/Base2"), TEXT("ASplitscreenController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplitscreenController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

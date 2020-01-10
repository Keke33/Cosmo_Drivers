// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base2/MySplitscreenController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySplitscreenController() {}
// Cross Module References
	BASE2_API UClass* Z_Construct_UClass_AMySplitscreenController_NoRegister();
	BASE2_API UClass* Z_Construct_UClass_AMySplitscreenController();
	BASE2_API UClass* Z_Construct_UClass_ASplitscreenController();
	UPackage* Z_Construct_UPackage__Script_Base2();
// End Cross Module References
	void AMySplitscreenController::StaticRegisterNativesAMySplitscreenController()
	{
	}
	UClass* Z_Construct_UClass_AMySplitscreenController_NoRegister()
	{
		return AMySplitscreenController::StaticClass();
	}
	struct Z_Construct_UClass_AMySplitscreenController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMySplitscreenController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASplitscreenController,
		(UObject* (*)())Z_Construct_UPackage__Script_Base2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMySplitscreenController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MySplitscreenController.h" },
		{ "ModuleRelativePath", "MySplitscreenController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMySplitscreenController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMySplitscreenController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMySplitscreenController_Statics::ClassParams = {
		&AMySplitscreenController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMySplitscreenController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMySplitscreenController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMySplitscreenController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMySplitscreenController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMySplitscreenController, 4066919231);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMySplitscreenController(Z_Construct_UClass_AMySplitscreenController, &AMySplitscreenController::StaticClass, TEXT("/Script/Base2"), TEXT("AMySplitscreenController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMySplitscreenController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

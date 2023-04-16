// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FallingSurvive/FallingSurviveGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFallingSurviveGameMode() {}
// Cross Module References
	FALLINGSURVIVE_API UClass* Z_Construct_UClass_AFallingSurviveGameMode_NoRegister();
	FALLINGSURVIVE_API UClass* Z_Construct_UClass_AFallingSurviveGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FallingSurvive();
// End Cross Module References
	void AFallingSurviveGameMode::StaticRegisterNativesAFallingSurviveGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFallingSurviveGameMode_NoRegister()
	{
		return AFallingSurviveGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFallingSurviveGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFallingSurviveGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FallingSurvive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFallingSurviveGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FallingSurviveGameMode.h" },
		{ "ModuleRelativePath", "FallingSurviveGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFallingSurviveGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFallingSurviveGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFallingSurviveGameMode_Statics::ClassParams = {
		&AFallingSurviveGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFallingSurviveGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFallingSurviveGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFallingSurviveGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFallingSurviveGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFallingSurviveGameMode, 622400692);
	template<> FALLINGSURVIVE_API UClass* StaticClass<AFallingSurviveGameMode>()
	{
		return AFallingSurviveGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFallingSurviveGameMode(Z_Construct_UClass_AFallingSurviveGameMode, &AFallingSurviveGameMode::StaticClass, TEXT("/Script/FallingSurvive"), TEXT("AFallingSurviveGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFallingSurviveGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

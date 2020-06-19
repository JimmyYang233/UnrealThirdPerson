// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PUBG/HitBoxBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitBoxBase() {}
// Cross Module References
	PUBG_API UClass* Z_Construct_UClass_AHitBoxBase_NoRegister();
	PUBG_API UClass* Z_Construct_UClass_AHitBoxBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PUBG();
// End Cross Module References
	void AHitBoxBase::StaticRegisterNativesAHitBoxBase()
	{
	}
	UClass* Z_Construct_UClass_AHitBoxBase_NoRegister()
	{
		return AHitBoxBase::StaticClass();
	}
	struct Z_Construct_UClass_AHitBoxBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHitBoxBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitBoxBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HitBoxBase.h" },
		{ "ModuleRelativePath", "HitBoxBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHitBoxBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitBoxBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHitBoxBase_Statics::ClassParams = {
		&AHitBoxBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHitBoxBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHitBoxBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHitBoxBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHitBoxBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHitBoxBase, 3078901852);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHitBoxBase(Z_Construct_UClass_AHitBoxBase, &AHitBoxBase::StaticClass, TEXT("/Script/PUBG"), TEXT("AHitBoxBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHitBoxBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

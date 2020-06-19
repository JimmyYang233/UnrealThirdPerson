// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PUBG/TPSCursorHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSCursorHUD() {}
// Cross Module References
	PUBG_API UClass* Z_Construct_UClass_ATPSCursorHUD_NoRegister();
	PUBG_API UClass* Z_Construct_UClass_ATPSCursorHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PUBG();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void ATPSCursorHUD::StaticRegisterNativesATPSCursorHUD()
	{
	}
	UClass* Z_Construct_UClass_ATPSCursorHUD_NoRegister()
	{
		return ATPSCursorHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATPSCursorHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSCursorHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCursorHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TPSCursorHUD.h" },
		{ "ModuleRelativePath", "TPSCursorHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCursorHUD_Statics::NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "TPSCursorHUD" },
		{ "ModuleRelativePath", "TPSCursorHUD.h" },
		{ "ToolTip", "??????\xc4\xbb???????\xc6\xb4??\xee\xa1\xa3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCursorHUD_Statics::NewProp_CrosshairTexture = { UE4CodeGen_Private::EPropertyClass::Object, "CrosshairTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ATPSCursorHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCursorHUD_Statics::NewProp_CrosshairTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSCursorHUD_Statics::NewProp_CrosshairTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSCursorHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCursorHUD_Statics::NewProp_CrosshairTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSCursorHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSCursorHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSCursorHUD_Statics::ClassParams = {
		&ATPSCursorHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		nullptr, 0,
		Z_Construct_UClass_ATPSCursorHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATPSCursorHUD_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATPSCursorHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATPSCursorHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSCursorHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSCursorHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSCursorHUD, 1270476575);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSCursorHUD(Z_Construct_UClass_ATPSCursorHUD, &ATPSCursorHUD::StaticClass, TEXT("/Script/PUBG"), TEXT("ATPSCursorHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSCursorHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

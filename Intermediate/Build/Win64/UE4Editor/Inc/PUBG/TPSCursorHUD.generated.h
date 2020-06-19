// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUBG_TPSCursorHUD_generated_h
#error "TPSCursorHUD.generated.h already included, missing '#pragma once' in TPSCursorHUD.h"
#endif
#define PUBG_TPSCursorHUD_generated_h

#define PUBG_Source_PUBG_TPSCursorHUD_h_15_RPC_WRAPPERS
#define PUBG_Source_PUBG_TPSCursorHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PUBG_Source_PUBG_TPSCursorHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSCursorHUD(); \
	friend struct Z_Construct_UClass_ATPSCursorHUD_Statics; \
public: \
	DECLARE_CLASS(ATPSCursorHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PUBG"), NO_API) \
	DECLARE_SERIALIZER(ATPSCursorHUD)


#define PUBG_Source_PUBG_TPSCursorHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATPSCursorHUD(); \
	friend struct Z_Construct_UClass_ATPSCursorHUD_Statics; \
public: \
	DECLARE_CLASS(ATPSCursorHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PUBG"), NO_API) \
	DECLARE_SERIALIZER(ATPSCursorHUD)


#define PUBG_Source_PUBG_TPSCursorHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSCursorHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSCursorHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCursorHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCursorHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCursorHUD(ATPSCursorHUD&&); \
	NO_API ATPSCursorHUD(const ATPSCursorHUD&); \
public:


#define PUBG_Source_PUBG_TPSCursorHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSCursorHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCursorHUD(ATPSCursorHUD&&); \
	NO_API ATPSCursorHUD(const ATPSCursorHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCursorHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCursorHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSCursorHUD)


#define PUBG_Source_PUBG_TPSCursorHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrosshairTexture() { return STRUCT_OFFSET(ATPSCursorHUD, CrosshairTexture); }


#define PUBG_Source_PUBG_TPSCursorHUD_h_12_PROLOG
#define PUBG_Source_PUBG_TPSCursorHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PUBG_Source_PUBG_TPSCursorHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	PUBG_Source_PUBG_TPSCursorHUD_h_15_RPC_WRAPPERS \
	PUBG_Source_PUBG_TPSCursorHUD_h_15_INCLASS \
	PUBG_Source_PUBG_TPSCursorHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PUBG_Source_PUBG_TPSCursorHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PUBG_Source_PUBG_TPSCursorHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	PUBG_Source_PUBG_TPSCursorHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PUBG_Source_PUBG_TPSCursorHUD_h_15_INCLASS_NO_PURE_DECLS \
	PUBG_Source_PUBG_TPSCursorHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PUBG_Source_PUBG_TPSCursorHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

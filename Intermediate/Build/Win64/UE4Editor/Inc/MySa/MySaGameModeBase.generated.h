// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSA_MySaGameModeBase_generated_h
#error "MySaGameModeBase.generated.h already included, missing '#pragma once' in MySaGameModeBase.h"
#endif
#define MYSA_MySaGameModeBase_generated_h

#define MySA_Source_MySa_MySaGameModeBase_h_15_RPC_WRAPPERS
#define MySA_Source_MySa_MySaGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MySA_Source_MySa_MySaGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMySaGameModeBase(); \
	friend MYSA_API class UClass* Z_Construct_UClass_AMySaGameModeBase(); \
public: \
	DECLARE_CLASS(AMySaGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MySa"), NO_API) \
	DECLARE_SERIALIZER(AMySaGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MySA_Source_MySa_MySaGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMySaGameModeBase(); \
	friend MYSA_API class UClass* Z_Construct_UClass_AMySaGameModeBase(); \
public: \
	DECLARE_CLASS(AMySaGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MySa"), NO_API) \
	DECLARE_SERIALIZER(AMySaGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MySA_Source_MySa_MySaGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMySaGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMySaGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMySaGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMySaGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMySaGameModeBase(AMySaGameModeBase&&); \
	NO_API AMySaGameModeBase(const AMySaGameModeBase&); \
public:


#define MySA_Source_MySa_MySaGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMySaGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMySaGameModeBase(AMySaGameModeBase&&); \
	NO_API AMySaGameModeBase(const AMySaGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMySaGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMySaGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMySaGameModeBase)


#define MySA_Source_MySa_MySaGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define MySA_Source_MySa_MySaGameModeBase_h_12_PROLOG
#define MySA_Source_MySa_MySaGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySA_Source_MySa_MySaGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	MySA_Source_MySa_MySaGameModeBase_h_15_RPC_WRAPPERS \
	MySA_Source_MySa_MySaGameModeBase_h_15_INCLASS \
	MySA_Source_MySa_MySaGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MySA_Source_MySa_MySaGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySA_Source_MySa_MySaGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	MySA_Source_MySa_MySaGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MySA_Source_MySa_MySaGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	MySA_Source_MySa_MySaGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MySA_Source_MySa_MySaGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

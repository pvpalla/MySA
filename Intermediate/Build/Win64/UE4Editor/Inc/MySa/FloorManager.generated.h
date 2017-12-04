// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSA_FloorManager_generated_h
#error "FloorManager.generated.h already included, missing '#pragma once' in FloorManager.h"
#endif
#define MYSA_FloorManager_generated_h

#define MySA_Source_MySa_FloorManager_h_12_RPC_WRAPPERS
#define MySA_Source_MySa_FloorManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MySA_Source_MySa_FloorManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloorManager(); \
	friend MYSA_API class UClass* Z_Construct_UClass_AFloorManager(); \
public: \
	DECLARE_CLASS(AFloorManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MySa"), NO_API) \
	DECLARE_SERIALIZER(AFloorManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MySA_Source_MySa_FloorManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFloorManager(); \
	friend MYSA_API class UClass* Z_Construct_UClass_AFloorManager(); \
public: \
	DECLARE_CLASS(AFloorManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MySa"), NO_API) \
	DECLARE_SERIALIZER(AFloorManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MySA_Source_MySa_FloorManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloorManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloorManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorManager(AFloorManager&&); \
	NO_API AFloorManager(const AFloorManager&); \
public:


#define MySA_Source_MySa_FloorManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorManager(AFloorManager&&); \
	NO_API AFloorManager(const AFloorManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloorManager)


#define MySA_Source_MySa_FloorManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneComp() { return STRUCT_OFFSET(AFloorManager, SceneComp); } \
	FORCEINLINE static uint32 __PPO__Floor1() { return STRUCT_OFFSET(AFloorManager, Floor1); } \
	FORCEINLINE static uint32 __PPO__Floor2() { return STRUCT_OFFSET(AFloorManager, Floor2); } \
	FORCEINLINE static uint32 __PPO__Floor3() { return STRUCT_OFFSET(AFloorManager, Floor3); } \
	FORCEINLINE static uint32 __PPO__Floor4() { return STRUCT_OFFSET(AFloorManager, Floor4); }


#define MySA_Source_MySa_FloorManager_h_9_PROLOG
#define MySA_Source_MySa_FloorManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySA_Source_MySa_FloorManager_h_12_PRIVATE_PROPERTY_OFFSET \
	MySA_Source_MySa_FloorManager_h_12_RPC_WRAPPERS \
	MySA_Source_MySa_FloorManager_h_12_INCLASS \
	MySA_Source_MySa_FloorManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MySA_Source_MySa_FloorManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySA_Source_MySa_FloorManager_h_12_PRIVATE_PROPERTY_OFFSET \
	MySA_Source_MySa_FloorManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MySA_Source_MySa_FloorManager_h_12_INCLASS_NO_PURE_DECLS \
	MySA_Source_MySa_FloorManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MySA_Source_MySa_FloorManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

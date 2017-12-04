// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FTransform;
#ifdef MYSA_FloorPiece_generated_h
#error "FloorPiece.generated.h already included, missing '#pragma once' in FloorPiece.h"
#endif
#define MYSA_FloorPiece_generated_h

#define MySA_Source_MySa_FloorPiece_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextTileTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetNextTileTransform(); \
		P_NATIVE_END; \
	}


#define MySA_Source_MySa_FloorPiece_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextTileTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetNextTileTransform(); \
		P_NATIVE_END; \
	}


#define MySA_Source_MySa_FloorPiece_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloorPiece(); \
	friend MYSA_API class UClass* Z_Construct_UClass_AFloorPiece(); \
public: \
	DECLARE_CLASS(AFloorPiece, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MySa"), NO_API) \
	DECLARE_SERIALIZER(AFloorPiece) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MySA_Source_MySa_FloorPiece_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFloorPiece(); \
	friend MYSA_API class UClass* Z_Construct_UClass_AFloorPiece(); \
public: \
	DECLARE_CLASS(AFloorPiece, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MySa"), NO_API) \
	DECLARE_SERIALIZER(AFloorPiece) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MySA_Source_MySa_FloorPiece_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloorPiece(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloorPiece) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorPiece); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorPiece); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorPiece(AFloorPiece&&); \
	NO_API AFloorPiece(const AFloorPiece&); \
public:


#define MySA_Source_MySa_FloorPiece_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorPiece(AFloorPiece&&); \
	NO_API AFloorPiece(const AFloorPiece&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorPiece); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorPiece); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloorPiece)


#define MySA_Source_MySa_FloorPiece_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyTileMap() { return STRUCT_OFFSET(AFloorPiece, MyTileMap); } \
	FORCEINLINE static uint32 __PPO__ArrowComp() { return STRUCT_OFFSET(AFloorPiece, ArrowComp); } \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFloorPiece, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__NextPiece() { return STRUCT_OFFSET(AFloorPiece, NextPiece); } \
	FORCEINLINE static uint32 __PPO__Obstacle() { return STRUCT_OFFSET(AFloorPiece, Obstacle); } \
	FORCEINLINE static uint32 __PPO__Collectible() { return STRUCT_OFFSET(AFloorPiece, Collectible); }


#define MySA_Source_MySa_FloorPiece_h_9_PROLOG
#define MySA_Source_MySa_FloorPiece_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySA_Source_MySa_FloorPiece_h_12_PRIVATE_PROPERTY_OFFSET \
	MySA_Source_MySa_FloorPiece_h_12_RPC_WRAPPERS \
	MySA_Source_MySa_FloorPiece_h_12_INCLASS \
	MySA_Source_MySa_FloorPiece_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MySA_Source_MySa_FloorPiece_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySA_Source_MySa_FloorPiece_h_12_PRIVATE_PROPERTY_OFFSET \
	MySA_Source_MySa_FloorPiece_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MySA_Source_MySa_FloorPiece_h_12_INCLASS_NO_PURE_DECLS \
	MySA_Source_MySa_FloorPiece_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MySA_Source_MySa_FloorPiece_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

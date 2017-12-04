// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSA_MyChar_generated_h
#error "MyChar.generated.h already included, missing '#pragma once' in MyChar.h"
#endif
#define MYSA_MyChar_generated_h

#define MySA_Source_MySa_MyChar_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToGround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToGround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Dash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Jump(); \
		P_NATIVE_END; \
	}


#define MySA_Source_MySa_MyChar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToGround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToGround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Dash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Jump(); \
		P_NATIVE_END; \
	}


#define MySA_Source_MySa_MyChar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyChar(); \
	friend MYSA_API class UClass* Z_Construct_UClass_AMyChar(); \
public: \
	DECLARE_CLASS(AMyChar, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MySa"), NO_API) \
	DECLARE_SERIALIZER(AMyChar) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MySA_Source_MySa_MyChar_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyChar(); \
	friend MYSA_API class UClass* Z_Construct_UClass_AMyChar(); \
public: \
	DECLARE_CLASS(AMyChar, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MySa"), NO_API) \
	DECLARE_SERIALIZER(AMyChar) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MySA_Source_MySa_MyChar_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyChar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyChar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyChar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyChar(AMyChar&&); \
	NO_API AMyChar(const AMyChar&); \
public:


#define MySA_Source_MySa_MyChar_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyChar(AMyChar&&); \
	NO_API AMyChar(const AMyChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyChar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyChar)


#define MySA_Source_MySa_MyChar_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyChar, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AMyChar, Camera); } \
	FORCEINLINE static uint32 __PPO__Iddle() { return STRUCT_OFFSET(AMyChar, Iddle); } \
	FORCEINLINE static uint32 __PPO__Running() { return STRUCT_OFFSET(AMyChar, Running); } \
	FORCEINLINE static uint32 __PPO__Jumping() { return STRUCT_OFFSET(AMyChar, Jumping); }


#define MySA_Source_MySa_MyChar_h_12_PROLOG
#define MySA_Source_MySa_MyChar_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySA_Source_MySa_MyChar_h_15_PRIVATE_PROPERTY_OFFSET \
	MySA_Source_MySa_MyChar_h_15_RPC_WRAPPERS \
	MySA_Source_MySa_MyChar_h_15_INCLASS \
	MySA_Source_MySa_MyChar_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MySA_Source_MySa_MyChar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySA_Source_MySa_MyChar_h_15_PRIVATE_PROPERTY_OFFSET \
	MySA_Source_MySa_MyChar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MySA_Source_MySa_MyChar_h_15_INCLASS_NO_PURE_DECLS \
	MySA_Source_MySa_MyChar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MySA_Source_MySa_MyChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Enemy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	MYSA_API UFunction* Z_Construct_UFunction_AEnemy_OnOverlapBegin();
	MYSA_API UClass* Z_Construct_UClass_AEnemy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYSA_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MySa();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
// End Cross Module References
	void AEnemy::StaticRegisterNativesAEnemy()
	{
		UClass* Class = AEnemy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnOverlapBegin", (Native)&AEnemy::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AEnemy_OnOverlapBegin()
	{
		struct Enemy_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer = Z_Construct_UClass_AEnemy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00440401, 65535, sizeof(Enemy_eventOnOverlapBegin_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, Enemy_eventOnOverlapBegin_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, Enemy_eventOnOverlapBegin_Parms);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, Enemy_eventOnOverlapBegin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, Enemy_eventOnOverlapBegin_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, Enemy_eventOnOverlapBegin_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, Enemy_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Enemy_eventOnOverlapBegin_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, Enemy_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Enemy.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MySa();
			OuterClass = AEnemy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AEnemy_OnOverlapBegin());

				UProperty* NewProp_CollisionComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, AEnemy), 0x0040000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_Iddle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Iddle"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Iddle, AEnemy), 0x0040000000080009, Z_Construct_UClass_UPaperSpriteComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnemy_OnOverlapBegin(), "OnOverlapBegin"); // 4014478335
				static TCppClassTypeInfo<TCppClassTypeTraits<AEnemy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Enemy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Enemy.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("Enemy"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("Enemy.h"));
				MetaData->SetValue(NewProp_Iddle, TEXT("Category"), TEXT("Enemy"));
				MetaData->SetValue(NewProp_Iddle, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Iddle, TEXT("ModuleRelativePath"), TEXT("Enemy.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy, 4201433488);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy(Z_Construct_UClass_AEnemy, &AEnemy::StaticClass, TEXT("/Script/MySa"), TEXT("AEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

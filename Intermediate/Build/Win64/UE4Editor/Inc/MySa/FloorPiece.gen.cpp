// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FloorPiece.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPiece() {}
// Cross Module References
	MYSA_API UFunction* Z_Construct_UFunction_AFloorPiece_GetNextTileTransform();
	MYSA_API UClass* Z_Construct_UClass_AFloorPiece();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MYSA_API UFunction* Z_Construct_UFunction_AFloorPiece_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYSA_API UClass* Z_Construct_UClass_AFloorPiece_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MySa();
	MYSA_API UClass* Z_Construct_UClass_ACollectible_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYSA_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister();
// End Cross Module References
	void AFloorPiece::StaticRegisterNativesAFloorPiece()
	{
		UClass* Class = AFloorPiece::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetNextTileTransform", (Native)&AFloorPiece::execGetNextTileTransform },
			{ "OnOverlapBegin", (Native)&AFloorPiece::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AFloorPiece_GetNextTileTransform()
	{
		struct FloorPiece_eventGetNextTileTransform_Parms
		{
			FTransform ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AFloorPiece();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetNextTileTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(FloorPiece_eventGetNextTileTransform_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, FloorPiece_eventGetNextTileTransform_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FTransform());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("NextTile"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FloorPiece.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFloorPiece_OnOverlapBegin()
	{
		struct FloorPiece_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer = Z_Construct_UClass_AFloorPiece();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00440401, 65535, sizeof(FloorPiece_eventOnOverlapBegin_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, FloorPiece_eventOnOverlapBegin_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, FloorPiece_eventOnOverlapBegin_Parms);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, FloorPiece_eventOnOverlapBegin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, FloorPiece_eventOnOverlapBegin_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, FloorPiece_eventOnOverlapBegin_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, FloorPiece_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, FloorPiece_eventOnOverlapBegin_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, FloorPiece_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FloorPiece.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFloorPiece_NoRegister()
	{
		return AFloorPiece::StaticClass();
	}
	UClass* Z_Construct_UClass_AFloorPiece()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MySa();
			OuterClass = AFloorPiece::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AFloorPiece_GetNextTileTransform());
				OuterClass->LinkChild(Z_Construct_UFunction_AFloorPiece_OnOverlapBegin());

				UProperty* NewProp_Collectible = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Collectible"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Collectible, AFloorPiece), 0x0044000000000001, Z_Construct_UClass_ACollectible_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_Obstacle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Obstacle"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Obstacle, AFloorPiece), 0x0044000000000001, Z_Construct_UClass_AEnemy_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_NextPiece = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NextPiece"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NextPiece, AFloorPiece), 0x0040000000000001, Z_Construct_UClass_AFloorPiece_NoRegister());
				UProperty* NewProp_CollisionComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, AFloorPiece), 0x0040000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_ArrowComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ArrowComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ArrowComp, AFloorPiece), 0x0040000000080009, Z_Construct_UClass_UArrowComponent_NoRegister());
				UProperty* NewProp_MyTileMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyTileMap"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyTileMap, AFloorPiece), 0x0040000000080009, Z_Construct_UClass_UPaperTileMapComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFloorPiece_GetNextTileTransform(), "GetNextTileTransform"); // 314351444
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFloorPiece_OnOverlapBegin(), "OnOverlapBegin"); // 3281245420
				static TCppClassTypeInfo<TCppClassTypeTraits<AFloorPiece> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FloorPiece.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FloorPiece.h"));
				MetaData->SetValue(NewProp_Collectible, TEXT("Category"), TEXT("NotObstacle"));
				MetaData->SetValue(NewProp_Collectible, TEXT("ModuleRelativePath"), TEXT("FloorPiece.h"));
				MetaData->SetValue(NewProp_Obstacle, TEXT("Category"), TEXT("Obstacle"));
				MetaData->SetValue(NewProp_Obstacle, TEXT("ModuleRelativePath"), TEXT("FloorPiece.h"));
				MetaData->SetValue(NewProp_NextPiece, TEXT("Category"), TEXT("NextTile"));
				MetaData->SetValue(NewProp_NextPiece, TEXT("ModuleRelativePath"), TEXT("FloorPiece.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("NextTile"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("FloorPiece.h"));
				MetaData->SetValue(NewProp_ArrowComp, TEXT("Category"), TEXT("NextTile"));
				MetaData->SetValue(NewProp_ArrowComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ArrowComp, TEXT("ModuleRelativePath"), TEXT("FloorPiece.h"));
				MetaData->SetValue(NewProp_MyTileMap, TEXT("Category"), TEXT("Mapa"));
				MetaData->SetValue(NewProp_MyTileMap, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyTileMap, TEXT("ModuleRelativePath"), TEXT("FloorPiece.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloorPiece, 445836263);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloorPiece(Z_Construct_UClass_AFloorPiece, &AFloorPiece::StaticClass, TEXT("/Script/MySa"), TEXT("AFloorPiece"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorPiece);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

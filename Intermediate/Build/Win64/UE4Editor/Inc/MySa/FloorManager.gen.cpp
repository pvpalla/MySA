// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FloorManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorManager() {}
// Cross Module References
	MYSA_API UClass* Z_Construct_UClass_AFloorManager_NoRegister();
	MYSA_API UClass* Z_Construct_UClass_AFloorManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MySa();
	MYSA_API UClass* Z_Construct_UClass_AFloorPiece_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AFloorManager::StaticRegisterNativesAFloorManager()
	{
	}
	UClass* Z_Construct_UClass_AFloorManager_NoRegister()
	{
		return AFloorManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AFloorManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MySa();
			OuterClass = AFloorManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_Floor4 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Floor4"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Floor4, AFloorManager), 0x0044000000000001, Z_Construct_UClass_AFloorPiece_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_Floor3 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Floor3"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Floor3, AFloorManager), 0x0044000000000001, Z_Construct_UClass_AFloorPiece_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_Floor2 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Floor2"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Floor2, AFloorManager), 0x0044000000000001, Z_Construct_UClass_AFloorPiece_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_Floor1 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Floor1"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Floor1, AFloorManager), 0x0044000000000001, Z_Construct_UClass_AFloorPiece_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_SceneComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SceneComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SceneComp, AFloorManager), 0x0040000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AFloorManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FloorManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FloorManager.h"));
				MetaData->SetValue(NewProp_Floor4, TEXT("Category"), TEXT("Floor"));
				MetaData->SetValue(NewProp_Floor4, TEXT("ModuleRelativePath"), TEXT("FloorManager.h"));
				MetaData->SetValue(NewProp_Floor3, TEXT("Category"), TEXT("Floor"));
				MetaData->SetValue(NewProp_Floor3, TEXT("ModuleRelativePath"), TEXT("FloorManager.h"));
				MetaData->SetValue(NewProp_Floor2, TEXT("Category"), TEXT("Floor"));
				MetaData->SetValue(NewProp_Floor2, TEXT("ModuleRelativePath"), TEXT("FloorManager.h"));
				MetaData->SetValue(NewProp_Floor1, TEXT("Category"), TEXT("Floor"));
				MetaData->SetValue(NewProp_Floor1, TEXT("ModuleRelativePath"), TEXT("FloorManager.h"));
				MetaData->SetValue(NewProp_SceneComp, TEXT("Category"), TEXT("SceneComponent"));
				MetaData->SetValue(NewProp_SceneComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SceneComp, TEXT("ModuleRelativePath"), TEXT("FloorManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloorManager, 4293133477);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloorManager(Z_Construct_UClass_AFloorManager, &AFloorManager::StaticClass, TEXT("/Script/MySa"), TEXT("AFloorManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

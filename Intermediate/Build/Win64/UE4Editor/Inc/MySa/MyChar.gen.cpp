// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyChar.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyChar() {}
// Cross Module References
	MYSA_API UFunction* Z_Construct_UFunction_AMyChar_Dash();
	MYSA_API UClass* Z_Construct_UClass_AMyChar();
	MYSA_API UFunction* Z_Construct_UFunction_AMyChar_GetPoints();
	MYSA_API UFunction* Z_Construct_UFunction_AMyChar_IsEnd();
	MYSA_API UFunction* Z_Construct_UFunction_AMyChar_Jump();
	MYSA_API UFunction* Z_Construct_UFunction_AMyChar_ToGround();
	MYSA_API UClass* Z_Construct_UClass_AMyChar_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_MySa();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AMyChar::StaticRegisterNativesAMyChar()
	{
		UClass* Class = AMyChar::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Dash", (Native)&AMyChar::execDash },
			{ "GetPoints", (Native)&AMyChar::execGetPoints },
			{ "IsEnd", (Native)&AMyChar::execIsEnd },
			{ "Jump", (Native)&AMyChar::execJump },
			{ "ToGround", (Native)&AMyChar::execToGround },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AMyChar_Dash()
	{
		UObject* Outer = Z_Construct_UClass_AMyChar();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Dash"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Mobility"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyChar_GetPoints()
	{
		struct MyChar_eventGetPoints_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AMyChar();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MyChar_eventGetPoints_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, MyChar_eventGetPoints_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Points"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyChar_IsEnd()
	{
		struct MyChar_eventIsEnd_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AMyChar();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MyChar_eventIsEnd_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MyChar_eventIsEnd_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MyChar_eventIsEnd_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MyChar_eventIsEnd_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Points"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyChar_Jump()
	{
		UObject* Outer = Z_Construct_UClass_AMyChar();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Jump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Mobility"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyChar_ToGround()
	{
		UObject* Outer = Z_Construct_UClass_AMyChar();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ToGround"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Mobility"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyChar_NoRegister()
	{
		return AMyChar::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyChar()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APaperCharacter();
			Z_Construct_UPackage__Script_MySa();
			OuterClass = AMyChar::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyChar_Dash());
				OuterClass->LinkChild(Z_Construct_UFunction_AMyChar_GetPoints());
				OuterClass->LinkChild(Z_Construct_UFunction_AMyChar_IsEnd());
				OuterClass->LinkChild(Z_Construct_UFunction_AMyChar_Jump());
				OuterClass->LinkChild(Z_Construct_UFunction_AMyChar_ToGround());

				UProperty* NewProp_Jumping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Jumping"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Jumping, AMyChar), 0x0040000000000001, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_Running = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Running"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Running, AMyChar), 0x0040000000000001, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_Iddle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Iddle"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Iddle, AMyChar), 0x0040000000000001, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, AMyChar), 0x0040000000080009, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AMyChar), 0x0040000000080009, Z_Construct_UClass_USpringArmComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(Mov, AMyChar);
				UProperty* NewProp_Mov = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mov"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Mov, AMyChar), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(Mov, AMyChar), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyChar_Dash(), "Dash"); // 2778527583
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyChar_GetPoints(), "GetPoints"); // 3073050118
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyChar_IsEnd(), "IsEnd"); // 153195106
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyChar_Jump(), "Jump"); // 2904604722
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyChar_ToGround(), "ToGround"); // 1942149515
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyChar> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyChar.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
				MetaData->SetValue(NewProp_Jumping, TEXT("Category"), TEXT("MyChar"));
				MetaData->SetValue(NewProp_Jumping, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
				MetaData->SetValue(NewProp_Running, TEXT("Category"), TEXT("MyChar"));
				MetaData->SetValue(NewProp_Running, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
				MetaData->SetValue(NewProp_Iddle, TEXT("Category"), TEXT("MyChar"));
				MetaData->SetValue(NewProp_Iddle, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("MyChar"));
				MetaData->SetValue(NewProp_Camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("MyChar"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
				MetaData->SetValue(NewProp_Mov, TEXT("Category"), TEXT("MovCamera"));
				MetaData->SetValue(NewProp_Mov, TEXT("ModuleRelativePath"), TEXT("MyChar.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyChar, 4106186532);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyChar(Z_Construct_UClass_AMyChar, &AMyChar::StaticClass, TEXT("/Script/MySa"), TEXT("AMyChar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyChar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

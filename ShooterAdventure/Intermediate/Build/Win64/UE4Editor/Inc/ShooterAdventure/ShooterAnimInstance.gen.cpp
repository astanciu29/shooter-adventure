// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterAdventure/ShooterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAnimInstance() {}
// Cross Module References
	SHOOTERADVENTURE_API UClass* Z_Construct_UClass_UShooterAnimInstance_NoRegister();
	SHOOTERADVENTURE_API UClass* Z_Construct_UClass_UShooterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ShooterAdventure();
	SHOOTERADVENTURE_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UShooterAnimInstance::execUpdateAnimationProperites)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperites(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UShooterAnimInstance::StaticRegisterNativesUShooterAnimInstance()
	{
		UClass* Class = UShooterAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperites", &UShooterAnimInstance::execUpdateAnimationProperites },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites_Statics
	{
		struct ShooterAnimInstance_eventUpdateAnimationProperites_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterAnimInstance_eventUpdateAnimationProperites_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterAnimInstance, nullptr, "UpdateAnimationProperites", nullptr, nullptr, sizeof(ShooterAnimInstance_eventUpdateAnimationProperites_Parms), Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShooterAnimInstance_NoRegister()
	{
		return UShooterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UShooterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShooterCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShooterCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterAdventure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShooterAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperites, "UpdateAnimationProperites" }, // 1603410771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ShooterAnimInstance.h" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/*Whether or not the character is moving*/" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
		{ "ToolTip", "Whether or not the character is moving" },
	};
#endif
	void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UShooterAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UShooterAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/* The speed of the character*/" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
		{ "ToolTip", "The speed of the character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter = { "ShooterCharacter", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterAnimInstance, ShooterCharacter), Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterAnimInstance_Statics::ClassParams = {
		&UShooterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterAnimInstance, 2802955124);
	template<> SHOOTERADVENTURE_API UClass* StaticClass<UShooterAnimInstance>()
	{
		return UShooterAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterAnimInstance(Z_Construct_UClass_UShooterAnimInstance, &UShooterAnimInstance::StaticClass, TEXT("/Script/ShooterAdventure"), TEXT("UShooterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

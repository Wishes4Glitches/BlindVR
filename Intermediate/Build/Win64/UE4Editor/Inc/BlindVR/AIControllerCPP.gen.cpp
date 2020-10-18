// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlindVR/AIControllerCPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIControllerCPP() {}
// Cross Module References
	BLINDVR_API UClass* Z_Construct_UClass_AAIControllerCPP_NoRegister();
	BLINDVR_API UClass* Z_Construct_UClass_AAIControllerCPP();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_BlindVR();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	BLINDVR_API UClass* Z_Construct_UClass_AWaypoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAIControllerCPP::execOnPawnDetected)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_DetectedPawns_);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDetected(Z_Param_Out_DetectedPawns_);
		P_NATIVE_END;
	}
	void AAIControllerCPP::StaticRegisterNativesAAIControllerCPP()
	{
		UClass* Class = AAIControllerCPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnDetected", &AAIControllerCPP::execOnPawnDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics
	{
		struct AIControllerCPP_eventOnPawnDetected_Parms
		{
			TArray<AActor*> DetectedPawns_;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedPawns__MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectedPawns_;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedPawns__Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::NewProp_DetectedPawns__MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::NewProp_DetectedPawns_ = { "DetectedPawns_", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIControllerCPP_eventOnPawnDetected_Parms, DetectedPawns_), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::NewProp_DetectedPawns__MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::NewProp_DetectedPawns__MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::NewProp_DetectedPawns__Inner = { "DetectedPawns_", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::NewProp_DetectedPawns_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::NewProp_DetectedPawns__Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIControllerCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIControllerCPP, nullptr, "OnPawnDetected", nullptr, nullptr, sizeof(AIControllerCPP_eventOnPawnDetected_Parms), Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIControllerCPP_NoRegister()
	{
		return AAIControllerCPP::StaticClass();
	}
	struct Z_Construct_UClass_AAIControllerCPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AILoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AILoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextWaypoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIControllerCPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_BlindVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIControllerCPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIControllerCPP_OnPawnDetected, "OnPawnDetected" }, // 1286007255
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerCPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIControllerCPP.h" },
		{ "ModuleRelativePath", "AIControllerCPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIControllerCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIControllerCPP, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_SightConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_SightConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AIFOV_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIControllerCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AIFOV = { "AIFOV", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIControllerCPP, AIFOV), METADATA_PARAMS(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AIFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AIFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AILoseSightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIControllerCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AILoseSightRadius = { "AILoseSightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIControllerCPP, AILoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AILoseSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AILoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AISightAge_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIControllerCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AISightAge = { "AISightAge", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIControllerCPP, AISightAge), METADATA_PARAMS(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AISightAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AISightAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AISightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIControllerCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AISightRadius = { "AISightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIControllerCPP, AISightRadius), METADATA_PARAMS(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AISightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AISightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_NextWaypoint_MetaData[] = {
		{ "Category", "AIControllerCPP" },
		{ "ModuleRelativePath", "AIControllerCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_NextWaypoint = { "NextWaypoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIControllerCPP, NextWaypoint), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_NextWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_NextWaypoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIControllerCPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_SightConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AIFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AILoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AISightAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_AISightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerCPP_Statics::NewProp_NextWaypoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIControllerCPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIControllerCPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIControllerCPP_Statics::ClassParams = {
		&AAIControllerCPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIControllerCPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerCPP_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIControllerCPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerCPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIControllerCPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIControllerCPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIControllerCPP, 2530332297);
	template<> BLINDVR_API UClass* StaticClass<AAIControllerCPP>()
	{
		return AAIControllerCPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIControllerCPP(Z_Construct_UClass_AAIControllerCPP, &AAIControllerCPP::StaticClass, TEXT("/Script/BlindVR"), TEXT("AAIControllerCPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIControllerCPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

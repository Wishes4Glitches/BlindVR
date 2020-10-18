// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlindVR/Waypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaypoint() {}
// Cross Module References
	BLINDVR_API UClass* Z_Construct_UClass_AWaypoint_NoRegister();
	BLINDVR_API UClass* Z_Construct_UClass_AWaypoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BlindVR();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWaypoint::execOnPlayerEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlapComponent_);
		P_GET_OBJECT(AActor,Z_Param_otherActor_);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent_);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex_);
		P_GET_UBOOL(Z_Param_bFromSweep_);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult_);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEnter(Z_Param_overlapComponent_,Z_Param_otherActor_,Z_Param_otherComponent_,Z_Param_otherBodyIndex_,Z_Param_bFromSweep_,Z_Param_Out_SweepResult_);
		P_NATIVE_END;
	}
	void AWaypoint::StaticRegisterNativesAWaypoint()
	{
		UClass* Class = AWaypoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerEnter", &AWaypoint::execOnPlayerEnter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics
	{
		struct Waypoint_eventOnPlayerEnter_Parms
		{
			UPrimitiveComponent* overlapComponent_;
			AActor* otherActor_;
			UPrimitiveComponent* otherComponent_;
			int32 otherBodyIndex_;
			bool bFromSweep_;
			FHitResult SweepResult_;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult__MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult_;
		static void NewProp_bFromSweep__SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep_;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComponent__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComponent_;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlapComponent__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlapComponent_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_SweepResult__MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_SweepResult_ = { "SweepResult_", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Waypoint_eventOnPlayerEnter_Parms, SweepResult_), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_SweepResult__MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_SweepResult__MetaData)) };
	void Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_bFromSweep__SetBit(void* Obj)
	{
		((Waypoint_eventOnPlayerEnter_Parms*)Obj)->bFromSweep_ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_bFromSweep_ = { "bFromSweep_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Waypoint_eventOnPlayerEnter_Parms), &Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_bFromSweep__SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_otherBodyIndex_ = { "otherBodyIndex_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Waypoint_eventOnPlayerEnter_Parms, otherBodyIndex_), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_otherComponent__MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_otherComponent_ = { "otherComponent_", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Waypoint_eventOnPlayerEnter_Parms, otherComponent_), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_otherComponent__MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_otherComponent__MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_otherActor_ = { "otherActor_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Waypoint_eventOnPlayerEnter_Parms, otherActor_), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_overlapComponent__MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_overlapComponent_ = { "overlapComponent_", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Waypoint_eventOnPlayerEnter_Parms, overlapComponent_), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_overlapComponent__MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_overlapComponent__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_SweepResult_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_bFromSweep_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_otherBodyIndex_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_otherComponent_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_otherActor_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::NewProp_overlapComponent_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaypoint, nullptr, "OnPlayerEnter", nullptr, nullptr, sizeof(Waypoint_eventOnPlayerEnter_Parms), Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaypoint_OnPlayerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWaypoint_OnPlayerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWaypoint_NoRegister()
	{
		return AWaypoint::StaticClass();
	}
	struct Z_Construct_UClass_AWaypoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaypoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BlindVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWaypoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaypoint_OnPlayerEnter, "OnPlayerEnter" }, // 840948698
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaypoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Waypoint.h" },
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaypoint_Statics::NewProp_NextWaypoint_MetaData[] = {
		{ "Category", "Waypoint" },
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaypoint_Statics::NewProp_NextWaypoint = { "NextWaypoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaypoint, NextWaypoint), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaypoint_Statics::NewProp_NextWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaypoint_Statics::NewProp_NextWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaypoint_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Waypoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaypoint_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaypoint, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaypoint_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaypoint_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaypoint_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Waypoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaypoint_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaypoint, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaypoint_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaypoint_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaypoint_Statics::NewProp_NextWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaypoint_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaypoint_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaypoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaypoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWaypoint_Statics::ClassParams = {
		&AWaypoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWaypoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaypoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaypoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaypoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaypoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWaypoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWaypoint, 2893434644);
	template<> BLINDVR_API UClass* StaticClass<AWaypoint>()
	{
		return AWaypoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWaypoint(Z_Construct_UClass_AWaypoint, &AWaypoint::StaticClass, TEXT("/Script/BlindVR"), TEXT("AWaypoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaypoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

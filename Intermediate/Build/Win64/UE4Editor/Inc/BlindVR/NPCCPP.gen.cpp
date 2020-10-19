// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlindVR/NPCCPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCCPP() {}
// Cross Module References
	BLINDVR_API UClass* Z_Construct_UClass_ANPCCPP_NoRegister();
	BLINDVR_API UClass* Z_Construct_UClass_ANPCCPP();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BlindVR();
	BLINDVR_API UClass* Z_Construct_UClass_AWaypoint_NoRegister();
// End Cross Module References
	void ANPCCPP::StaticRegisterNativesANPCCPP()
	{
	}
	UClass* Z_Construct_UClass_ANPCCPP_NoRegister()
	{
		return ANPCCPP::StaticClass();
	}
	struct Z_Construct_UClass_ANPCCPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextWaypoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCCPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BlindVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCPP_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPCCPP.h" },
		{ "ModuleRelativePath", "NPCCPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCPP_Statics::NewProp_NextWaypoint_MetaData[] = {
		{ "Category", "NPCCPP" },
		{ "ModuleRelativePath", "NPCCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCPP_Statics::NewProp_NextWaypoint = { "NextWaypoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCPP, NextWaypoint), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCCPP_Statics::NewProp_NextWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCPP_Statics::NewProp_NextWaypoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCCPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCPP_Statics::NewProp_NextWaypoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCCPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCCPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPCCPP_Statics::ClassParams = {
		&ANPCCPP::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANPCCPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCCPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCCPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPCCPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPCCPP, 3842132021);
	template<> BLINDVR_API UClass* StaticClass<ANPCCPP>()
	{
		return ANPCCPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPCCPP(Z_Construct_UClass_ANPCCPP, &ANPCCPP::StaticClass, TEXT("/Script/BlindVR"), TEXT("ANPCCPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCCPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

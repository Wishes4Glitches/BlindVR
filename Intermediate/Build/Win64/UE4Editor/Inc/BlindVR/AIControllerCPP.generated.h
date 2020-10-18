// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BLINDVR_AIControllerCPP_generated_h
#error "AIControllerCPP.generated.h already included, missing '#pragma once' in AIControllerCPP.h"
#endif
#define BLINDVR_AIControllerCPP_generated_h

#define BlindVR_Source_BlindVR_AIControllerCPP_h_15_SPARSE_DATA
#define BlindVR_Source_BlindVR_AIControllerCPP_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define BlindVR_Source_BlindVR_AIControllerCPP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define BlindVR_Source_BlindVR_AIControllerCPP_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIControllerCPP(); \
	friend struct Z_Construct_UClass_AAIControllerCPP_Statics; \
public: \
	DECLARE_CLASS(AAIControllerCPP, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlindVR"), NO_API) \
	DECLARE_SERIALIZER(AAIControllerCPP)


#define BlindVR_Source_BlindVR_AIControllerCPP_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAIControllerCPP(); \
	friend struct Z_Construct_UClass_AAIControllerCPP_Statics; \
public: \
	DECLARE_CLASS(AAIControllerCPP, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlindVR"), NO_API) \
	DECLARE_SERIALIZER(AAIControllerCPP)


#define BlindVR_Source_BlindVR_AIControllerCPP_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIControllerCPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIControllerCPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIControllerCPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIControllerCPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIControllerCPP(AAIControllerCPP&&); \
	NO_API AAIControllerCPP(const AAIControllerCPP&); \
public:


#define BlindVR_Source_BlindVR_AIControllerCPP_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIControllerCPP(AAIControllerCPP&&); \
	NO_API AAIControllerCPP(const AAIControllerCPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIControllerCPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIControllerCPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIControllerCPP)


#define BlindVR_Source_BlindVR_AIControllerCPP_h_15_PRIVATE_PROPERTY_OFFSET
#define BlindVR_Source_BlindVR_AIControllerCPP_h_12_PROLOG
#define BlindVR_Source_BlindVR_AIControllerCPP_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlindVR_Source_BlindVR_AIControllerCPP_h_15_PRIVATE_PROPERTY_OFFSET \
	BlindVR_Source_BlindVR_AIControllerCPP_h_15_SPARSE_DATA \
	BlindVR_Source_BlindVR_AIControllerCPP_h_15_RPC_WRAPPERS \
	BlindVR_Source_BlindVR_AIControllerCPP_h_15_INCLASS \
	BlindVR_Source_BlindVR_AIControllerCPP_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlindVR_Source_BlindVR_AIControllerCPP_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlindVR_Source_BlindVR_AIControllerCPP_h_15_PRIVATE_PROPERTY_OFFSET \
	BlindVR_Source_BlindVR_AIControllerCPP_h_15_SPARSE_DATA \
	BlindVR_Source_BlindVR_AIControllerCPP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BlindVR_Source_BlindVR_AIControllerCPP_h_15_INCLASS_NO_PURE_DECLS \
	BlindVR_Source_BlindVR_AIControllerCPP_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLINDVR_API UClass* StaticClass<class AAIControllerCPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlindVR_Source_BlindVR_AIControllerCPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BLINDVR_NPCCPP_generated_h
#error "NPCCPP.generated.h already included, missing '#pragma once' in NPCCPP.h"
#endif
#define BLINDVR_NPCCPP_generated_h

#define BlindVR_Source_BlindVR_NPCCPP_h_15_SPARSE_DATA
#define BlindVR_Source_BlindVR_NPCCPP_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap);


#define BlindVR_Source_BlindVR_NPCCPP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap);


#define BlindVR_Source_BlindVR_NPCCPP_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCCPP(); \
	friend struct Z_Construct_UClass_ANPCCPP_Statics; \
public: \
	DECLARE_CLASS(ANPCCPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlindVR"), NO_API) \
	DECLARE_SERIALIZER(ANPCCPP)


#define BlindVR_Source_BlindVR_NPCCPP_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANPCCPP(); \
	friend struct Z_Construct_UClass_ANPCCPP_Statics; \
public: \
	DECLARE_CLASS(ANPCCPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlindVR"), NO_API) \
	DECLARE_SERIALIZER(ANPCCPP)


#define BlindVR_Source_BlindVR_NPCCPP_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCCPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCCPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCCPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCCPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCCPP(ANPCCPP&&); \
	NO_API ANPCCPP(const ANPCCPP&); \
public:


#define BlindVR_Source_BlindVR_NPCCPP_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCCPP(ANPCCPP&&); \
	NO_API ANPCCPP(const ANPCCPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCCPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCCPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCCPP)


#define BlindVR_Source_BlindVR_NPCCPP_h_15_PRIVATE_PROPERTY_OFFSET
#define BlindVR_Source_BlindVR_NPCCPP_h_12_PROLOG
#define BlindVR_Source_BlindVR_NPCCPP_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlindVR_Source_BlindVR_NPCCPP_h_15_PRIVATE_PROPERTY_OFFSET \
	BlindVR_Source_BlindVR_NPCCPP_h_15_SPARSE_DATA \
	BlindVR_Source_BlindVR_NPCCPP_h_15_RPC_WRAPPERS \
	BlindVR_Source_BlindVR_NPCCPP_h_15_INCLASS \
	BlindVR_Source_BlindVR_NPCCPP_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlindVR_Source_BlindVR_NPCCPP_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlindVR_Source_BlindVR_NPCCPP_h_15_PRIVATE_PROPERTY_OFFSET \
	BlindVR_Source_BlindVR_NPCCPP_h_15_SPARSE_DATA \
	BlindVR_Source_BlindVR_NPCCPP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BlindVR_Source_BlindVR_NPCCPP_h_15_INCLASS_NO_PURE_DECLS \
	BlindVR_Source_BlindVR_NPCCPP_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLINDVR_API UClass* StaticClass<class ANPCCPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlindVR_Source_BlindVR_NPCCPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

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
#ifdef BLINDVR_Waypoint_generated_h
#error "Waypoint.generated.h already included, missing '#pragma once' in Waypoint.h"
#endif
#define BLINDVR_Waypoint_generated_h

#define BlindVR_Source_BlindVR_Waypoint_h_13_SPARSE_DATA
#define BlindVR_Source_BlindVR_Waypoint_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerEnter);


#define BlindVR_Source_BlindVR_Waypoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerEnter);


#define BlindVR_Source_BlindVR_Waypoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaypoint(); \
	friend struct Z_Construct_UClass_AWaypoint_Statics; \
public: \
	DECLARE_CLASS(AWaypoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlindVR"), NO_API) \
	DECLARE_SERIALIZER(AWaypoint)


#define BlindVR_Source_BlindVR_Waypoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWaypoint(); \
	friend struct Z_Construct_UClass_AWaypoint_Statics; \
public: \
	DECLARE_CLASS(AWaypoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlindVR"), NO_API) \
	DECLARE_SERIALIZER(AWaypoint)


#define BlindVR_Source_BlindVR_Waypoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaypoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaypoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypoint(AWaypoint&&); \
	NO_API AWaypoint(const AWaypoint&); \
public:


#define BlindVR_Source_BlindVR_Waypoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypoint(AWaypoint&&); \
	NO_API AWaypoint(const AWaypoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaypoint)


#define BlindVR_Source_BlindVR_Waypoint_h_13_PRIVATE_PROPERTY_OFFSET
#define BlindVR_Source_BlindVR_Waypoint_h_10_PROLOG
#define BlindVR_Source_BlindVR_Waypoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlindVR_Source_BlindVR_Waypoint_h_13_PRIVATE_PROPERTY_OFFSET \
	BlindVR_Source_BlindVR_Waypoint_h_13_SPARSE_DATA \
	BlindVR_Source_BlindVR_Waypoint_h_13_RPC_WRAPPERS \
	BlindVR_Source_BlindVR_Waypoint_h_13_INCLASS \
	BlindVR_Source_BlindVR_Waypoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlindVR_Source_BlindVR_Waypoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlindVR_Source_BlindVR_Waypoint_h_13_PRIVATE_PROPERTY_OFFSET \
	BlindVR_Source_BlindVR_Waypoint_h_13_SPARSE_DATA \
	BlindVR_Source_BlindVR_Waypoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BlindVR_Source_BlindVR_Waypoint_h_13_INCLASS_NO_PURE_DECLS \
	BlindVR_Source_BlindVR_Waypoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLINDVR_API UClass* StaticClass<class AWaypoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlindVR_Source_BlindVR_Waypoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

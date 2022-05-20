// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LABOR_LaborGameMode_generated_h
#error "LaborGameMode.generated.h already included, missing '#pragma once' in LaborGameMode.h"
#endif
#define LABOR_LaborGameMode_generated_h

#define Labor_Source_Labor_LaborGameMode_h_12_SPARSE_DATA
#define Labor_Source_Labor_LaborGameMode_h_12_RPC_WRAPPERS
#define Labor_Source_Labor_LaborGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Labor_Source_Labor_LaborGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaborGameMode(); \
	friend struct Z_Construct_UClass_ALaborGameMode_Statics; \
public: \
	DECLARE_CLASS(ALaborGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labor"), LABOR_API) \
	DECLARE_SERIALIZER(ALaborGameMode)


#define Labor_Source_Labor_LaborGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALaborGameMode(); \
	friend struct Z_Construct_UClass_ALaborGameMode_Statics; \
public: \
	DECLARE_CLASS(ALaborGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labor"), LABOR_API) \
	DECLARE_SERIALIZER(ALaborGameMode)


#define Labor_Source_Labor_LaborGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LABOR_API ALaborGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALaborGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LABOR_API, ALaborGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaborGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LABOR_API ALaborGameMode(ALaborGameMode&&); \
	LABOR_API ALaborGameMode(const ALaborGameMode&); \
public:


#define Labor_Source_Labor_LaborGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LABOR_API ALaborGameMode(ALaborGameMode&&); \
	LABOR_API ALaborGameMode(const ALaborGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LABOR_API, ALaborGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaborGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaborGameMode)


#define Labor_Source_Labor_LaborGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Labor_Source_Labor_LaborGameMode_h_9_PROLOG
#define Labor_Source_Labor_LaborGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labor_Source_Labor_LaborGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Labor_Source_Labor_LaborGameMode_h_12_SPARSE_DATA \
	Labor_Source_Labor_LaborGameMode_h_12_RPC_WRAPPERS \
	Labor_Source_Labor_LaborGameMode_h_12_INCLASS \
	Labor_Source_Labor_LaborGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Labor_Source_Labor_LaborGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labor_Source_Labor_LaborGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Labor_Source_Labor_LaborGameMode_h_12_SPARSE_DATA \
	Labor_Source_Labor_LaborGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Labor_Source_Labor_LaborGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Labor_Source_Labor_LaborGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABOR_API UClass* StaticClass<class ALaborGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Labor_Source_Labor_LaborGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

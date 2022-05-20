// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LABOR_BaseGameMode_generated_h
#error "BaseGameMode.generated.h already included, missing '#pragma once' in BaseGameMode.h"
#endif
#define LABOR_BaseGameMode_generated_h

#define Labor_Source_Labor_Blueprint_BaseGameMode_h_15_SPARSE_DATA
#define Labor_Source_Labor_Blueprint_BaseGameMode_h_15_RPC_WRAPPERS
#define Labor_Source_Labor_Blueprint_BaseGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Labor_Source_Labor_Blueprint_BaseGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGameMode(); \
	friend struct Z_Construct_UClass_ABaseGameMode_Statics; \
public: \
	DECLARE_CLASS(ABaseGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labor"), NO_API) \
	DECLARE_SERIALIZER(ABaseGameMode)


#define Labor_Source_Labor_Blueprint_BaseGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseGameMode(); \
	friend struct Z_Construct_UClass_ABaseGameMode_Statics; \
public: \
	DECLARE_CLASS(ABaseGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labor"), NO_API) \
	DECLARE_SERIALIZER(ABaseGameMode)


#define Labor_Source_Labor_Blueprint_BaseGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGameMode(ABaseGameMode&&); \
	NO_API ABaseGameMode(const ABaseGameMode&); \
public:


#define Labor_Source_Labor_Blueprint_BaseGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGameMode(ABaseGameMode&&); \
	NO_API ABaseGameMode(const ABaseGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGameMode)


#define Labor_Source_Labor_Blueprint_BaseGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define Labor_Source_Labor_Blueprint_BaseGameMode_h_12_PROLOG
#define Labor_Source_Labor_Blueprint_BaseGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labor_Source_Labor_Blueprint_BaseGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Labor_Source_Labor_Blueprint_BaseGameMode_h_15_SPARSE_DATA \
	Labor_Source_Labor_Blueprint_BaseGameMode_h_15_RPC_WRAPPERS \
	Labor_Source_Labor_Blueprint_BaseGameMode_h_15_INCLASS \
	Labor_Source_Labor_Blueprint_BaseGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Labor_Source_Labor_Blueprint_BaseGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labor_Source_Labor_Blueprint_BaseGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Labor_Source_Labor_Blueprint_BaseGameMode_h_15_SPARSE_DATA \
	Labor_Source_Labor_Blueprint_BaseGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Labor_Source_Labor_Blueprint_BaseGameMode_h_15_INCLASS_NO_PURE_DECLS \
	Labor_Source_Labor_Blueprint_BaseGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABOR_API UClass* StaticClass<class ABaseGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Labor_Source_Labor_Blueprint_BaseGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

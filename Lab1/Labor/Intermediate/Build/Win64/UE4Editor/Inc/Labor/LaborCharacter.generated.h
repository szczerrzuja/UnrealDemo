// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LABOR_LaborCharacter_generated_h
#error "LaborCharacter.generated.h already included, missing '#pragma once' in LaborCharacter.h"
#endif
#define LABOR_LaborCharacter_generated_h

#define Labor_Source_Labor_LaborCharacter_h_12_SPARSE_DATA
#define Labor_Source_Labor_LaborCharacter_h_12_RPC_WRAPPERS
#define Labor_Source_Labor_LaborCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Labor_Source_Labor_LaborCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaborCharacter(); \
	friend struct Z_Construct_UClass_ALaborCharacter_Statics; \
public: \
	DECLARE_CLASS(ALaborCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labor"), NO_API) \
	DECLARE_SERIALIZER(ALaborCharacter)


#define Labor_Source_Labor_LaborCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALaborCharacter(); \
	friend struct Z_Construct_UClass_ALaborCharacter_Statics; \
public: \
	DECLARE_CLASS(ALaborCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labor"), NO_API) \
	DECLARE_SERIALIZER(ALaborCharacter)


#define Labor_Source_Labor_LaborCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALaborCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALaborCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaborCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaborCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaborCharacter(ALaborCharacter&&); \
	NO_API ALaborCharacter(const ALaborCharacter&); \
public:


#define Labor_Source_Labor_LaborCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaborCharacter(ALaborCharacter&&); \
	NO_API ALaborCharacter(const ALaborCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaborCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaborCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaborCharacter)


#define Labor_Source_Labor_LaborCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ALaborCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ALaborCharacter, FollowCamera); }


#define Labor_Source_Labor_LaborCharacter_h_9_PROLOG
#define Labor_Source_Labor_LaborCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labor_Source_Labor_LaborCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Labor_Source_Labor_LaborCharacter_h_12_SPARSE_DATA \
	Labor_Source_Labor_LaborCharacter_h_12_RPC_WRAPPERS \
	Labor_Source_Labor_LaborCharacter_h_12_INCLASS \
	Labor_Source_Labor_LaborCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Labor_Source_Labor_LaborCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labor_Source_Labor_LaborCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Labor_Source_Labor_LaborCharacter_h_12_SPARSE_DATA \
	Labor_Source_Labor_LaborCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Labor_Source_Labor_LaborCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Labor_Source_Labor_LaborCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABOR_API UClass* StaticClass<class ALaborCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Labor_Source_Labor_LaborCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

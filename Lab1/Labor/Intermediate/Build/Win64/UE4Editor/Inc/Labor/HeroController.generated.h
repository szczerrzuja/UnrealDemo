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
#ifdef LABOR_HeroController_generated_h
#error "HeroController.generated.h already included, missing '#pragma once' in HeroController.h"
#endif
#define LABOR_HeroController_generated_h

#define Labor_Source_Labor_HeroController_h_13_SPARSE_DATA
#define Labor_Source_Labor_HeroController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Labor_Source_Labor_HeroController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Labor_Source_Labor_HeroController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroController(); \
	friend struct Z_Construct_UClass_AHeroController_Statics; \
public: \
	DECLARE_CLASS(AHeroController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labor"), NO_API) \
	DECLARE_SERIALIZER(AHeroController)


#define Labor_Source_Labor_HeroController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAHeroController(); \
	friend struct Z_Construct_UClass_AHeroController_Statics; \
public: \
	DECLARE_CLASS(AHeroController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labor"), NO_API) \
	DECLARE_SERIALIZER(AHeroController)


#define Labor_Source_Labor_HeroController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroController(AHeroController&&); \
	NO_API AHeroController(const AHeroController&); \
public:


#define Labor_Source_Labor_HeroController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroController(AHeroController&&); \
	NO_API AHeroController(const AHeroController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroController)


#define Labor_Source_Labor_HeroController_h_13_PRIVATE_PROPERTY_OFFSET
#define Labor_Source_Labor_HeroController_h_9_PROLOG
#define Labor_Source_Labor_HeroController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labor_Source_Labor_HeroController_h_13_PRIVATE_PROPERTY_OFFSET \
	Labor_Source_Labor_HeroController_h_13_SPARSE_DATA \
	Labor_Source_Labor_HeroController_h_13_RPC_WRAPPERS \
	Labor_Source_Labor_HeroController_h_13_INCLASS \
	Labor_Source_Labor_HeroController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Labor_Source_Labor_HeroController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Labor_Source_Labor_HeroController_h_13_PRIVATE_PROPERTY_OFFSET \
	Labor_Source_Labor_HeroController_h_13_SPARSE_DATA \
	Labor_Source_Labor_HeroController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Labor_Source_Labor_HeroController_h_13_INCLASS_NO_PURE_DECLS \
	Labor_Source_Labor_HeroController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABOR_API UClass* StaticClass<class AHeroController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Labor_Source_Labor_HeroController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labor/HeroStatController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroStatController() {}
// Cross Module References
	LABOR_API UClass* Z_Construct_UClass_UHeroStatController_NoRegister();
	LABOR_API UClass* Z_Construct_UClass_UHeroStatController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Labor();
// End Cross Module References
	void UHeroStatController::StaticRegisterNativesUHeroStatController()
	{
	}
	UClass* Z_Construct_UClass_UHeroStatController_NoRegister()
	{
		return UHeroStatController::StaticClass();
	}
	struct Z_Construct_UClass_UHeroStatController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxJumpTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxJumpTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jumpStrenght_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_jumpStrenght;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxJumpCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxJumpCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max_stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_base_health_reg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_base_health_reg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_base_stamina_reg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_base_stamina_reg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroStatController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Labor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroStatController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HeroStatController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HeroStatController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroStatController_Statics::NewProp_maxJumpTime_MetaData[] = {
		{ "Category", "Skills" },
		{ "Comment", "// jump\n" },
		{ "ModuleRelativePath", "HeroStatController.h" },
		{ "ToolTip", "jump" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroStatController_Statics::NewProp_maxJumpTime = { "maxJumpTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroStatController, maxJumpTime), METADATA_PARAMS(Z_Construct_UClass_UHeroStatController_Statics::NewProp_maxJumpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStatController_Statics::NewProp_maxJumpTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroStatController_Statics::NewProp_jumpStrenght_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "HeroStatController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroStatController_Statics::NewProp_jumpStrenght = { "jumpStrenght", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroStatController, jumpStrenght), METADATA_PARAMS(Z_Construct_UClass_UHeroStatController_Statics::NewProp_jumpStrenght_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStatController_Statics::NewProp_jumpStrenght_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroStatController_Statics::NewProp_maxJumpCount_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "HeroStatController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHeroStatController_Statics::NewProp_maxJumpCount = { "maxJumpCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroStatController, maxJumpCount), METADATA_PARAMS(Z_Construct_UClass_UHeroStatController_Statics::NewProp_maxJumpCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStatController_Statics::NewProp_maxJumpCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroStatController_Statics::NewProp_max_health_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "//healt, stamina ; max health and stamina; regeneration of health and stamina\n" },
		{ "ModuleRelativePath", "HeroStatController.h" },
		{ "ToolTip", "healt, stamina ; max health and stamina; regeneration of health and stamina" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroStatController_Statics::NewProp_max_health = { "max_health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroStatController, max_health), METADATA_PARAMS(Z_Construct_UClass_UHeroStatController_Statics::NewProp_max_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStatController_Statics::NewProp_max_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroStatController_Statics::NewProp_max_stamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "HeroStatController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroStatController_Statics::NewProp_max_stamina = { "max_stamina", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroStatController, max_stamina), METADATA_PARAMS(Z_Construct_UClass_UHeroStatController_Statics::NewProp_max_stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStatController_Statics::NewProp_max_stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroStatController_Statics::NewProp_base_health_reg_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "HeroStatController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroStatController_Statics::NewProp_base_health_reg = { "base_health_reg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroStatController, base_health_reg), METADATA_PARAMS(Z_Construct_UClass_UHeroStatController_Statics::NewProp_base_health_reg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStatController_Statics::NewProp_base_health_reg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroStatController_Statics::NewProp_base_stamina_reg_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "HeroStatController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroStatController_Statics::NewProp_base_stamina_reg = { "base_stamina_reg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroStatController, base_stamina_reg), METADATA_PARAMS(Z_Construct_UClass_UHeroStatController_Statics::NewProp_base_stamina_reg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStatController_Statics::NewProp_base_stamina_reg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroStatController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStatController_Statics::NewProp_maxJumpTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStatController_Statics::NewProp_jumpStrenght,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStatController_Statics::NewProp_maxJumpCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStatController_Statics::NewProp_max_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStatController_Statics::NewProp_max_stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStatController_Statics::NewProp_base_health_reg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStatController_Statics::NewProp_base_stamina_reg,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroStatController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroStatController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroStatController_Statics::ClassParams = {
		&UHeroStatController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeroStatController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStatController_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroStatController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStatController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroStatController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroStatController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroStatController, 3414027501);
	template<> LABOR_API UClass* StaticClass<UHeroStatController>()
	{
		return UHeroStatController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroStatController(Z_Construct_UClass_UHeroStatController, &UHeroStatController::StaticClass, TEXT("/Script/Labor"), TEXT("UHeroStatController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroStatController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

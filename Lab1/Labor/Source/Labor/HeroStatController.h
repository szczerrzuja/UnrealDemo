// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HeroStatController.generated.h"

/**
 * 
 */
UCLASS( Blueprintable, BlueprintType,  editinlinenew )
class LABOR_API UHeroStatController : public UObject
{
	GENERATED_BODY()
	public:
// jump
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Skills")
	float maxJumpTime;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Skills") 
	float jumpStrenght;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Skills")	
	int maxJumpCount;
//healt, stamina ; max health and stamina; regeneration of health and stamina
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Health") 	
	float max_health;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Stamina") 
	float max_stamina;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Health") 	
	float base_health_reg;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Stamina") 	
	float base_stamina_reg;
//others


//actual levels
int jumpCount;
float healthPoints, staminaPoints,jumpTime;
public:
	UHeroStatController();
	~UHeroStatController();
	void StaminaUpdate(float change, bool canRegenstamina);
	void HealthUpdate(float change, bool canRegenHealth);
	virtual void PostInitProperties() override;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroStatController.h"

UHeroStatController::UHeroStatController()
{

}
UHeroStatController::~UHeroStatController()
{
}
void UHeroStatController::StaminaUpdate(float change, bool canRegenstamina)
{
    staminaPoints += canRegenstamina * base_stamina_reg + change;
    if (staminaPoints > max_stamina)
        staminaPoints = max_stamina;
    else if (staminaPoints < 0.0f)
        staminaPoints = 0.0f;
}
void UHeroStatController::HealthUpdate(float change, bool canRegenHealth)
{
    healthPoints += canRegenHealth * base_health_reg + change;
    if (healthPoints > max_health)
        healthPoints = max_health;
    else if (healthPoints < 0.0f)
        healthPoints = 0.0f;
}
void UHeroStatController::PostInitProperties()
{
    Super::PostInitProperties();
   max_health = 100.f;
    max_stamina = 100.f;
    base_health_reg = 1.f;
    base_stamina_reg = 10.f;
    maxJumpTime = 0.5f;
    jumpStrenght = 1000.f;
    jumpCount = maxJumpCount;
    jumpTime = 0.0f;
    healthPoints = max_health;
    staminaPoints = max_stamina;
}
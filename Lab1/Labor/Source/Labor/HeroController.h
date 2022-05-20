// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HeroController.generated.h"

UCLASS(Blueprintable)
class LABOR_API AHeroController : public ACharacter
{
	
	GENERATED_BODY()
public:
	UPROPERTY(Instanced,EditAnywhere,BlueprintReadWrite)
	class UHeroStatController *HSC;
	UPROPERTY(EditAnywhere)
	class UCameraComponent* SiedeViewCamera;
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OC, AActor* ac, UPrimitiveComponent* OtherComp,  int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
protected:
	
private:
	FVector tmpPos = FVector();
	bool grounded, CanMove;
public:
	// Sets default values for this character's properties
	AHeroController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//called on call action with axes output
	void MoveRight(float val);
	//called on press of action
	void Climb();
	//called on release of action
	void StopClimb();

public:	
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//return camera component
	class UCameraComponent* GetSideViewCameraComponent() const;
	void RestartLevel();
};

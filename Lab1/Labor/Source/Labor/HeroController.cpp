// Fill out your copyright notice in the Description page of Project Settings.

#include "HeroController.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HeroStatController.h"


// Sets default values
AHeroController::AHeroController()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// init capsulecollider
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);
	
	HSC = CreateDefaultSubobject<UHeroStatController>(TEXT("Heor Stat Controller"));
	// blocing of rotation of object in Physics
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	// creation of camera
	SiedeViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Side View Camera"));
	SiedeViewCamera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 720.f, 0.f);

	GetCharacterMovement()->GravityScale = 2.;
	// definese how much controll you had over character in air
	GetCharacterMovement()->AirControl = 0.75f;
	GetCharacterMovement()->JumpZVelocity = 900.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;
	tmpPos = GetActorLocation();

	
}

// Called when the game starts or when spawned
void AHeroController::BeginPlay()
{
	Super::BeginPlay();
	CanMove = 1;
}

// Called every frame
void AHeroController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	tmpPos = GetActorLocation();
	tmpPos.X -=800.f;
	SiedeViewCamera->SetWorldLocation(tmpPos);
}

void AHeroController::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// input component attachment to the function
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	// atachment an axis
	PlayerInputComponent->BindAxis("MoveRight", this, &AHeroController::MoveRight);
}

void AHeroController::MoveRight(float val)
{
	if (CanMove)
		AddMovementInput(FVector(0.f, 1.f, 0.f), val);
}
void  AHeroController::Climb()
{

}

class UCameraComponent *AHeroController::GetSideViewCameraComponent() const
{
	return SiedeViewCamera;
}

void AHeroController::RestartLevel()
{
}
void AHeroController::OnOverlapBegin(UPrimitiveComponent *OC, AActor *ac, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
}
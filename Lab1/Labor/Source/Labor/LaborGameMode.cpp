// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaborGameMode.h"
#include "LaborCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaborGameMode::ALaborGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

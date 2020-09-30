// Copyright Epic Games, Inc. All Rights Reserved.

#include "JelloGameMode.h"
#include "JelloCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJelloGameMode::AJelloGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "DoDGameMode.h"
#include "DoDCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADoDGameMode::ADoDGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

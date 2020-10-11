// Copyright Epic Games, Inc. All Rights Reserved.

#include "GASExampleGameMode.h"
#include "GASExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGASExampleGameMode::AGASExampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

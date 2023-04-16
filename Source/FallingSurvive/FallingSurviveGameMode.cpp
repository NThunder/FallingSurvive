// Copyright Epic Games, Inc. All Rights Reserved.

#include "FallingSurviveGameMode.h"
#include "FallingSurviveCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFallingSurviveGameMode::AFallingSurviveGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

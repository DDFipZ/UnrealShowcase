// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShowcaseGameMode.h"
#include "ShowcaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShowcaseGameMode::AShowcaseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

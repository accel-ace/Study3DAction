// Copyright Epic Games, Inc. All Rights Reserved.

#include "Study3DActionGameMode.h"
#include "Study3DActionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStudy3DActionGameMode::AStudy3DActionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "Study3DActionGameMode.h"
#include "Study3DActionCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Study3DActionCharacter.h"

AStudy3DActionGameMode::AStudy3DActionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	//DefaultPawnClass = AStudy3DActionCharacter::StaticClass();
}

void AStudy3DActionGameMode::AddScore(int AddScore)
{
	Score += AddScore;
}

int AStudy3DActionGameMode::GetScore()
{
	return Score;
}

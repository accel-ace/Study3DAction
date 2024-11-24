// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Study3DActionGameMode.generated.h"

UCLASS(minimalapi)
class AStudy3DActionGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	int Score = 0;

public:
	AStudy3DActionGameMode();

	void AddScore(int AddScore);

	int GetScore();
};




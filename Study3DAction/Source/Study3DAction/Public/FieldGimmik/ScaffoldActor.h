// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZipLineActor.h"
#include "ScaffoldActor.generated.h"

UCLASS()
class STUDY3DACTION_API AScaffoldActor : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, CAtegory = "ZipLine")
	AZipLineActor* ZipLineActor;

	float MoveDistanceLocation = 0.0f;
	
	UPROPERTY(EditAnywhere, Category = "ZipLine")
	float Speed = 50.0f;

	UPROPERTY(EditAnyWhere, CAtegory = "ZipLine")
	bool bIsLoop = true;

	
public:	
	// Sets default values for this actor's properties
	AScaffoldActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
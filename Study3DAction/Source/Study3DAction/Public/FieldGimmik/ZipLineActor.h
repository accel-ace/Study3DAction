// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "ZipLineActor.generated.h"

UCLASS()
class STUDY3DACTION_API AZipLineActor : public AActor
{
	GENERATED_BODY()

private:
	TObjectPtr<USplineComponent> SplineComponent;
	
public:	
	// Sets default values for this actor's properties
	AZipLineActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void GetCurrentLocation(float Length, bool Lerp);

	void GetSplineLength();

	void IsArrived(float Length);

};
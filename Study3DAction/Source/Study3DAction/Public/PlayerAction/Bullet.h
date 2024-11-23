// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Bullet.generated.h"

UCLASS()
class STUDY3DACTION_API ABullet : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, Category = "ShotSound")
	USoundBase* SoundObject;
	
public:	
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

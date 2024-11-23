// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAction/Bullet.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::SpawnSound2D(GetWorld(), SoundObject, 1.0f, 1.0f, 0.0f, nullptr, false, false);

}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


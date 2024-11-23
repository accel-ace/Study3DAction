// Fill out your copyright notice in the Description page of Project Settings.


#include "FieldGimmik/ScaffoldActor.h"

// Sets default values
AScaffoldActor::AScaffoldActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AScaffoldActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AScaffoldActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveDistanceLocation = MoveDistanceLocation + DeltaTime * Speed;

	if (IsFirstTick) {
		MoveDistanceLocation = ZipLineActor->GetSplineLength() * StartPoint;
		IsFirstTick = false;
	}

	FVector SplineLocation = ZipLineActor->GetCurrentLocation(MoveDistanceLocation, bIsLoop);
	SetActorLocation(SplineLocation);
}


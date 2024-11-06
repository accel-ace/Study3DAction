// Fill out your copyright notice in the Description page of Project Settings.


#include "FieldGimmik/ZipLineActor.h"

// Sets default values
AZipLineActor::AZipLineActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZipLineActor::BeginPlay()
{
	Super::BeginPlay();

	TArray<UActorComponent*> aActorComponents;
	this->GetComponents<UActorComponent>(aActorComponents);

	for (auto aComponent : aActorComponents)
	{
		if (Cast<USplineComponent>(aComponent) != nullptr) {
			SplineComponent = Cast<USplineComponent>(aComponent);
		}
	}
}

// Called every frame
void AZipLineActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AZipLineActor::GetCurrentLocation(float Length, bool Lerp)
{
}

void AZipLineActor::GetSplineLength()
{
}

void AZipLineActor::IsArrived(float Length)
{
}


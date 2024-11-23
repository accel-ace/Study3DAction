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
			TObjectPtr<USplineComponent> SplinePtr = Cast<USplineComponent>(aComponent);
			SplineComponent = SplinePtr.Get();
		}
	}
}

// Called every frame
void AZipLineActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AZipLineActor::GetSplineLength()
{
	return SplineComponent->GetSplineLength();
}

FVector AZipLineActor::GetCurrentLocation(float Length, bool Loop)
{
	LocalLength = Length;
	if (Loop) {
		LocalLength = fmod(Length, SplineComponent->GetSplineLength());
	}

	FVector Location = SplineComponent->GetLocationAtDistanceAlongSpline(LocalLength, ESplineCoordinateSpace::Type::World);

	return Location;
}

bool AZipLineActor::IsArrived(float Length)
{
	return SplineComponent->GetSplineLength() >= Length;
}


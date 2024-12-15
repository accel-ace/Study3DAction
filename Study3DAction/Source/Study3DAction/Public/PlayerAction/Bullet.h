// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FieldGimmik/Target.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"
#include "Bullet.generated.h"

UCLASS()
class STUDY3DACTION_API ABullet : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, Category = "ShotSound")
	USoundBase* SoundObject;

private:

	UPROPERTY(VisibleAnywhere, Category = BulletMesh, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> BulletMesh;

	UPROPERTY(VisibleAnywhere, Category = HitCollision, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USphereComponent> HitCollision;

public:
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	private:
		UFUNCTION()
		void HitBullet(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};

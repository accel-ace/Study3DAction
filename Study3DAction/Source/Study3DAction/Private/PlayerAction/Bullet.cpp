// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAction/Bullet.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	SetRootComponent(BulletMesh);
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/ThirdPerson/Meshes/SM_BulletSphere"));
	BulletMesh->SetStaticMesh(Mesh);

	HitCollision = CreateDefaultSubobject<USphereComponent>(TEXT("HitCollision"));
	HitCollision->SetupAttachment(RootComponent);

	HitCollision->SetSphereRadius(12.0f);
	HitCollision->OnComponentBeginOverlap.AddDynamic(this, &ABullet::HitBullet);
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

void ABullet::HitBullet(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("HitBullet"));
	for (auto& A : OtherActor->GetComponentsByTag(USphereComponent::StaticClass(), FName(TEXT("Target"))))
	{
		UE_LOG(LogTemp, Log, TEXT("HitBullet: Target"));

		//if (Cast<Target>(OtherActor) != nullptr) {
		//	TObjectPtr<Target> TargetPtr = Cast<Target, AActor>(OtherActor);
		//	Target* HitTarget = TargetPtr.Get();
		//	HitTarget->HitBullet();
		//}
	}

	OverlappedComp->DestroyComponent();
	
}


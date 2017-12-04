// Fill out your copyright notice in the Description page of Project Settings.

#include "Collectible.h"
#include "PaperSpriteComponent.h"
#include "Components/CapsuleComponent.h"
#include "MyChar.h"


// Sets default values
ACollectible::ACollectible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComp"));
	
	CollisionComp->SetCapsuleHalfHeight(38.0f);
	CollisionComp->SetCapsuleRadius(15.0f);

	CollisionComp->bGenerateOverlapEvents = true;
	CollisionComp->SetCollisionProfileName("OverlapAllDynamic");
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &ACollectible::OnOverlapBegin);
	RootComponent = CollisionComp;

	InitialLifeSpan = 70;


	Iddle = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Iddle"));
	Iddle->SetCollisionProfileName("NoCollision");
	Iddle->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ACollectible::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACollectible::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor != nullptr && OtherActor->IsA(AMyChar::StaticClass())) {
		AMyChar* Char = Cast<AMyChar>(OtherActor);
		Char->AddPoints(10);
		Destroy();
	}
}


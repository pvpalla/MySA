// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy.h"
#include "Components/BoxComponent.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "Engine/World.h"
#include "PaperSpriteComponent.h"
#include "MyChar.h"


// Sets default values
AEnemy::AEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	CollisionComp->SetBoxExtent(FVector(19.0f, 32.0f, 16.0f));
	CollisionComp->bGenerateOverlapEvents = true;
	CollisionComp->SetCollisionProfileName("OverlapAllDynamic");
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnOverlapBegin);
	RootComponent = CollisionComp;

	InitialLifeSpan = 70;


	Iddle = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Iddle"));
	Iddle->SetCollisionProfileName("NoCollision");
	Iddle->SetupAttachment(RootComponent);
	
	Mult = 1;

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	InitialLocation = GetActorLocation();

}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Move();

}

void AEnemy::Move()
{
	SetActorLocation(FVector(InitialLocation.X, InitialLocation.Y, InitialLocation.Z + 1 * Mult));
	if (GetActorLocation().Z >= InitialLocation.Z + 50 || GetActorLocation().Z <= InitialLocation.Z - 50) {
		Mult *= -1;
	}
}

void AEnemy::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor != nullptr && OtherActor->IsA(AMyChar::StaticClass())) {
		AMyChar* Char = Cast<AMyChar>(OtherActor);
		Char->EndGame();
	}
}
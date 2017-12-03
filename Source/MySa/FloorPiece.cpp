// Fill out your copyright notice in the Description page of Project Settings.

#include "FloorPiece.h"
#include "PaperTileMapComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "MyChar.h"
#include "FloorManager.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "Engine/World.h"


// Sets default values
AFloorPiece::AFloorPiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
	MyTileMap = CreateDefaultSubobject<UPaperTileMapComponent>(TEXT("MyTileMap"));
	RootComponent = MyTileMap;

	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	CollisionComp->SetRelativeLocation(FVector(1264.0f, 0.0f, -300.0f));
	CollisionComp->SetRelativeScale3D(FVector(1.0f, 1.0f, 10.0f));
	CollisionComp->bGenerateOverlapEvents = true;
	CollisionComp->SetCollisionProfileName("OverlapAllDynamic");
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AFloorPiece::OnOverlapBegin);
	CollisionComp->SetupAttachment(RootComponent);

	ArrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComp"));
	ArrowComp->SetRelativeLocation(FVector(1280.0f, 0.0f, 0.0f));
	
	ArrowComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AFloorPiece::BeginPlay()
{
	Super::BeginPlay();
	//FVector ArrowLocation;

	//int MapWidth;
	//int MapHeight;
	//int Desp;
	//TileMap->GetMapSize(MapWidth, MapHeight, Desp);
	//UE_LOG(LogTemp, Warning, TEXT("%d"), MapWidth);
	//ArrowLocation.X = MapWidth;
	//ArrowComp->SetWorldLocation(ArrowLocation);

	//BoxComp->SetWorldLocation(ArrowLocation);
	
}

// Called every frame
void AFloorPiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FTransform AFloorPiece::GetNextTileTransform()
{
	return ArrowComp->GetComponentTransform();
}
/*
TSubclassOf<class AFloorPiece> AFloorPiece::GetNextPiece()
{
	return NextPiece;
}
*/
UArrowComponent * AFloorPiece::GetArrowComp()
{
	return ArrowComp;
}

void AFloorPiece::SetManager(AFloorManager * NewManager)
{
	Manager = NewManager;
}

void AFloorPiece::SetNextPiece(AFloorPiece * NewNextPiece)
{
	NextPiece = NewNextPiece;
}

void AFloorPiece::SetMyTileMap(UPaperTileMapComponent * NewTileMap)
{
	MyTileMap = NewTileMap;
}

AFloorPiece * AFloorPiece::GetNextPiece()
{
	return NextPiece;
}

UPaperTileMapComponent * AFloorPiece::GetMyTileMap()
{
	return MyTileMap;
}

void AFloorPiece::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{

	if (OtherActor != nullptr && OtherActor->IsA(AMyChar::StaticClass())) {
		AMyChar* Personagem = Cast<AMyChar>(OtherActor);
		Personagem->IncraseRun();
		if (Manager != nullptr) {
			//Manager->AddFloorTile();
			GetWorldTimerManager().SetTimer(DestroyTimer, this, &AFloorPiece::MoveAndChange,
				1.0f, false);
		}

	}


}

void AFloorPiece::SelfDestroy()
{
	Destroy();
}

void AFloorPiece::MoveAndChange()
{

	if (Manager->GetNext() != nullptr) {
		RootComponent = Manager->GetNext()->GetMyTileMap();

		if (Manager->GetNext()->GetNextPiece() != nullptr) {
			//NextPiece = Manager->GetNext()->GetNextPiece();
		}
	}
	RootComponent->SetWorldLocation(Manager->GetNextTransform().GetLocation());
	Manager->SetNextTransformLocation(ArrowComp->GetComponentLocation());



}
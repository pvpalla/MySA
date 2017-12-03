// Fill out your copyright notice in the Description page of Project Settings.

#include "FloorManager.h"
#include "Engine/World.h"
#include "FloorPiece.h"
#include "Components/SceneComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Components/ArrowComponent.h"
#include "PaperTileMap.h"


// Sets default values
AFloorManager::AFloorManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = SceneComp;

	NextTransform = FTransform();
}

// Called when the game starts or when spawned
void AFloorManager::BeginPlay()
{
	Super::BeginPlay();
	AddFloorTile();
}

// Called every frame
void AFloorManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFloorManager::AddFloorTile()
{
	UWorld* World = GetWorld();
	FActorSpawnParameters SpawnParameters;
	if (World) {
		
		if (Floor1 != nullptr) {

			for (int i = 0; i < 4; i++)
			{
				AFloorPiece* Floor;

				FVector Location = NextTransform.GetLocation();

				Floor = World->SpawnActor<AFloorPiece>(Floor1, Location, FRotator::ZeroRotator, SpawnParameters);
				NextTransform.SetLocation(Floor->GetArrowComp()->GetComponentLocation());
				Floor->SetManager(this);
				
				switch (i) {
					case 0:
						MyFloor1 = Floor;
						break;
					case 1:
						MyFloor2 = Floor;
						MyFloor1->SetNextPiece(MyFloor2);
						break;
					case 2:
						MyFloor3 = Floor;
						MyFloor2->SetNextPiece(MyFloor3);
						break;
					case 3:
						MyFloor4 = Floor;
						MyFloor3->SetNextPiece(MyFloor4);
						MyFloor4->SetNextPiece(MyFloor1);
						break;
				}
				
			}
		
		
		}

	}


}

FTransform AFloorManager::GetNextTransform()
{
	return NextTransform;
}

void AFloorManager::SetNextTransformLocation(FVector NewTrans)
{
	NextTransform.SetLocation(NewTrans);
}

AFloorPiece* AFloorManager::GetNext()
{

	//AFloorPiece* RandomPiece = nullptr;


	if (Next != nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("If"));
		
		if (Floor1 != nullptr && Floor1->IsChildOf(AFloorPiece::StaticClass())) {
			AFloorPiece* provisorio = Cast<AFloorPiece>(Floor1);
			if (provisorio != nullptr) {
				Next->SetMyTileMap(provisorio->GetMyTileMap());
				Next->SetNextPiece(provisorio->GetNextPiece());
			}

		}

		/*
		if (Next->GetNextPiece() == nullptr) {


			
			switch (MyRand)
			{
			case 4:
				if (Floor4->IsChildOf(AFloorPiece::StaticClass()) && Floor4 != nullptr) {
					Next = Cast<AFloorPiece>(Floor4);
					UE_LOG(LogTemp, Warning, TEXT("Castado"));
					if (Next != nullptr) {
						UE_LOG(LogTemp, Warning, TEXT("NotNull"));
					}
				}
				UE_LOG(LogTemp, Warning, TEXT("Floor4"));
				break;

			case 3:
				if (Floor3->IsChildOf(AFloorPiece::StaticClass()) && Floor3 != nullptr) {
					Next = Cast<AFloorPiece>(Floor3);
					UE_LOG(LogTemp, Warning, TEXT("Castado"));
					if (Next != nullptr) {
						UE_LOG(LogTemp, Warning, TEXT("NotNull"));
					}
				}
				UE_LOG(LogTemp, Warning, TEXT("Floor3"));
				break;

			case 2:
				if (Floor2->IsChildOf(AFloorPiece::StaticClass()) && Floor2 != nullptr) {
					Next = Cast<AFloorPiece>(Floor2);
					UE_LOG(LogTemp, Warning, TEXT("Castado"));
					if (Next != nullptr) {
						UE_LOG(LogTemp, Warning, TEXT("NotNull"));
					}
				}
				UE_LOG(LogTemp, Warning, TEXT("Floor2"));
				break;
			case 1:
			default:
				if (Floor1->IsChildOf(AFloorPiece::StaticClass()) && Floor1 != nullptr) {
					Next = Cast<AFloorPiece>(Floor1);
					UE_LOG(LogTemp, Warning, TEXT("Castado"));
					if (Next != nullptr) {
						UE_LOG(LogTemp, Warning, TEXT("NotNull"));
					}
				}
				UE_LOG(LogTemp, Warning, TEXT("Floor1"));
				break;
			}
		}
		else {
			if (Next->GetNextPiece()->IsChildOf(AFloorPiece::StaticClass()) && Next->GetNextPiece() != nullptr) {
				Next = Cast<AFloorPiece>(Next->GetNextPiece());
			}
		}*/
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Else"));
		int MyRand = FMath::RandRange(1, 4);
		switch (1) {
		case 3:
			if (Floor3 != nullptr) {

			}
			break;
		case 2:
			if (Floor2 != nullptr) {

			}
			break;
			
		case 4:
			if (Floor4 != nullptr) {

			}
			break; 
		case 1:
		default:
			if (Floor1 != nullptr) {

			}
			break;

		}
		
	}
	return Next;
}


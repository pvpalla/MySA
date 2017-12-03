// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloorPiece.generated.h"

UCLASS()
class MYSA_API AFloorPiece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorPiece();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "NextTile")
		FTransform GetNextTileTransform();

	//TSubclassOf<class AFloorPiece> GetNextPiece();

	class UArrowComponent* GetArrowComp();

	void SetManager(class AFloorManager* NewManager);

	void SetNextPiece(class AFloorPiece* NewNextPiece);

	void SetMyTileMap(class UPaperTileMapComponent* NewTileMap);

	class AFloorPiece* GetNextPiece();

	void MoveAndChange();

	class UPaperTileMapComponent* GetMyTileMap();

private:

	UPROPERTY(EditAnywhere, Category = "Mapa")
		class UPaperTileMapComponent* MyTileMap;
	
	UPROPERTY(EditAnywhere, Category = "NextTile")
		class UArrowComponent* ArrowComp;

	UPROPERTY(EditAnywhere, Category = "NextTile")
		class UBoxComponent* CollisionComp;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, 
			UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	FTimerHandle DestroyTimer;
	void SelfDestroy();

	class AFloorManager* Manager;

	UPROPERTY(EditAnywhere, Category = "NextTile")
		class AFloorPiece* NextPiece;


	//UPROPERTY(EditAnywhere, Category = "NextTile")


	
};


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloorManager.generated.h"

UCLASS()
class MYSA_API AFloorManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AddFloorTile();

	FTransform GetNextTransform();
	void SetNextTransformLocation(FVector NewTrans);

	class AFloorPiece* GetNext();

private:

	UPROPERTY(EditAnywhere, Category = "SceneComponent")
		class USceneComponent* SceneComp;

	

	FTransform NextTransform;



	UPROPERTY(EditAnywhere, Category = "Floor")
		TSubclassOf<class AFloorPiece> Floor1;
	UPROPERTY(EditAnywhere, Category = "Floor")
		TSubclassOf<class AFloorPiece> Floor2;
	UPROPERTY(EditAnywhere, Category = "Floor")
		TSubclassOf<class AFloorPiece> Floor3;
	UPROPERTY(EditAnywhere, Category = "Floor")
		TSubclassOf<class AFloorPiece> Floor4;

		class AFloorPiece* MyFloor1;
		class AFloorPiece* MyFloor2;
		class AFloorPiece* MyFloor3;
		class AFloorPiece* MyFloor4;

		class AFloorPiece* Next;
	
	
};


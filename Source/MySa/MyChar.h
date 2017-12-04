// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "MyChar.generated.h"

/**
 * 
 */
UCLASS()
class MYSA_API AMyChar : public APaperCharacter
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;


public:
	AMyChar();

	UFUNCTION(BlueprintCallable, Category = "Mobility")
		virtual void Jump() override;


	UFUNCTION(BlueprintCallable, Category = "Mobility")
		void Dash();


	UFUNCTION(BlueprintCallable, Category = "Mobility")
		void ToGround();

	UPROPERTY(EditAnywhere, Category = "MovCamera")
		bool Mov;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void IncraseRun();

	UFUNCTION(BlueprintCallable, Category = "Points")
		int GetPoints();

	void AddPoints(int NewPoints);

	void EndGame();

	UFUNCTION(BlueprintCallable, Category = "Points")
		bool IsEnd();

private:

	bool IsGameOver;

	int Points;

	float CameraHeight;


	UPROPERTY(EditAnywhere)
		class USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere)
		class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
		class UPaperFlipbook* Iddle;

	UPROPERTY(EditAnywhere)
		class UPaperFlipbook* Running;

	UPROPERTY(EditAnywhere)
		class UPaperFlipbook* Jumping;

	void Move();

	float MyRun = 0;
	
	FVector Offset;

	FTimerHandle StartRun;

	FTimerHandle DashTimer;

	void StopDash();

	bool CanDash;

	bool CanJump;

};

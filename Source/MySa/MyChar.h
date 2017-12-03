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

	virtual void Jump() override;


public:
	AMyChar();

	UPROPERTY(EditAnywhere, Category = "MovCamera")
		bool Mov;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void IncraseRun();

private:

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

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> MyHUD;

	void Move();

	float MyRun = 0;
	
	FVector Offset;

	FTimerHandle StartRun;
};

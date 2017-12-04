// Fill out your copyright notice in the Description page of Project Settings.

#include "MyChar.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "Components/ChildActorComponent.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/UMGStyle.h"
#include "Runtime/UMG/Public/Slate/SObjectWidget.h"
#include "Runtime/UMG/Public/IUMGModule.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "Engine/World.h"

AMyChar::AMyChar() {
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->TargetArmLength = 500;
	CameraBoom->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	CameraBoom->SetRelativeLocation(FVector(150.0f, 0.0f, 50.0f));
	CameraBoom->SetupAttachment(RootComponent);

	GetCapsuleComponent()->SetCapsuleRadius(12);
	GetCapsuleComponent()->SetCapsuleHalfHeight(15);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	Camera->OrthoWidth = 500.0f;
	Camera->SetupAttachment(CameraBoom);

	CanDash = true;

	

	AutoPossessPlayer = EAutoReceiveInput::Player0;

}

void AMyChar::BeginPlay() {
	Super::BeginPlay();

	CameraHeight = CameraBoom->GetComponentLocation().Z;
	if (Iddle) {
		GetSprite()->SetFlipbook(Iddle);
	}
	GetWorldTimerManager().SetTimer(StartRun, this, &AMyChar::Move, 3.0f, false);
	
}

void AMyChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

	if (GetSprite()->GetFlipbook() == Jumping && GetCharacterMovement()->IsMovingOnGround()) {
		GetSprite()->SetFlipbook(Running);
		GetSprite()->SetLooping(true);
		GetSprite()->Play();
	}
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), MyRun);
	if (GetActorLocation().Z >= CameraHeight) {
		CameraBoom->SetWorldLocation(FVector(GetActorLocation().X + 150.0f, 0.0f, GetActorLocation().Z));
	}
	else {
		CameraBoom->SetWorldLocation(FVector(GetActorLocation().X + 150.0f, 0.0f, CameraHeight));
	}

	

	//Move(1);
	//if (GetCharacterMovement()->IsMovingOnGround()) {
	//	if ( GetVelocity().X == 0) {
	//		GetSprite()->SetFlipbook(Iddle);
	//	}
	//	else {
	//		GetSprite()->SetFlipbook(Running);
	//	}
	//}
}

void AMyChar::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
//	PlayerInputComponent->BindAxis("Move", this, &AMyChar::Move);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyChar::Jump);
	PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &AMyChar::Dash);
	PlayerInputComponent->BindAction("ToGround", IE_Pressed, this, &AMyChar::ToGround);

}

void AMyChar::Move() {
/*
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
	if (GetCharacterMovement()->IsMovingOnGround()) {
		if (Value != 0) {
			GetSprite()->SetFlipbook(Running);
			if (Value < 0) {
				GetSprite()->SetWorldRotation(FRotator(0.0f, 180.0f, 0.0f));
			}
			else {
				GetSprite()->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));
			}
		}
		else {
			GetSprite()->SetFlipbook(Iddle);
		}
	}*/
	GetSprite()->SetFlipbook(Running);
	MyRun = 0.3f;


}
void AMyChar::Dash()
{

	if (CanDash) {
		LaunchCharacter(FVector(1000.0f, 0.0f, 10.0f), false, false);
		CanDash = false;
		GetWorldTimerManager().SetTimer(DashTimer, this, &AMyChar::StopDash, 0.30f, false);
	}
}

void AMyChar::StopDash()
{
	UE_LOG(LogTemp, Warning, TEXT("DASH STOP!"));

	if (!GetCharacterMovement()->IsMovingOnGround()) {
		LaunchCharacter(FVector(-1000.0f, 0.0f, 10.0f), false, false);
	}
	CanDash = true;
}

void AMyChar::ToGround()
{
	LaunchCharacter(FVector(.0f, 0.0f, -1000.0f), false, false);
}

void AMyChar::Jump() {
	Super::Jump();

	GetSprite()->SetFlipbook(Jumping);
	GetSprite()->SetLooping(false);
	

	//GetSprite()->OnFinishedPlaying();
}

void AMyChar::IncraseRun() {
	if (Camera->OrthoWidth < 600) {
		int modulo = Camera->OrthoWidth;
		if (modulo % 10 == 0 && Mov) {
			Offset.Y += 0.2f;
			CameraBoom->SocketOffset = Offset;
		}
		Camera->OrthoWidth = Camera->OrthoWidth + 0.1f;
	}
	if (MyRun < 1) {
		MyRun += 0.05;
	}
}
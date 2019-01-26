// Fill out your copyright notice in the Description page of Project Settings.

#include "CChickenPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "AEgg.h"


// Sets default values
ACChickenPlayer::ACChickenPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);

	EggSpawnPoint = CreateDefaultSubobject<USphereComponent>(TEXT("SpawnComp"));

	Corns = 20;
	Points = 0;
}

// Called when the game starts or when spawned
void ACChickenPlayer::BeginPlay()
{
	Super::BeginPlay();

}

void ACChickenPlayer::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector() * Value);

}


// Called every frame
void ACChickenPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACChickenPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACChickenPlayer::MoveForward);
}


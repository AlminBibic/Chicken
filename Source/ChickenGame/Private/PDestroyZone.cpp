// Fill out your copyright notice in the Description page of Project Settings.

#include "PDestroyZone.h"
#include "Components/BoxComponent.h"

// Sets default values
APDestroyZone::APDestroyZone()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	DestroyZone = CreateDefaultSubobject<UBoxComponent>(TEXT("DestroyZone"));

}

// Called when the game starts or when spawned
void APDestroyZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APDestroyZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APDestroyZone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


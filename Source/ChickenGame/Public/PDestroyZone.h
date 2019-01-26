// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PDestroyZone.generated.h"

class UBoxComponent;

UCLASS()
class CHICKENGAME_API APDestroyZone : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APDestroyZone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "DestroyZone")
	UBoxComponent* DestroyZone;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};

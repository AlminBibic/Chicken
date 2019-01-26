// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CChickenPlayer.generated.h"


class UCameraComponent;
class USpringArmComponent;
class USphereComponent;

UCLASS()
class CHICKENGAME_API ACChickenPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACChickenPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;

	void MoveForward(float Value);

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "SpawnComp")
	USphereComponent* EggSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnComp")
	int Corns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnComp")
	int Points;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PNest.generated.h"

class StaticMeshComponent;
class USphereComponent;

UCLASS()
class CHICKENGAME_API APNest : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APNest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "SphereComp")
	USphereComponent* SphereComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AEgg.generated.h"

class UStaticMesh;

UCLASS()
class CHICKENGAME_API AAEgg : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAEgg();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "MeshComp")
	UStaticMesh* EggMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

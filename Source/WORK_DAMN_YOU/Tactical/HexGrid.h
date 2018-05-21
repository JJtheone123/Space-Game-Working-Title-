// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HexGrid.generated.h"

UCLASS()
class WORK_DAMN_YOU_API AHexGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	//////////////////////////////////////////////////
	// Constructor
	// Sets default values for this actor's properties
	AHexGrid();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Size)
	float TileSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Size)
	int Size;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Size")
	float height;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Size")
	float width;

	/////////////////////////////////////////////////////
	// FUNCTIONS
	/////////////////////////////////////////////////////

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

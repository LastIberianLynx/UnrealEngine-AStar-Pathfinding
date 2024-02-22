// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "GridAStar.generated.h"

// MvTask: Remake A*

USTRUCT(BlueprintType)
struct FMvNode {
	GENERATED_BODY()
public:
	bool bObstacle = false;
	bool bVisited = false;
	float fGlobalGoal;
	float fLocalGoal;
	int32 X;
	int32 Y;
	FVector WorldLocation;
	TArray<FMvNode*> Neighbors;
	int32 Index;
	FMvNode* parent;
};

UCLASS()
class APATHFINDING2DGRID_API AGridAStar : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AGridAStar();
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
		TArray <FMvNode> Nodes;
	int32 nMapWidth = 16;
	int32 nMapHeight = 16;
	FMvNode* nodeStart = nullptr;
	FMvNode* nodeEnd = nullptr;

	int32 relativeCoords[8][2] = {
	{0, -1}, {0, 1}, {-1, 0}, {1, 0},      // Forward, Backward, Left, Right
	{-1, -1}, {-1, 1}, {1, -1}, {1, 1}      // Diagonals
	};

	UFUNCTION()
		bool OnUserCreate();
	UFUNCTION()
		bool OnUserUpdate(float DeltaTime);
	UFUNCTION()
		TArray<FMvNode>GetNeighbors(FMvNode& currentNode);
	UFUNCTION()
		void Solve_AStar();


};

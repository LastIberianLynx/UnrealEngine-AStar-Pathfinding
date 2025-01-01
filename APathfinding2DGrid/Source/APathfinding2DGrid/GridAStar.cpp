// Fill out your copyright notice in the Description page of Project Settings.


#include "GridAStar.h"

// Sets default values
AGridAStar::AGridAStar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGridAStar::BeginPlay()
{
	Super::BeginPlay();
	
	OnUserCreate();
	OnUserUpdate(0);
	Solve_AStar();
	FTimerHandle T; GetWorld()->GetTimerManager().SetTimer(T, [&]() {

	}, 2.f, false);

}

// Called every frame
void AGridAStar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AGridAStar::OnUserCreate()
{
	//initiate nodes
	//set them to obstacle randomly
	for (int32 x = 0; x < nMapWidth; x++)
		for (int32 y = 0; y < nMapHeight; y++) {
			int32 curIndex = y * nMapWidth + x;
			FMvNode Node;
			Node.X = x;
			Node.Y = y;

			bool bRandomBool = (FMath::FRand() <= 0.2); /*bool bRandomBool = FMath::RandBool();*/ //probability of being an obstacle
			if (bRandomBool)
				Node.bObstacle = true;
			else {
				Node.bObstacle = false;
			}

			Node.bVisited = false;
			Node.parent = nullptr;
			Node.WorldLocation = FVector(x * 200, y * 200, 0); //size of the node.
			Node.Index = Nodes.Num();
			Nodes.Add(Node);
		}
	//after nodes are set and stored in the array, get the neighbors
	for (int32 x = 0; x < nMapWidth; x++)
		for (int32 y = 0; y < nMapHeight; y++) {
			int32 curIndex = y * nMapWidth + x;
			FMvNode* Node = &Nodes[curIndex];
			GetNeighbors(*Node);
		}

	nodeStart = &Nodes[1]; //assign path nodes
	nodeEnd = &Nodes[178];

	DrawDebugBox(GetWorld(), nodeStart->WorldLocation, FVector(120, 120, 120), FColor::Red, false, 200.f, 30.f);
	DrawDebugBox(GetWorld(), nodeEnd->WorldLocation, FVector(120, 120, 120), FColor::Orange, false, 200.f, 30.f);


	return true;
}

bool AGridAStar::OnUserUpdate(float DeltaTime)
{
	//For drawing/debugging purposes. Not necessary.
	for (int32 x = 0; x < nMapWidth; x++) {
		for (int32 y = 0; y < nMapHeight; y++) {
			int32 CurIndexNode = y * nMapWidth + x;
			FMvNode* CurNode = &Nodes[CurIndexNode];
			FVector CenterOfNode = CurNode->WorldLocation;

			if (CurNode->bObstacle)
				DrawDebugBox(GetWorld(), CenterOfNode, FVector(100, 100, 100), FColor::Black, false, 200.f, 10.f);
			else {
				DrawDebugBox(GetWorld(), CenterOfNode, FVector(100, 100, 100), FColor::Emerald, false, 200.f, 10.f);
			}
			if (CurNode->bVisited)
				DrawDebugBox(GetWorld(), CurNode->WorldLocation, FVector(120, 120, 120), FColor::Turquoise, false, 200.f, 16.f);

		}
	}
	return true;
}

TArray<FMvNode> AGridAStar::GetNeighbors(FMvNode& currentNode)
{
	TArray<FMvNode> neighbors;
	for (int32 i = 0; i < 8; i++) {
		int32 x = currentNode.X + relativeCoords[i][0];
		int32 y = currentNode.Y + relativeCoords[i][1];

		if (x >= 0 && x < nMapWidth && y >= 0 && y < nMapHeight) {
			int32 neighborIndex = x * nMapHeight + y; //needs to invert x and y
			FMvNode* Node = &Nodes[neighborIndex];
			currentNode.Neighbors.Add(Node);
		}

	}
	return TArray<FMvNode>(); //return of neighbor nodes is optional
}

void AGridAStar::Solve_AStar()
{

	double StartTime = FPlatformTime::Seconds();
	FDateTime Time1 = FDateTime::Now();

	// List to track nodes used in the calculation
	// Optimization suggested by u/EpochVanquisher
	TSet<FMvNode*> usedNodes;

	auto distance = [](FMvNode* a, FMvNode* b) {
		return sqrtf((a->X - b->X) * (a->X - b->X) + (a->Y - b->Y) * (a->Y - b->Y));
	};

	auto heuristic = [distance](FMvNode* a, FMvNode* b) {
		return distance(a, b);
	};

	FMvNode* nodeCurrent = nodeStart;
	nodeStart->fLocalGoal = 0.f;
	nodeStart->fGlobalGoal = heuristic(nodeStart, nodeEnd);

	TArray<FMvNode*> listNotTestedNodes;
	listNotTestedNodes.Add(nodeStart);

	while (listNotTestedNodes.Num() > 0 && nodeCurrent != nodeEnd) {
		// Sort Untested nodes by global goal, so lowest is first
		listNotTestedNodes.Sort([](const FMvNode& lhs, const FMvNode& rhs) { return lhs.fGlobalGoal < rhs.fGlobalGoal; });

		// Remove already visited nodes
		while (listNotTestedNodes.Num() > 0 && listNotTestedNodes[0]->bVisited)
			listNotTestedNodes.RemoveAt(0);

		if (listNotTestedNodes.Num() == 0)
			break;

		nodeCurrent = listNotTestedNodes[0];
		nodeCurrent->bVisited = true; // Mark as visited
		usedNodes.Add(nodeCurrent);   // Track this node

		for (auto nodeNeighbor : nodeCurrent->Neighbors) {
			if (!nodeNeighbor->bVisited && nodeNeighbor->bObstacle == 0) {
				if (nodeNeighbor->Unit == nullptr)
					listNotTestedNodes.Add(nodeNeighbor);
				else if (nodeNeighbor->Unit->PlayerPawn != Unit->PlayerPawn)
					listNotTestedNodes.Add(nodeNeighbor);
			}

			float fPossiblyLowerGoal = nodeCurrent->fLocalGoal + distance(nodeCurrent, nodeNeighbor);

			if (fPossiblyLowerGoal < nodeNeighbor->fLocalGoal) {
				nodeNeighbor->parent = nodeCurrent;
				nodeNeighbor->fLocalGoal = fPossiblyLowerGoal;
				nodeNeighbor->fGlobalGoal = nodeNeighbor->fLocalGoal + heuristic(nodeNeighbor, nodeEnd);
				usedNodes.Add(nodeNeighbor); // Track this node
			}
		}
	}

	FMvNode* p = nodeEnd;
	TArray<FMvNode*> NodePath;
	NodePath.Add(p);

	while (p->parent != nullptr) {
		DrawDebugLine(GetWorld(), p->WorldLocation, p->parent->WorldLocation, FColor::Magenta, false, 6.f, 16.f);
		p = p->parent;
		NodePath.Add(p);
	}

	// Reset only the nodes that were used
	for (FMvNode* node : usedNodes) {
		node->bVisited = false;
		node->fGlobalGoal = 3000000;
		node->fLocalGoal = 3000000;
		node->parent = nullptr;
	}

	double EndTime = FPlatformTime::Seconds();
	double ExecutionTime = EndTime - StartTime;

	FDateTime Time2 = FDateTime::Now();
	FTimespan ExecutionTime2 = Time2 - Time1;

	double ExecutionTimeMilliseconds = ExecutionTime2.GetTotalMilliseconds();
	return NodePath;



	//for (int32 i = 0; i < Nodes.Num(); i++) {
	//	FMvNode* Node = &Nodes[i];
	//	Node->bVisited = false;
	//	Node->fGlobalGoal = 99000000; //infinity
	//	Node->fLocalGoal = 99000000; //infinity
	//	Node->parent = nullptr;
	//}

	//auto distance = [](FMvNode* a, FMvNode* b) {
	//	return sqrtf((a->X - b->X) * (a->X - b->X) + (a->Y - b->Y) * (a->Y - b->Y));
	//};

	//auto heuristic = [distance](FMvNode* a, FMvNode* b) {
	//	return distance(a, b);
	//};

	//FMvNode* nodeCurrent = nodeStart;
	//nodeStart->fLocalGoal = 0.f;
	//nodeStart->fGlobalGoal = heuristic(nodeStart, nodeEnd);

	//TArray<FMvNode*> listNotTestedNodes;
	//listNotTestedNodes.Add(nodeStart); //initialize search by pushing the first node to the array.

	//while (listNotTestedNodes.Num() > 0 && nodeCurrent != nodeEnd)
	//{
	//	// Sort Untested nodes by global goal, so lowest is first
	//	listNotTestedNodes.Sort([](const FMvNode& lhs, const FMvNode& rhs) { return lhs.fGlobalGoal < rhs.fGlobalGoal; });

	//	// Front of listNotTestedNodes is potentially the lowest distance node. Our
	//	// list may also contain nodes that have been visited, so ditch these...
	//	while (listNotTestedNodes.Num() > 0 && listNotTestedNodes[0]->bVisited)
	//		listNotTestedNodes.RemoveAt(0);

	//	// ...or abort because there are no valid nodes left to test
	//	if (listNotTestedNodes.Num() == 0)
	//		break;

	//	nodeCurrent = listNotTestedNodes[0];
	//	nodeCurrent->bVisited = true; // We only explore a node once

	//	for (auto nodeNeighbor : nodeCurrent->Neighbors) {

	//		if (!nodeNeighbor->bVisited && nodeNeighbor->bObstacle == 0) {
	//			listNotTestedNodes.Add(nodeNeighbor);
	//		}

	//		float fPossiblyLowerGoal = nodeCurrent->fLocalGoal + distance(nodeCurrent, nodeNeighbor);

	//		if (fPossiblyLowerGoal < nodeNeighbor->fLocalGoal)
	//		{
	//			nodeNeighbor->parent = nodeCurrent;
	//			nodeNeighbor->fLocalGoal = fPossiblyLowerGoal;

	//			nodeNeighbor->fGlobalGoal = nodeNeighbor->fLocalGoal + heuristic(nodeNeighbor, nodeEnd);
	//		}
	//	}
	//}

	////Will go through all the nodes, parent by parent from the end to the star.
	////Here we can store them in an array and return the nodes and their location, so we have a path.
	//FMvNode* p = nodeEnd;
	//while (p->parent != nullptr) {
	//	DrawDebugLine(GetWorld(), p->WorldLocation, p->parent->WorldLocation, FColor::Magenta, false, 30.f, 40.f);
	//	p = p->parent;
	//}



}



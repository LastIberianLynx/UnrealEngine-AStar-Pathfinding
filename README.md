	for (int32 i = 0; i < Nodes.Num(); i++) {
		FMvNode* Node = &Nodes[i];
		Node->bVisited = false;
		Node->fGlobalGoal = 99000000; //infinity
		Node->fLocalGoal = 99000000; //infinity
		Node->parent = nullptr;
	}

 line 116 GridStar.cpp

 Input by u/EpochVanquisher

 This would be better if its not executed everytime you solve.
 Instead you can reset to bVisted = false, after you get a path, on each node you used.
 Keeping track of only the tested nodes. And then after it iterate through only those and set them to false.

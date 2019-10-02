// comp345-game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Map.h"

using namespace std;

int main()
{
	int totalVertices = 4;
	// MapBuilder newMap = MapBuilder(5);

	Map::MapGraph *graph;
	Map newMap;

	graph = newMap.createGraph(totalVertices);

	newMap.addEdge(graph, 0, 1);
	newMap.addEdge(graph, 0, 2);
	newMap.addEdge(graph, 0, 3);
	newMap.addEdge(graph, 1, 3);
	newMap.addEdge(graph, 2, 3);

	//graph = createGraph(totalVertices);

	//graph.addEdge(graph, 0, 1);
	//newMap.addEdge(graph, 0, 2);
	//newMap.addEdge(graph, 0, 3);
	//newMap.addEdge(graph, 1, 3);
	//newMap.addEdge(graph, 2, 3);

 //   cout << "Hello World!" << endl; 
		
	newMap.printGraph(graph);
}


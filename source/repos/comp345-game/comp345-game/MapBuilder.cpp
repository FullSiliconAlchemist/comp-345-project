#include "pch.h"
#include "MapBuilder.h"
#include <cstddef>;
#include <iostream>;

MapBuilder::AdjencyListNode* MapBuilder::newAdjencyListNode(int data)
{
	AdjencyListNode *nodePtr = new AdjencyListNode;
	nodePtr->data = data;
	nodePtr->next = NULL;
	return nodePtr;
}

MapBuilder::Graph * MapBuilder::createGraph(int V)
{
	Graph *graph = new Graph;
	graph->V = V;
	graph->arr = new AdjencyList[V];
	for (int i = 0; i < V; i++) {
		graph->arr[i].head = NULL;
	}
	return graph;
}

void MapBuilder::addEdge(Graph * graph, int src, int dest)
{
	AdjencyListNode *nodePtr = newAdjencyListNode(dest);
	nodePtr->next = graph->arr[src].head;
	graph->arr[src].head = nodePtr;
	nodePtr = newAdjencyListNode(src);
	nodePtr->next = graph->arr[dest].head;
	graph->arr[dest].head = nodePtr;
}

void MapBuilder::printGraph(Graph* graph) 
{
	for (int i = 0; i < graph->V; i++)
	{
		AdjencyListNode *root = graph->arr[i].head;
		std::cout << "Adjency list of vertex: " << i << std::endl;
		while (root != NULL)
		{
			std::cout << root->data << " -> ";
			root = root->next;
		}
		std::cout << std::endl;
	}
}

MapBuilder::MapBuilder()
{
}

MapBuilder::~MapBuilder()
{
}

#pragma once
class MapBuilder
{
private:



public:

	struct AdjencyListNode {
		int data;
		AdjencyListNode *next;
	};

	struct AdjencyList {
		AdjencyListNode *head;
	};

	struct Graph {
		int V;
		AdjencyList *arr;
	};

	AdjencyListNode* newAdjencyListNode(int data);
	Graph* createGraph(int V);
	void addEdge(Graph *graph, int src, int dest);
	void printGraph(Graph* graph);

	MapBuilder();
	~MapBuilder();
};


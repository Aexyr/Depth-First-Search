#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

const int MAX_VERTICES = 20;

class Graph
{
	friend ostream& operator<<(ostream& out, const Graph& g);

public:
    Graph( );
    Graph(int totalVertices);

	void createGraph(const string& fileName);

	/*************************************************************
	*
	*	Write your function declarations below this block.
	*
	**************************************************************/

	// Declaration function clearGraph
	void clearGraph();

	// Declaration of destructor
	~Graph();

	// Declaration function bfsTraversal
	void bfsTraversal(char vertex, vector<char>& bfs) const;

	// Declaration function dfsTraversal
	void dfsTraversal(char vertex, vector<char>& dfs) const;

private:

	char *vertices;			//will point to an array of vertices
    int **matrix;			//will point to the adjacency matrix
    int maxVertices;		//max number of vertices the graph can hold (capacity)
    int numOfVertices;		//total number of vertices

};

#endif
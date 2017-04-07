#include "Graph.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

const string FILE_NAME = "graph_data.txt";

int main()
{
	Graph g1;
	g1.createGraph(FILE_NAME);
	cout << g1 << endl;

	vector<char> bfsSequence;
	vector<char> dfsSequence;

	cout << "\nBFS traversal: ";
	g1.bfsTraversal('A', bfsSequence);		// 0 is the first vertex of the BFS

	for (char vertex : bfsSequence)
		cout << vertex << " ";

	cout << "\nDFS traversal: ";
	g1.dfsTraversal('A', dfsSequence);		// 0 is the first vertex of the BFS

	for (char vertex : dfsSequence)
		cout << vertex << " ";


	cout << endl;
	system("Pause");
    return 0;
}


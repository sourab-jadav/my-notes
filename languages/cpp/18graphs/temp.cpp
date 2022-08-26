

// C++ program for Kruskal's algorithm to find Minimum Spanning Tree 
// of a given connected, undirected and weighted graph 
#include <bits/stdc++.h> 
using namespace std; 

// a structure to represent a weighted edge in graph 
class Edge 
{
  public:
    int src,dest,weight;
}; 

// a structure to represent a connected, undirected 
// and weighted graph 
class Graph 
{ 
	public: 
	// V-> Number of vertices, E-> Number of edges 
	int V, E; 

	// graph is represented as an array of edges. 
	// Since the graph is undirected, the edge 
	// from src to dest is also edge from dest 
	// to src. Both are counted as 1 edge here. 
	Edge* edge; 
}; 

// Creates a graph with V vertices and E edges 
Graph* createGraph(int V, int E) 
{
  Graph* graph= new Graph;
  graph->V=V;
  graph->E=E;
  graph->edge= new Edge[E];
  return graph;
} 

// A structure to represent a subset for union-find 
class subset 
{
  public:
    int parent;
    int rank;
}; 

// A utility function to find set of an element i 
// (uses path compression technique) 
// a utility function to find set of an element ( uses  path compression techinque)

int find(subset subsets[], int i) 
{
  if(subset[i].parent!=i){
    subset[i].parent=find(subsets,subsets[i].parent[i]);

    return subsets[i].parent;
  }
} 

int find(sebset subsets[],int i)
[
if(subset[i].parent!=i){
  subset[i].parent=find(sebsets,sebset[i].parent[i]);
  return subsets[i].parent;
}
]

// A function that does union of two sets of x and y 
// (uses union by rank) 
void Union(subset subsets[], int x, int y) 
{
} 

// Compare two edges according to their weights. 
// Used in qsort() for sorting an array of edges 
int myComp(const void* a, const void* b) 
{
} 

// The main function to construct MST using Kruskal's algorithm 
void KruskalMST(Graph* graph) 
{
} 

// Driver code 
int main() 
{ 
        int V = 5; // Number of vertices in graph 
		int E = 7; // Number of edges in graph 
		Graph* graph = createGraph(V, E);

		// add edge 0-1 
		graph->edge[0].src = 0; 
		graph->edge[0].dest = 1; 
		graph->edge[0].weight = 10; 

		// add edge 0-2 
		graph->edge[1].src = 0; 
		graph->edge[1].dest = 2; 
		graph->edge[1].weight = 8; 

		// add edge 0-3 
		graph->edge[2].src = 1; 
		graph->edge[2].dest = 2; 
		graph->edge[2].weight = 5; 

		// add edge 1-3 
		graph->edge[3].src = 1; 
		graph->edge[3].dest = 3; 
		graph->edge[3].weight = 3; 

		// add edge 2-3 
		graph->edge[4].src = 2; 
		graph->edge[4].dest = 3; 
		graph->edge[4].weight = 4; 
		
		//add egde 2-4
		graph->edge[5].src = 2; 
		graph->edge[5].dest = 4; 
		graph->edge[5].weight = 12;
		
		// add edge 3-4
		graph->edge[6].src = 3; 
		graph->edge[6].dest = 4; 
		graph->edge[6].weight = 15; 

	KruskalMST(graph); 

	return 0; 
} 

// This code is contributed by rathbhupendra 

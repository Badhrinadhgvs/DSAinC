#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

// Adjacency matrix representation of the graph
int graph[MAX_NODES][MAX_NODES];
// Visited array to keep track of visited nodes
int visited[MAX_NODES];
// Number of nodes in the graph
int numNodes;

// Function to perform Depth First Search
void dfs(int v)
{
  // Mark the current node as visited
  visited[v] = 1;
  printf("%d ", v);

  // Recur for all the vertices adjacent to this vertex
  for (int i = 0; i < numNodes; i++)
  {
    if (graph[v][i] && !visited[i])
    {
      dfs(i);
    }
  }
}

// Function to add edge to the graph
void addEdge(int src, int dest)
{
  graph[src][dest] = 1;
  graph[dest][src] = 1; // For undirected graph
}

// Driver code
int main()
{
  int src, dest;

  // Initialize graph
  numNodes = 6; // Example number of nodes
  for (int i = 0; i < numNodes; i++)
  {
    for (int j = 0; j < numNodes; j++)
    {
      graph[i][j] = 0;
    }
    visited[i] = 0;
  }

  // Add edges
  addEdge(0, 1);
  addEdge(0, 2);
  addEdge(1, 3);
  addEdge(1, 4);
  addEdge(2, 5);

  // Perform DFS starting from node 0
  dfs(0);

  return 0;
}

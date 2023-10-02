#include <iostream>
#include <list>

using namespace std;

class Graph
{
    int numVertices;
    list<int> *adjLists;
    bool *visited;

public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void BFS(int startVertex);
    void DFS(int vertex);
};

Graph::Graph(int vertices)
{
    numVertices = vertices;
    adjLists = new list<int>[vertices];
    visited = new bool[vertices];
}

void Graph::addEdge(int src, int dest)
{
    adjLists[src].push_back(dest);
    adjLists[dest].push_back(src);
}

void Graph::BFS(int startVertex)
{
    visited = new bool[numVertices];
    for (int i = 0; i < numVertices; i++)
        visited[i] = false;

    list<int> queue;

    visited[startVertex] = true;
    queue.push_back(startVertex);

    list<int>::iterator i;

    while (!queue.empty())
    {
        int currVertex = queue.front();
        cout << "Visited " << currVertex << " ";
        queue.pop_front();

        for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i)
        {
            int adjVertex = *i;
            if (!visited[adjVertex])
            {
                visited[adjVertex] = true;
                queue.push_back(adjVertex);
            }
        }
    }
}

void Graph::DFS(int vertex)
{
    visited[vertex] = true;
    list<int> adjList = adjLists[vertex];

    cout << vertex << " ";

    list<int>::iterator i;
    for (i = adjList.begin(); i != adjList.end(); ++i)
        if (!visited[*i])
            DFS(*i);
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    // g.BFS(2);
    g.DFS(2);
    return 0;
}

// BFS Pseudo Code
// BFS(G, s)                   //Where G is the graph and s is the source node
//     let Q be a queue.
//     Q.enqueue( s )           //Inserting s in queue until all its neighbour vertices are marked.
//     mark s as visited.
//     while ( Q is not empty):
//         v  =  Q.dequeue( )  //Removing that vertex from queue,whose neighbour will be visited now
//         if( v is the goal):
//             return v
//         for all edges from v to w in G.adjacentEdges(v) do
//             if w is not visited :
//                 Q.enqueue( w )         //All the neighbors of v will be visited now
//                 mark w as visited

// DFS Pseudo Code
// DFS-iterative(G, s):                  //Where G is the graph and s is the source node
//     let S be stack
//     S.push( s )                       //Inserting s in stack
//     mark s as visited.
//     while ( S is not empty):
//         v  =  S.pop( )                //Removing that vertex from stack,whose neighbour will be visited now
//         if( v is the goal):
//             return v
//         for all edges from v to w in G.adjacentEdges(v) do
//             if w is not visited :
//                 S.push( w )           //All the neighbors of v will be visited now
//                 mark w as visited

// DFS-recursive(G, s):                  //Where G is the graph and s is the source node
//     mark s as visited.
//     if( s is the goal):
//         return s
//     for all edges from s to w in G.adjacentEdges(s) do
//         if w is not visited :
//             DFS-recursive(G, w )    //All the neighbors of s will be visited now
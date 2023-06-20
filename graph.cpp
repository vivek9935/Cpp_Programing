#include <bits/stdc++.h> 
using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;
    
    void addEdge(int u, int v, bool direction)
    {
        // Function to add an edge to the graph
        
        // 0 = undirected
        // 1 = directed
        
        // Add v to the adjacency list of u
        adj[u].push_back(v);
        
        // If the graph is undirected, add u to the adjacency list of v as well
        if (direction == 0)
            adj[v].push_back(u);
    }
    
    void printAdj()
    {
        // Function to print the adjacency list of the graph
        
        // Iterate over each vertex in the adjacency list
        for (auto i : adj)
        {
            // Print the vertex number
            cout << i.first << "->";
            
            // Iterate over each neighbor of the vertex
            for (auto j : i.second)
                cout << j << " , "; // Print the neighbor
            cout << endl;
        }
    }
};

int main()
{
    int n, m;
    
    cout << "Enter the number of nodes: ";
    cin >> n;
    
    cout << "Enter the number of Edges: ";
    cin >> m;
    
    graph g;
    
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        
        // Create an undirected edge between u and v
        g.addEdge(u, v, 0);
    }
    
    cout << "Adjacency List:" << endl;
    g.printAdj();
    
    return 0;
}

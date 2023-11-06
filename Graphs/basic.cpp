#include <bits/stdc++.h>
using namespace std;


// Input of Graphs:
// 5 6 : n = 5, m = 6 (number of nodes, number of edges)
// 1 2 : edge 1-2
// 1 3  
// 2 4
// 3 4 
// 3 5 
// 4 5

// Explanation:
// Number of nodes, n = 5
// Number of edges, m = 6
// Next m lines represent the edges.

int main()
{
    int n, m;
    cin >> n >> m;
    // adjacency matrix for undirected graph
    // time complexity: O(n)
    int adj[n+1][n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1  // this statement will be removed in case of directed graph
    }
    return 0;
}

// Adjacency List
// time complexity: O(m)
// space complexity: O(m)
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // for undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
        // for directed graph
        // adj[u].push_back(v);
    }
    return 0;
}

// Weighted Graphs
// time complexity: O(m)
// space complexity: O(m)
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        // for undirected graph
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
        // for directed graph
        // adj[u].push_back({v, wt});
    }
    return 0;
}


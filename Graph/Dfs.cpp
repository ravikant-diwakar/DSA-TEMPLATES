#include <bits/stdc++.h>
using namespace std;

// creating a adjacency list using map

void dfs(unordered_map<int, vector<int>> &adj, int u, unordered_map<int, bool> &vis)
{
    if (visited[u] == true)
    {
        return;
    }
    visited[u] = true;
    for (auto &v : adj[u])
    {
        dfs(adj, v, vis)
    }
}

int main()
{

    vector<vector<int>> v{{1, 2}, {1, 3}, {0, 1}, {2, 3}};
    unordered_map<int, vector<int>> adj;
    for (auto i : v)
    {
        int v = i[0];
        int u = i[1];
        adj[v].push_back(u);
        // if it is a bidirected graph
        // adj[u].push_back(v);
    }

    unordered_map<int, bool> visited;
    dfs(adj, 0, visited);
}

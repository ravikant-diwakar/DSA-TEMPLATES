#include <bits/stdc++.h>
using namespace std;

// creating a adjacency list using map

void bfs(unordered_map<int, vector<int>> &adj, int u, unordered_map<int, bool> &vis)
{
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int frontnode = q.front();
        visited[frontnode] = true;
        q.pop();
        for (auto &i : adj[u])
        {
            if (visited[i] != true)
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
    return;
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
    bfs(adj, 0, visited);
}

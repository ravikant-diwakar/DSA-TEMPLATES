#include <bits/stdc++.h>
using namespace std;

// kahns algorithm (topological sort using BFS)
vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    unordered_map<int, int> indegree;
    vector<int> result;
    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        for (auto &edge : adj[i])
        {
            indegree[edge]++;
        }
    }
    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    vector<int> res;
    while (!q.empty())
    {
        int u = q.front();
        res.push_back(u);
        q.pop();
        for (auto &v : adj[u])
        {
            indegree[v]--;
            if (indegree[v] == 0)
                q.push(v);
        }
    }
    return res;
}

int main()
{
    vector<vector<int>> v{{1, 2}, {1, 3}, {0, 1}, {2, 3}};
    vector<int> res = topoSort(3, v);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}
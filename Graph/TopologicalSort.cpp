#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], int V, unordered_map<int, bool> &vis, stack<int> &st)
{
    vis[V] = true;
    for (auto &i : adj[V])
    {
        if (vis[i] != true)
        {
            dfs(adj, i, vis, st);
        }
    }
    st.push(V);
}
vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    stack<int> st;
    vector<int> res;
    unordered_map<int, bool> vis;
    for (int i = 0; i < V; i++)
    {
        if (vis[i] != true)
        {
            dfs(adj, i, vis, st);
        }
    }

    while (!st.empty())
    {
        res.push_back(st.top());
        st.pop();
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
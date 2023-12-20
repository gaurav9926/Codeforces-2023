#include <bits/stdc++.h>
using namespace std;

void dfs(int node, int parent, vector<vector<int>> &adj, int &ans)
{
    if (adj[node].size() == 1)
    {
        ans++;
    }
    for (int i = 0; i < adj[node].size(); i++)
    {
        if (adj[node][i] != parent)
            dfs(adj[node][i], node, adj, ans);
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adj(n, vector<int>(0, 0));
        for (int i = 0; i < n - 1; i++)
        {
            int j, k;
            cin >> j >> k;
            adj[j - 1].push_back(k - 1);
            adj[k - 1].push_back(j - 1);
        }
        // run dfs and calculate no of leaves
        int leaves = 0;
        dfs(0, -1, adj, leaves);
        cout << floor((leaves + 1) / 2) << "\n";
    }
    return 0;
}
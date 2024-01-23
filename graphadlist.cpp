// Enter the number of edges: 3
// Enter edge 1 (start end): 1 2
// Enter edge 2 (start end): 2 3
// Enter edge 3 (start end): 3 1
// 0 -> 
// 1 -> 2 3 
// 2 -> 1 3
// 3 -> 2 1
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n; // no of vertices
    int e;
    cin >> e; // no of edges
    vector<int> adj[n + 1];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v; // u=start point,v=end point
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << "->";
        for (auto j : adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
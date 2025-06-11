#include <iostream>
#include <vector>
using namespace std; 
int main()
{
    int n, m, i, c = 0;
    cin >> n >> m;
    vector <vector <int> > graph(n, vector <int>());
    for (i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (i = 0; i < n; i++) {
        c += (graph[i].size());
    }
    cout << "Qirralar soni: " << c / 2 << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std; 
int main()
{
    int n, m, i;
    cin >> n >> m;
    vector <vector <int> > graph(n, vector <int>());
    for (i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    for (i = 0; i < n; i++) {
        cout << i << " - tugundan " << graph[i].size() << " qirra chiqadi" << endl;
    }
    return 0;
}
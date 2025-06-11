#include <iostream>
#include <vector>
using namespace std; 
int main()
{
    int n, m, i, k;
    cin >> n >> m >> k;
    vector <vector <int> > graph(n, vector <int>());
    for (i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout << k << " - tugun bilan ";
    for (i = 0; i < graph[k].size(); i++) {
        cout << graph[k][i] << " ";
    }
    cout <<"tugunlari bog'langan" << endl;
    return 0;
}
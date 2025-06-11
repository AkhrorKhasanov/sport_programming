#include <iostream>
#include <vector>
using namespace std; 
int main()
{
    int n, m, i, maks = 0;
    cin >> n >> m;
    vector <vector <int> > graph(n, vector <int>());
    for (i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    for (i = 0; i < n; i++) {
        if (graph[i].size() > maks) {
            maks = graph[i].size();
        }
    }
    cout << "Eng ko'p chiqish qirralari bo'lgan tugunlar: ";
    for (i = 0; i < n; i++) {
        if (graph[i].size() == maks) {
            cout << i << " ";
        }
    }
    return 0;
}
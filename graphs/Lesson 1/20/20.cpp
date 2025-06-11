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
    vector <int> a(n, 0);
    for (i = 0; i < n; i++) {
        for (int j = 0; j < graph[i].size(); j++) {
            a[graph[i][j]]++;
        }
    }
    cout << "Kirish va chiqish qirralari soni teng bo'lgan tugunlar: ";
    for (i = 0; i < n; i++) {
        if (a[i] == graph[i].size()) {
            cout << i << " ";
        } 
    }
    return 0;
}
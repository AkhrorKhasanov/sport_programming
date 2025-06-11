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
        if (graph[i].size() % 2 == 1) {
            cout << i << " - tugun toq qirrali" << endl;
            c++;
        }
    }
    cout << "Toq qirrali tugunlar soni: " << c << endl;
    return 0;
}
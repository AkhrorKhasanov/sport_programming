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
        if (graph[i].size() % 2 == 0) {
            cout << i << " - tugun juft qirrali" << endl;
            c++;
        }
    }
    cout << "Juft qirrali tugunlar soni: " << c << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std; 
int main()
{
    int n, m, i, a, b;
    bool flag = false;
    cin >> n >> m >> a >> b;
    vector <vector <int> > graph(n, vector <int>());
    for (i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (i = 0; i < graph[a].size(); i++) {
        if (graph[a][i] == b) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << a << " - tugun bilan " << b << " - tugun o'rtasida qirra mavjud" << endl;
    } else {
        cout << a << " - tugun bilan " << b << " - tugun o'rtasida qirra mavjud emas" << endl;
    }
    return 0;
}
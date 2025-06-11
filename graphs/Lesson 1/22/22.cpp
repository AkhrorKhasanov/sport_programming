// Yo'naltirilgan uchun
// #include <iostream>
// #include <vector>
// using namespace std; 
// int main()
// {
//     int n, m, i, j;
//     cin >> n >> m;
//     vector <vector <int> > graph(n, vector <int>());
//     for (i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         graph[u].push_back(v);
//     }
//     vector <int> a(n, 0);
//     for (i = 0; i < n; i++) {
//         for (int j = 0; j < graph[i].size(); j++) {
//             a[graph[i][j]]++;
//         }
//     }
//     for (i = 0; i < n; i++) {
//         cout << i << " - tugundan " << graph[i].size() << " qirra chiqadi, " << a[i] << " qirra kiradi." << endl;
//     }
//     return 0;
// }

// Yo'naltirilmagan uchun
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
        graph[v].push_back(u);
    }
    for (i = 0; i < n; i++) {
        cout << i << " - tugundan " << graph[i].size() << " qirra chiqadi, " << graph[i].size() << " qirra kiradi." << endl;
    }
    return 0;
}
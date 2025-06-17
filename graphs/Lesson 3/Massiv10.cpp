#include <iostream>
#include <queue>
using namespace std;
int main() {
    
    int n, item, i, m, k, p = 1;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
    }
    cin >> m >> k;
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (el == m || el == k) {
            p *= el;
        }
        q.pop();
    }

   
    cout << p;

    return 0;
}
#include <iostream>
#include <queue>
using namespace std;
int main() {
    
    int n, item, i, l, k, s = 0;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
    }
    cin >> k >> l;
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (i >= k - 1 && i <= l - 1) {
            s += el * el * el;
        }
        q.pop();
    }

   
    cout << s;

    return 0;
}
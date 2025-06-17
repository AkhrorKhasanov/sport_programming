#include <iostream>
#include <queue>
using namespace std;
int main() {
    
    int n, item, i, s = 0;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
    }
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (i % 2 == 0) {
            s += el;
        }
        q.pop();
    }

   
    cout << s;

    return 0;
}
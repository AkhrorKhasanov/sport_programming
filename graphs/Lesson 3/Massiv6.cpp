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
        s += q.front() * q.front();
        q.pop();
    }

    cout << s;

    return 0;
}
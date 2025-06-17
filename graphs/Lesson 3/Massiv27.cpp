#include <iostream>
#include <queue>
using namespace std;
int main() {
    
    int n, item, i, mini = 101;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
        if (mini > item) {
            mini = item;
        }
    }
    mini = mini * mini;
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (el < 0) {
            cout << mini << " ";
        } else {
            cout << el << " ";
        }
        q.pop();
    }

    return 0;
}
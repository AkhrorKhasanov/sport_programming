#include <iostream>
#include <queue>
using namespace std;
int main() {
    
    int n, item, i, maks = -101, k, k_val;
    queue <int> q;
    queue <int> q2;
    queue <int> res;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
        q2.push(item);
        if (maks < item) {
            maks = item;
        }
        if (i == k - 1) {
            k_val = item;
        }
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        int item2 = q2.front();
        if (i == k - 1) {
            k_val = item2;
        }
        q2.pop();
    }
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (i == k - 1) {
            res.push(maks);
        } else if (el == maks) {
            res.push(k_val);
        } else {
            res.push(el);
        }
        q.pop();
    }

    for (i = 0; i < n; i++) {
        cout << res.front() << " ";
        res.pop();
    }

    return 0;
}
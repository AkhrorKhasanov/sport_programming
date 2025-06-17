#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    
    int n, item, i, s = 0;
    double res, avg_log;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
        s += item;
    }
    avg_log = log((s * 1.0) / n);
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (el < 0) {
            cout << fixed << setprecision(2) << round(avg_log * 100.0) / 100.0 << " ";
        } else {
            cout << fixed << setprecision(2) << round(el * 100.0) / 100.0 << " ";
        }
        q.pop();
    }
    
    


    return 0;
}
#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    
    int n, a, b, i, mini = 101;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        int item;
        cin >> item;
        q.push(item);
        if (item < mini) {
            mini = item;
        }
    }
    cin >> a >> b;
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (i >= a - 1 && i <= b - 1) {
            cout << fixed << setprecision(1) << round(10 * ((1.0 * el) / mini)) / 10.0 << " ";
        } else {
            cout << fixed << setprecision(1) << round(10 * (el)) / 10.0 << " ";
        }
        q.pop();
    }
    


    return 0;
}
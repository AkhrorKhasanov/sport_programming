#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    
    int n, a, b, i, s = 0;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        int item;
        cin >> item;
        q.push(item);
    }
    cin >> a >> b;
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (!(i >= a - 1 && i <= b - 1)) {
            s += el;
        } 
        q.pop();
    }

    double avg = round(100 * s / 100.0) / (n - b + a - 1);

    cout << fixed << setprecision(2) << avg;

    return 0;
}
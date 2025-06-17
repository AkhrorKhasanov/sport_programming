#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    
    int n, item, i, s = 0, c = 0;
    double res;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
    }
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (el < 0) {
            s += el;
            c++;
        } 
        q.pop();
    }

   
    res = round(((s * 1.0) / c) * 100.0) / 100.0; 
    cout << fixed << setprecision(2) << res << " ";

    return 0;
}
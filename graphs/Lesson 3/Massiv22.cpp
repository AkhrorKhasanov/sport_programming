#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    
    int n, item, i, s1 = 0, s2 = 0;
    double res;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
    }
    for (i = 0; i < n; i++) {
        int el = q.front();
        s1 += el * el;
        s2 += el;
        q.pop();
    }

    cout << s1 << endl;
    res = round(((s2 * 1.0) / n) * 100.0) / 100.0; 
    cout << fixed << setprecision(2) << res;


    return 0;
}
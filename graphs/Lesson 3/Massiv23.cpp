#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    
    int n, item, i, s = 0;
    double res;
    queue <int> q;
    queue <int> q2;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
        q2.push(item);
    }
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (i % 2 == 1) {
            s += el;
        }
        q.pop();
    }
    for (i = 0; i < n; i++) {
        int el2 = q2.front();
        if (el2 % 2 == 1) {
            res = round(((el2 * 1.0) / s) * 100.0) / 100.0; 
        } else {
            res = round((el2 * 100.0)) / 100.0; 
            
        }
        cout << fixed << setprecision(2) << res << " ";
        q2.pop();
    }
    


    return 0;
}
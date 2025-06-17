#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    
    int n, item, i;
    unsigned long long p = 1;
    double res;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
    }
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (el % 2 == 0 || el % 5 == 0) {
            p *= el;
        } 
        q.pop();
    }

   
    res = round((sin(p)) * 100.0) / 100.0; 
    cout << fixed << setprecision(2) << res << " ";

    return 0;
}
#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    
    int n, item, i, m;
    double s = 0;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
    }
    cin >> m;
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (el > m) {
            s += log(el);
        }
        q.pop();
    }

   
    s = round(s * 100.0) / 100.0; 
    cout << fixed << setprecision(2) << s << " ";

    return 0;
}
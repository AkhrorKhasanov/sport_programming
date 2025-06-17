#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    
    int n, item, i, maks = -1;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
        if (maks < item) {
            maks = item;
        }
    }

    for (i = 0; i < n; i++) {
        int el = q.front();
        double res = round(((double)el / maks) * 100.0) / 100.0; 
        cout << fixed << setprecision(2) << res << " ";
        q.pop();
    }


    return 0;
}
#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;
int main() {
    int n, i, c = 0, s1 = 0, s2 = 0;
    double avg1, avg2;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        int item;
        cin >> item;
        q.push(item);
        s1 += item;
    }
    
    avg1 = (1.0 * s1) / n;
    
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (el < avg1) {
            s2 += el;
            c++;
        }
        q.pop();
    }
    
    avg2 = (1.0 * s2) / c;
    
    cout << fixed << setprecision(2) << avg2 << endl;
    
    return 0;
}
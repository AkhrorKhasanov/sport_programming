#include <iostream>
#include <queue>
using namespace std;
int main() {
    
    int n, item, i, x, y, c = 0;
    queue <int> q;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> item;
        q.push(item);
    }
    cin >> x >> y;
    for (i = 0; i < n; i++) {
        int el = q.front();
        if (el < x || el > y) {
            c++;
        }
        q.pop();
    }

   
    cout << c;

    return 0;
}
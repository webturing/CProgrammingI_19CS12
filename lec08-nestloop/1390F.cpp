#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    while(a--) {
        int n = 10, m = 16;
        cin >> n >> m;
        bool flag = false; ///false=0 true=1
        for(int x = 0; x <= n; x++)
            for(int y = 0; y <= n; y++) {
                if(x + y == n && 2 * x + 4 * y == m) {
                    cout << x << " " << y << endl;
                    flag = true;
                    break;
                }
            }
        if(!flag) {
            cout << "No answer" << endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    ///Input Process Output
    int N;
    cin >> N;
    while(N--) {
        int n = 5;
        cin >> n;
        int s = 0;
        for(int i = 1; i <= n; i++) {
            s += i * (i + 1) / 2;
        }
        cout << s << endl;
    }
    return 0;
}

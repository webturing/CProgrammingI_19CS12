#include<bits/stdc++.h>
using namespace std;
int main() {
    for(int n = 2; n <= 1000; n++) {
        int s = 1;
        for(int i = 2; i * i <= n; i++ ) {
            if(n % i == 0) {
                s += i;
                if(i * i != n)
                    s += n / i;
            }
        }
        if(s == n) {
            cout << n << " its factors are 1";
            for(int i = 2; i <= n / 2; i++) {
                if(n % i == 0) {
                    cout << "," << i;
                }
            }
            cout << endl;
        }
    }
    return 0;
}

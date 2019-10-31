#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin >> n) {
        int s = 1;
        for(int k = n; k >= 2; k -= 2) {
            s *= k;
        }
        cout << s << endl;
    }
    return 0;
}

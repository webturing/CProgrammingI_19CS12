#include<bits/stdc++.h>
using namespace std;
int main() {
    ///Input Process Output
    int N;
    cin >> N;
    while(N--) {
        int n = 5;
        cin >> n;
        cout << n*(n + 1)*(n + 2) / 6 << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int k = 2999;
    for (int i = 0; i < 5; i++) {
        cout << a[(i + k) % 5] << " ";
    }
    return 0;
}

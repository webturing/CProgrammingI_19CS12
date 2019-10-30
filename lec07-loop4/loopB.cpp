#include<bits/stdc++.h>
using namespace std;
///2、	有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
int main() {
    int tot = 0;
    for(int n = 123; n <= 432; n++) {
        int c = n % 10;
        int b = n / 10 % 10;
        int a = n / 100;
        if(a < 1 || a > 4)continue;
        if(b < 1 || b > 4)continue;
        if(c < 1 || c > 4)continue;
        if(a == b || b == c || a == c)continue;
        ++tot;
        cout << a << " " << b << " " << c << endl;
    }
    cout << tot << endl;
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)swap(a, b);//t=a;a=b;b=t;
    if (b > c)swap(b, c);
    if (a > b)swap(a, b);

    cout << a << " " << b << " " << c;
    return 0;
}
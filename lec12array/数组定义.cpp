#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[10];
    cout << dec << (int) a << endl;  ///�������ʼ��ַ a =&a[0]
    cout << dec << (int) (a + 1) << endl;  ///&a[1]=a+1

    cout << dec << (int) (a + 7) << endl;  ///&a[7]=a+7
    cout << dec << (int) (&a[7]) << endl;  ///&a[7]=a+7
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << pow(2, 0) + pow(2, 8) + pow(2, 16) + pow(2, 24) << endl;
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int n = sizeof(a) / sizeof(a[0]);  //���ּ������鳤�ȷ����������ں���������
// sort(a, a + n);  //��������Ĭ���Ƿǽ��򣩣����ñ�ע��
    // sort(a, a + n, greater<int>());  //�Ž���
    // sort(a, a + n, less<int>());  //�����29����ȫ�ȼۣ�29��ʡ����Ĭ�ϲ���
    // memset(a, -1, sizeof(a));  //���ֽڹ��������ڷ��ֽڣ��������� ֻ����0��-1
    //fill(a, a + n, 1);  //�ǳ��Ƽ������԰�a[0]~a[n-1]����Ϊval
    reverse(a, a + n);  //���鷴ת
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    //����API

}

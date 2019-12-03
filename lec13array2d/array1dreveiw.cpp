#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int n = sizeof(a) / sizeof(a[0]);  //���ּ������鳤�ȷ����������ں���������
    int Sum = 0;                       //�������
    for (int i = 0; i < n; i++) {
        Sum += a[i];
    }
    cout << "Sum=" << Sum << endl;
    int Max = INT_MIN;  // Min=INT_MAX, //���������С��ֵ��ע���ֵ
    for (int i = 0; i < n; i++) {
        if (a[i] > Max) Max = a[i];
    }
    cout << "Max=" << Max << endl;
    int key = 7;   //�������Բ��ҵ�һ�����ֹؼ��ʵ�λ��
    int pos = -1;  // �ȼ���û���ҵ���
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {  //�ҵ������pos���˳�ѭ��
            pos = i;
            break;
        }
    }
    if (pos >= 0) {
        cout << key << " was found at first position:" << pos << endl;
    } else {
        cout << "NOT Found!" << endl;
    }
}

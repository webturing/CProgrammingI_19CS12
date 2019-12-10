#include<bits/stdc++.h>

using namespace std;

int main() {
    char s[100] = "abcd";
    strcat(s, s);
    cout << s << endl;
    char t[100] = "dab";
    char *p = strstr(s, t);

    if (p) {
        cout << "Yes" << endl;
        cout << (p - s) << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

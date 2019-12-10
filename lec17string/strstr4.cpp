#include<bits/stdc++.h>

using namespace std;

int main() {
    char s[100] = "abcdabasdfjkabasdababasdf";
    char t[100] = "ab";
    int from = 0;
    int tot = 0;
    while ((from = strstr(s + from, t) - s) >= 0) {
        from += strlen(t);//
        ++tot;
    }
    cout << tot << endl;

    return 0;
}

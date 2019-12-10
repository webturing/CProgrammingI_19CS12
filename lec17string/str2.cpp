#include<bits/stdc++.h>

using namespace std;


int main() {
    char s[100];
    scanf("%s", s);

    /**array methods*/
    int i = 0;
    while (s[i] != '\0')i++;
    printf("%d\n", i);
    /**pointer methods*/
    char *p = s;
    while (*p)p++;
    printf("%d\n", p - s);
    /**lib methods*/
    printf("%d\n", strlen(s));//m3
    return EXIT_SUCCESS;
}

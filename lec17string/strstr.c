#include<bits/stdc++.h>

using namespacestd;

               int main() {
    char text[] = "hello world!";
    char key[] = "o";
    char *p = strstr(text, key);
    int pos = p - text;
    printf("%d\n", pos);

    p = strstr(p + strlen(key), key);
    pos = p - text;
    printf("%d\n", pos);
}

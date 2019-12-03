#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main() {
    char s[100];
    scanf("%s", s);
    printf("%10s", s);
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

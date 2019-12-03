#include<stdio.h>

int main() {

    char a[100] = "hello";
    char *b = "world";
    a[0]++;
    puts(a);
    char c[1000];
    b = c;
    strcpy(b, a);//b=a;
    //a=b;//error should strcpy(a,b)
    //b[0]++;
    // puts(a);


}

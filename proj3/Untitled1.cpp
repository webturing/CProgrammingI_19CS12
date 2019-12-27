#include<bits/stdc++.h>
using namespace std;
int main()
{///a[i]=*(a+i)
    ///p[0]=*p
    int a=3;
    const int b=4;
    cout<<"a="<<a<<",b="<<b<<endl;
   // b=4;
   cout<<"&a="<<(&a)<<endl;
    cout<<"&b="<<(&b)<<endl;
    int *p;
    p=&a;
    //++*p;
    ++p[0];
    cout<<"a="<<a<<",b="<<b<<endl;
    ++p[-1];
    cout<<"a="<<a<<",b="<<b<<endl;
    return 0;
}

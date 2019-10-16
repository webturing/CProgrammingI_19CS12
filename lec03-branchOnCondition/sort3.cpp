#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int x,y,z;
	
	x=a;
	if(b<x)x=b;
	if(c<x)x=c;
	
	z=a;
	if(b>z)z=b;
	if(c>z)z=c;
	
	y=a+b+c-x-z;	
	
	cout<<x<<" "<<y<<" "<<z;
	return 0;
}

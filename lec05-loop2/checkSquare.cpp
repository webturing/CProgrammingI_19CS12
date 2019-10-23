#include<bits/stdc++.h>
using namespace std;
int main() {
	int n=7744;
	int flag=0;
	for(int x=0;x<=n;x++){
		if(x*x==n){
			cerr<<x<<endl;
			flag=1;
			break;
		}		
	}
	cout<<flag<<endl;

	return 0;
}

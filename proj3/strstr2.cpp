#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100]="abcdabasdfjkabasdababasdf";
	char t[100]="ab";
	int from=0;
	int tot=0;
	while(true){
		char*p=strstr(s+from,t);
		if(p==NULL)break;
		from=p-s;
		cout<<from<<endl;
		from+=strlen(t);//
		++tot;
	}
	cout<<tot<<endl;

	return 0;
}

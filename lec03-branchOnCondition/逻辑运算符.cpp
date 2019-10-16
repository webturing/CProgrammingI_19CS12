#include<bits/stdc++.h>
using namespace std;
int main() {
	//and && or || not !
	cout<<(5>4 && 4>3)<<endl;//&& true and true
	cout<<(5>6 || 4>3)<<endl;//true
	cout<<(7+5>12||4>3||7-2); 
	//括号>算术运算符>比较运算符>逻辑运算符>赋值运算符 
	cout<<!(5>4) ||( 6>7 && 7<8));
	cout<<-3-3<<endl;
	return 0;
}

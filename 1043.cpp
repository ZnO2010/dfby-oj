/*
题目描述
某车站行李托运收费标准是：10公斤或10公斤以下，收费2.5元，超过10公斤的行李，按每超过1公斤增加1.5元进行收费。 试编一程序，输入行李的重量，算出托运费。
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	if(n<=10){
		cout<<fixed<<setprecision(2)<<2.50;
	}
	else{
		cout<<fixed<<setprecision(2)<<2.5+(n-10)*1.5;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int f(int n){
	return n*n*n;
}
int a,b,c;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i=100;i<=999;i++){
    	a=i/100; b=i/10%10; c=i%10;
    	if(f(a)+f(b)+f(c)==i)cout<<i<<endl;
	}
	return 0;
}

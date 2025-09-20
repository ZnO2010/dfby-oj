#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<2)return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}
int main(){
    int n,sl=0;cin>>n;
    for(int i=2;i<n;i++){
        if(prime(i)){
            sl++;
            cout<<i<<" ";
            if(sl%5==0)cout<<"\n";
        }
    }
    return 0;
}

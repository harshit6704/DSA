#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int m=n;
    if(n==0){
        cout<<1;
    }
    else{
    int mask=0;
    while(m){
        mask=(mask<<1)|1;
        m=m>>1; 
    }    
    int ans=(~n)&mask;
    cout<<ans;
    }
}
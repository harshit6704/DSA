#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int ans=0;
    int p=1;
    while(n!=0){
    int digit=n%2;
    ans=(digit*p)+ans;
    n=n/2;
    p=p*10;
    }
    cout<<ans;
}
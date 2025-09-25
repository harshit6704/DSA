#include<bits/stdc++.h>
using namespace std;
int AP(int n ,int start,int diff){
    // int i=1;
    // int ans=start;
    // while(i<n){
    // ans=(ans+diff);
    // i++;
    // }
    // return ans;
    return start+((n-1)*diff);
}
int main(){
    int n,s,d;
    cin>>n>>s>>d;
    cout<<AP(n,s,d);
}
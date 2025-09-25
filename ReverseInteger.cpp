#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;cin>>x;
    int ans=0;
        
        while(x){
            int rem=x%10;
            ans= (ans*10) +rem;
            x=x/10;
            
            
        }
    cout<<ans;
}
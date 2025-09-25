#include<bits/stdc++.h>
using namespace std;

bool powof2(int n){
 int ans=1;
bool a=0;
        for(int i=0;i<=30;i++){
            if(ans==n){
                a=1;
            }

            if(ans<INT_MAX/2)
            ans=ans*2;
        }
        return a;
    }
int main(){
    int n;cin>>n;
    bool ans=powof2(n);
    cout<<boolalpha<<ans;
}
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int factorial=0;
    if((n==0)||(n==1)){
        return 1;
    }
    else{
        factorial=n*fact(n-1);
    }
    return factorial;
}
int nCr(int n, int r){
    int num=fact(n);
    int den=fact(r)*fact(n-r);
    return num/den;
}
int main(){
int n,r;
cin>>n>>r;
cout<<"Answer is "<<nCr(n,r)<<endl;
}
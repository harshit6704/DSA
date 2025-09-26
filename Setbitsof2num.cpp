#include<bits/stdc++.h>
using namespace std;
int countSetBits(int num1,int num2){
    int count1=0;
    int count2=0;
    while(num1){
    if(num1&1){
        count1++;
    }
    num1=num1>>1;
    }
    while(num2){
    if(num2&1){
        count2++;
    }
    num2=num2>>1;
    }
    return count1+count2;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<countSetBits(n1,n2);
}
#include<bits/stdc++.h>
using namespace std;
int peakIndex(vector<int>&arr,int n){
int start=0;
int end=n-1;
int mid=start+(end-start)/2;
for(;start<end;){
    if(arr[mid]<arr[mid+1]){
        start=mid+1;
    }
    else 
    {
        end=mid;
    }
    mid=start+(end-start)/2;
}
return start;
}
int main(){
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Peak Index is "<<peakIndex(arr,n);
}
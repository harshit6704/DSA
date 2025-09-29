#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&arr,int n,int k){
int start=0;
int end=n-1;
int mid=start+(end-start)/2;
for(;start<=end;){
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]<k){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return -1;
}
int main(){
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;cin>>k;
cout<<"Searched element is at index "<<binarySearch(arr,n,k);
}
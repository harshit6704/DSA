#include<bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int>&arr,int n,int k){
int ans;
int start=0;
int end=n-1;
int mid=start+(end-start)/2;
for(;start<=end;){
    if(arr[mid]==k){
       ans=mid;
       end=mid-1;
    }
    else if(arr[mid]<k){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
}
int lastOccurence(vector<int>&arr,int n,int k){
int ans;
int start=0;
int end=n-1;
int mid=start+(end-start)/2;
for(;start<=end;){
    if(arr[mid]==k){
       ans=mid;
       start=mid+1;
    }
    else if(arr[mid]<k){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
}

int main(){
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;cin>>k;
int count= lastOccurence(arr, n,k)-firstOccurence(arr,n,k)+1;
cout<<count;
}
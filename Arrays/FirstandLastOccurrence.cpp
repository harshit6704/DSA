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
cout<<"The first occurrence of "<<k<<" is at index "<<firstOccurence(arr,n,k)<<endl;
cout<<"The Last occurrence of "<<k<<" is at index "<<lastOccurence(arr,n,k);
}
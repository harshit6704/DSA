#include<bits/stdc++.h>
using namespace std;
int getPivot(vector<int>& arr,int n){
int start=0;
int end=n-1;
int mid=start+(end-start)/2;
for(;start<end;){
    if(arr[mid]>=arr[0]){
        start=mid+1;
    }
    else{
        end=mid;
    }
    mid=start+(end-start)/2;
}
return start;
}
int binarySearch(vector<int>&arr,int s,int e,int k){
int start=s;
int end=e;
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
int findPosition(vector<int>&arr, int n ,int k){
    int pivot=getPivot(arr,n);
    if(k>=arr[pivot]&&k<=arr[n-1]){
        return (binarySearch(arr,pivot,n-1,k));
    }
    else{
        return (binarySearch(arr,0,pivot,k));
    }
}
int main(){
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;
cin>>k;
cout<<findPosition(arr,n,k);  
}
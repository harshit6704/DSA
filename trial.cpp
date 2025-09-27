#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
     cin>>arr[i];
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    }}

for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
}
}


//Swapping Alternates of Array

// int arr[10];
// for(int i=0;i<n;i++){
//      cin>>arr[i];
// }
// for(int i=0;i<n;i=i+2){
//     if(i+i<n){
//     swap(arr[i],arr[i+1]);}
// }
//   for(int i=0;i<n;i++){
//      cout<<arr[i]<<" ";

// }
// }


// Reversing and arra using swapping
// int arr[10];
// int start=0;

// int temp=0;
// for(int i=0;i<n;i++){
//      cin>>arr[i];
// }
// for(int start=0,end=n-1;start<end;start++){
//       temp=arr[start];
//       arr[start]=arr[end];
//       arr[end]=temp;
//      end--;
// }
//  for(int i=0;i<n;i++){
//      cout<<arr[i]<<" ";

// }}

// Printing an array reversed
//
//  for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// for(int i=n-1;i>=0;i--){
//     cout<<arr[i]<<" ";
// }
// }



// Linear Search
//
// int a[100];bool present=0;
// for(int i=1;i<=n;i++){
// cin>>a[i];
// }
// int find;cin>>find;
// for(int i=1;i<=n;i++){
// if(find==a[i]){
// present=1;
// }
// }
// if(present==1)
// {
// cout<<" Element is present";
// }
// else{
//     cout<<"Not present";

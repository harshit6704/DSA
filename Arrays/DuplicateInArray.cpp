#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>&arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<arr.size();i++){
        ans=ans^i;
    }
    return ans;


// sort(arr.begin(),arr.end());


// for(int i=0;i<arr.size()-1;i++){
    
//     if((arr[i]^arr[i+1])==0){
//         return arr[i];
//     }
// }
}

int main(){
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<findDuplicate(arr);
}
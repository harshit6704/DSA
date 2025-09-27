#include<bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1,int n,int m, vector<int> &arr2)
{
vector<int>ans;
// int i=0;int j=0;                     Two Pointer Approach
// while(i<n && j<m){
//     if(arr1[i]==arr2[j]){
//         ans.push_back(arr1[i]);
//         i++;
//         j++;
//     }
//     else if(arr1[i]<arr2[j]){
//         i++;
//     }
//     else{
//         j++;
//     }
// }
// return ans;
// }
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            arr2[j] = INT_MIN;
            break;   
        }
    
    }
}
return ans;

}

int main(){
    int n;cin>>n;
    

vector<int>arr1(n);
for(int i=0;i<n;i++){
    cin>>arr1[i];
}
int m;cin>>m;
vector<int>arr2(m);
for(int i=0;i<m;i++){
    cin>>arr2[i];
}
vector<int>arr;
arr =  findArrayIntersection(arr1,n,m,arr2);
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}
#include<bits/stdc++.h>
using namespace std;
vector<int>sort01(vector<int>&arr,int n){

int left=0;int right=n-1;
for(;left<right;){ 
    while(arr[left]==0 && left<right) left++;
    while(arr[right]==1 && left<right) right--;

    if(left<right){
        swap(arr[left],arr[right]);
        left++;
    right--;
    }
}
return arr;
}
int main(){
     int n;
    cin>>n;
    cout<<"Enter only "<<n<<" no. of zeroes or one"<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 vector<int>ans;
ans =  sort01(arr,n);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
}
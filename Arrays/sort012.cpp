#include<bits/stdc++.h>
using namespace std;
vector<int>sort012(vector<int>&arr,int n){
    int low =0;
    int mid =0;
    int high =n-1;
    for(;mid<=high;){
    if(arr[mid]==0) 
    {
        swap(arr[mid],arr[low]);
        low++;
        mid++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else {
        swap(arr[mid],arr[high]);
        high--;        
    }
}
return arr;
}
int main(){
     int n;
    cin>>n;
    cout<<"Enter only "<<n<<" no. of zeroes or one or two"<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 vector<int>ans;
ans =  sort012(arr,n);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
}
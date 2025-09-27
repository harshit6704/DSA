#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>&nums){
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        int x= abs(nums[i]);          //For duplicates numbers nums[x-1] would be same
        if(nums[x-1]<0){              //This checks if the number is marked negative
            ans.push_back(x);
            continue;   
        }
        nums[x-1]=nums[x-1]*-1;       //This marks the number negative if not marked;
    }
    return ans;
}

    // vector<int>ans;
    // sort(nums.begin(),nums.end());
    // for(int i=0;i<nums.size();){
    //     int count=0;
    //     for(int j=i;j<nums.size()&&nums[i]==nums[j];j++){
    //         count++;
    //     }
    //     if(count==2){
    //         // cout<<nums[i];
    //     ans.push_back(nums[i]);
    //     }
    //     i=i+count;
    // }
// return ans;   




int main(){
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
arr=  findDuplicates(arr);
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}
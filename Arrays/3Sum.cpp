#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int K){
vector<vector<int>>ans;
int n=arr.size();
sort(arr.begin(),arr.end());
for(int i=0;i<n;i++){
if(i>0 && arr[i]==arr[i-1]) continue;
    int left=i+1;int right =n-1;
    while(left<right){
        int sum = arr[i]+arr[left]+arr[right];
        if(sum==K){
        ans.push_back({arr[i],arr[left],arr[right]});
       
        while(left<right && arr[left]==arr[left+1]) left++;
        while(left<right && arr[right]==arr[right-1]) right--;
    left++;
    right--; 
    }
    else if(sum<K) {left++;}
    else {right--;}
    }
}
return ans;
}


// for(int i=0;i<arr.size();i++){
//     for(int j=i+1;j<arr.size();j++){
//         for (int k=j+1;k<arr.size();k++){
//         if((arr[i]+arr[j]+arr[k])==s){
//             vector<int>temp={arr[i],arr[j],arr[k]};
//             sort(temp.begin(), temp.end());
//             ans.push_back(temp);
//         }
//     }
// }
// }
// sort(ans.begin(),ans.end());
// ans.erase(unique(ans.begin(), ans.end()), ans.end());
// return ans;
// }
int main(){
    int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int s;cin>>s;
vector<vector<int>>ans=pairSum(arr,s);

for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){   
        cout<<(ans[i][j])<<" ";
    }
cout<<endl;
}
}
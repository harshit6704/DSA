#include<bits/stdc++.h>
using namespace std;
//will return unique element if other elements are repeating twice    (2m+1)
int findUnique(vector<int> &arr){
int ans=0;
for(int i=0;i<arr.size();i++){
    ans=ans^arr[i];
}
return ans;
}
int main(){

int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Unique element is "<<findUnique(arr);
}
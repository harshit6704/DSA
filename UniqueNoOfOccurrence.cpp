#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    // for(int i=0;i<arr.size()-1;i++){
    // for(int j=0;j<arr.size()-i-1;j++){
    // if(arr[j]>arr[j+1]){
    //     swap(arr[j],arr[j+1]);
    // }
    // }}
    vector<bool>freqUsed(arr.size()+1,false);
    for(int i=0;i<arr.size();){
        int count=0;
        for(int j=i;j<arr.size()&&arr[j]==arr[i];j++){
            count++;
        }
    if(freqUsed[count]) return false;
    freqUsed[count] =true;
    i=i+count;
    }
    return true;
    }
int main(){
    int n;
    cin>>n;
    vector<int>arr(10);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
if(uniqueOccurrences(arr)){
    cout<<"The element occurrences are Unique";
}
else{
    cout<<"Not Unique";
}
}
#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& arr){
  for(int i =0; i<arr.size(); i+=2){
    if(arr[i] != arr[i+1]) 
    return arr[i];
  }
    return arr[arr.size()-1];
  }
  int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int result = singleNonDuplicate(arr);
    cout<<result<<endl;
  }

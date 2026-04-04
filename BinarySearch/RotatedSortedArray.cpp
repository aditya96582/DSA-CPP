#include<bits/stdc++.h>
using namespace std;
int rotatedBinarySearch(vector<int>& arr, int target){
    int st = 0, end = arr.size()-1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(arr[mid] == target)return mid;
        if(arr[st] <= arr[mid]){
            if(arr[st] <= target && target < arr[mid]){
                end = mid - 1;
            } else {
                st = mid + 1;
            }
            } else {
                if(arr[mid] < target && target <= arr[end]){
                    st = mid+1;
                } else {
                    end = mid - 1;
                }
            }
        }
    return -1;
}
int main(){
    int n , target;
    vector<int> arr;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cin>>target;
    int result = rotatedBinarySearch(arr, target);
    cout<<result<<endl;
}
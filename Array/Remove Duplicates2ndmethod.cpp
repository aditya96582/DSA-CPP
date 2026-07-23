#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& arr){
    int n = arr.size();
    if(n == 0){
        return 0;
    }
    int i = 0;
    for(int j = 1; j < n; j++){
        if(arr[i] != arr[j]){
            i++;
        }
        arr[i] = arr[j];
    }
    return i+1;
}
    int main(){
        int arr[6] = {1,2,2,3,4,4};
        vector<int> vector(arr, arr+6);
        int ans = removeDuplicates(vector);
        cout<< ans << endl; // print the length of the array after removing duplicates
    }
#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& arr, int k){
    int n = arr.size();
    vector<int> temp(n);
    for(int i = 0; i<n; i++){
        temp[(i+k) % n] = arr[i];
    }
    arr = temp; // copy back to original copy
}
int main(){
    int arr[6]  = {1,2,3,4,5,6};
    vector<int> vec(arr, arr+6);
    int k = 2;
    rotate(vec, k);
    for(int i=0; i<vec.size(); i++){
        cout<< vec[i] << " ";
    }
}
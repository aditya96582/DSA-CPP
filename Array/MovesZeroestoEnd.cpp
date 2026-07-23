#include<bits/stdc++.h>
using namespace std;
int moveZeroes(vector<int>& nums){
    int n = nums.size();
    int j = -1;
    for(int i = 0; i<n; i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1){
        return n;
    }
        for(int i = j+1; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
    //return n;
int main(){
    int arr[6] = {0,1,0,3,12,0};
    vector<int> vector(arr, arr+6);
    moveZeroes(vector);
    for(int i = 0; i<vector.size(); i++){
        cout<< vector[i] << " ";
    }
}
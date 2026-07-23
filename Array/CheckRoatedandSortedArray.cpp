#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& nums){
    int count = 0;
    int n = nums.size();
    for(int i=1; i<n; i++){
        if(nums[i-1] > nums[i]){
            count++;
        }
} 
        if(nums[n-1] > nums[0]){
            count++;
        }
        return count <= 1; // if count is more than 1, it means there are more than one rotations or the array is not sorted
}
int main(){
    int n = 6;
    int nums[6] = {3,4,5,1,2,3};
    vector<int> vec(nums, nums+n);
    bool ans = check(vec);
    if(ans){
        cout<< "The array is rotated and sorted." << endl;
    }
    else{
        cout<< "The array is not rotated and sorted." << endl;
    }
}
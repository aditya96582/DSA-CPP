#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int idx = -1;
    //Break point
    for(int i = n-2; i>=0; i--){
        if(nums[i] < nums[i+1]){
            idx = i;
            break;
        }
    }
    // If no breakpoint is found, reverse the array and return
    if(idx == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }
    for(int i = n-1; i>idx; i--){
        if(nums[i] > nums[idx]){
            swap(nums[i], nums[idx]);
            break;
        }
    }
    reverse(nums.begin() + idx + 1, nums.end());
}
int main() {
    int n;
    cin>> n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin >> nums[i];
    }
    nextPermutation(nums);
    for(int i = 0; i<n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}
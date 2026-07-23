#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums){
    int n = nums.size();
    int result = 0;
    for(int i=0; i<n; i++){
        result ^= i; // XORing the index
        result ^= nums[i]; // XORing the element of the array
    }
    return result;  
}
int main(){
    int n = 5; // size of the array
    int nums[5] = {0,1,2,4}; // example of an array with a missing number
    vector<int> vec(nums, nums+5); // convert array to vector
    int ans = missingNumber(vec);
    cout<< "The missing number is: " << ans << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums){
    int n = nums.size();
    int sum = (n * (n+1)) / 2; // sum of first n natural numbers
    for(int i=0; i<n; i++){
        sum = sum - nums[i]; // subtracting the elements of the array from the sum
    }
    return sum; // the remaining sum will be the missing number
}
int main(){
    int n = 5; // size of the array
    int nums[5] = {0,1,2,4}; // example of an array with a missing number
    vector<int> vec(nums, nums+n); // convert array to vector
    int ans = missingNumber(vec);
    cout<< "The missing number is: " << ans << endl;
    return 0;
}


TC : O(n) - we are traversing the array once to calculate the sum of the elements and then subtracting it from the total sum of first n natural numbers.
SC : O(1) - we are using only a constant amount of extra space to store the sum and the missing number.
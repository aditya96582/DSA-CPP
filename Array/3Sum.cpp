/*#include<bits/stdc++.h>
using namespace std;
void twoSum(vector<int>& nums, int target, int i, int j){
    while(i<j){
        if(nums[i] + nums[j] > target){
            j--;
           else if(nums[i] + nums[j] < target){
            i++;
            else {
                //first we will remove the duplicate elements from the array
                while(i<j && nums[i] == nums[i+1]) i++;
                while(i<j && nums[j] == nums[j-1]) j--;
                result.push_back({-target,nums[i], nums[j]});
                i++;
                j--;
            }
           }
        }
        vector<vector<int>> threeSum(vector<int>& nums){
            vector<vector<int>> result;
            int n = nums.size();
            sort(nums.begin(), nums.end());
            for(int i=0; i<n-2; i++){
                if(i>0 && nums[i] == nums[i-1]) continue;
                twoSum(nums, target, i+1, n-1);
            }
            return result;
    }
}*/

#include <bits/stdc++.h>
using namespace std;

// Two pointer helper
void twoSum(vector<int>& nums, int target, int left, int right,
            vector<vector<int>>& result) {

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum < target) {
            left++;
        }
        else if (sum > target) {
            right--;
        }
        else {
            result.push_back({-target, nums[left], nums[right]});

            // skip duplicates
            while (left < right && nums[left] == nums[left + 1]) left++;
            while (left < right && nums[right] == nums[right - 1]) right--;

            left++;
            right--;
        }
    }
}

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int target = -nums[i];
        twoSum(nums, target, i + 1, n - 1, result);
    }

    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(nums);

    for (auto &v : ans) {
        for (auto &x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}

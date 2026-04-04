#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> &nums){
    vector<int> result;
    int n = nums.size();
    int count = 1;
    if(n == 0) return result;
    sort(nums.begin(), nums.end());
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            count++;
        } else {
            if(count > n/3){
                result.push_back(nums[i-1]);
            }
            count = 1;
        }
    }
    if(count > n/3){
        result.push_back(nums[n-1]);
    }
    return result;
}
int main(){
    vector<int> nums = {3,2,3};
    vector<int> result = majorityElement(nums);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
};
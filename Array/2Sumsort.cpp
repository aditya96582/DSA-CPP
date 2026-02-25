#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    int n = nums.size();
    int i=0; 
    int j=n-1;
    while(i<j){
        int sum = nums[i] + nums[j];
        if(sum < target){
            i++;
        }else if(sum>target){
            j--;
        }else{
            return {i+1, j+1};
        }
        }
        return {};
        }
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for(int i=0; i<result.size(); i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
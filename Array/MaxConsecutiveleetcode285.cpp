#include<bits/stdc++.h>
using namespace std;
int MaxConsecutive(vector<int>& nums){
    int n = nums.size();
    int cnt = 0;
    int maxi = 0;
    for(int i=0; i<n; i++){
        if(nums[i] == 1){
            cnt++;
            maxi = max(maxi, cnt);
        }
        else {
            cnt = 0;
        }
    }
    return maxi;
}
int main(){
    int n = 6; // size of the array
    int nums[6] = {1,1,0,1,1,1}; // example of an array with 1's and 0's
    vector<int> vec(nums, nums+n); // convert array to vector
    int ans = MaxConsecutive(vec);
    cout<< "The maximum number of consecutive 1's is: " << ans << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<int> leaderInArray(vector<int>& nums){
    int n = nums.size();
    vector<int> ans; // to store the leaders in the array
    int maxFromRight = nums[n-1]; // the last element is always a leader
    int maxi = INT_MIN; // to keep track of the maximum element seen so far
    for(int i = n-1; i>= 0; i--){
        if(nums[i] > maxi){
            ans.push_back(nums[i]);
            maxi = max(maxi, nums[i]); // update the maximum element seeen so far
        }
    }
    reverse(ans.begin(), ans.end()); // reverse the array to get the correct order
    return ans;
}
 int main(){
    int n;
    cin >> n;
    vector<int> nums(n); // to store the input array
    for(int i = 0; i<n; i++){   
        cin >> nums[i];
    }
    vector<int> ans = leaderInArray(nums); // get the leaders in the array
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " "; // print the leaders in the array
    }
 }
#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums){
    int n =  nums.size();
    vector<int> ans;
    queue<int> pos;
    queue<int> neg;
    for(int i = 0; i<n; i++){
        if(nums[i]  >= 0){
            pos.push(nums[i]);
        } else {
            neg.push(nums[i]);
        }
    }
        while(!pos.empty() && !neg.empty()){
            ans.push_back(pos.front());
            pos.pop();
            ans.push_back(neg.front());
            neg.pop();
    }
    return ans;
}
int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    

    vector<int> ans = rearrangeArray(nums);
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;;
}
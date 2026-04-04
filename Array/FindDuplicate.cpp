#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,3,4,2,2};
    int n = nums.size();
    sort(nums.begin(), nums.end());
    bool found = false;
    for(int i=0; i<n-1; i++){
        if(nums[i] == nums[i+1]){
            cout << nums[i] << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "No duplicate found" << endl;
    }
}
/*#include<bits/stdc++.h>
using namespace std;
int maxsubArray(vector<int> &nums){
    int currSum = 0, maxSum = INT_MIN;
    for(int i = 0; i<nums.size(); i++){
        currSum += nums[i];
        maxSum = max(maxSum, currSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
        int result = maxsubArray(nums);
        //for(int i = 0; i<n; i++){
            cout << result;
        
        return 0;
    }*/

    #include<bits/stdc++.h>
    using namespace std;
    int maxsubArray(vector<int> &nums){
        int currSum = 0, maxSum = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            currSum += nums[i];
            maxSum = max(maxSum, currSum);
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }

    int main(){
        int n; 
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i<n; i++){
            cin >> nums[i];
        }
        int result = maxsubArray(nums);
        cout << result;
        return 0;
    }
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> & nums){
int count = 0;
int n = nums.size();
for(int i = 0; i<n-1; i++){
    if(nums[i] > nums[(i+1) % n]){
        count++;
    }
}
return count <= 1; // if count is more than 1, it means there are more than one rotations or the array is not sorted
}
int main(){
    int n = 6; // size of the array
    int nums[6]; 
    //int nums[6] = {3,4,5,1,2,3}; // example of a rotated and sorted array
     for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> vec(nums, nums+n); // convert array to vector
    bool ans = check(vec);
    if(ans){    
        cout<< "The array is rotated and sorted." << endl;
    }
    else{
        cout<< "The array is not rotated and sorted." << endl;
    }
}
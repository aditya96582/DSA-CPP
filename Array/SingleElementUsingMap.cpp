#include<bits/stdc++.h>
using namespace std;
int SingleElement(vector<int>& nums){
    int n =  nums.size();
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[nums[i]]++; // counting the frequency of each element in the array
    }
    for(auto it : mp){
        if(it.second == 1){ // if the frequency of an element is 1, it means it is the single element in the array
            return it.first; // returning the single element
        }
    }
    return -1; // if there is no single element in the array, we return -1
}
int main(){
    int n = 7; // size of the array
    int nums[7] = {1,2,3,4,3,2,1}; // example of an array with a single element
    vector<int> vec{nums, nums+n}; // convert array to vector
    int ans = SingleElement(vec);
    if(ans != -1){
        cout<< "The single element in the array is: " << ans << endl;
    }
    else{
        cout<< "There is no single element in the array." << endl;
    }
}
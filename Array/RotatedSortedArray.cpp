#include<bits/stdc++.h>
using namespace std;
class solution{
    public:

    bool check(vector<int>& nums){
        int n =nums.size();
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] > nums[(i+1) % n]){
                count++;
            }
        }
        return count <= 1;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    solution s;
    if(s.check(nums))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}

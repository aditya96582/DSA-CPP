#include<bits/stdc++.h>
using namespace std;
vector<int> unionofSortedArray(vector<int>& vec1, vector<int>& vec2){
    int n1 = vec1.size();
    int n2 = vec2.size();
    set<int> st;
    for(int i = 0; i<n1; i++){
        st.insert(vec1[i]);
    }
    for(int i = 0; i<n2; i++){
        st.insert(vec2[i]);
    }
    vector<int> ans;
    for(auto it : st){
        ans.push_back(it);
    }
    return ans;
}  

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {3,4,5,6,7};
    vector<int> vec1(arr1, arr1+5);
    vector<int> vec2(arr2, arr2+5);
    vector<int> ans = unionofSortedArray(vec1, vec2);
    for(int i = 0; i<ans.size(); i++){
        cout<< ans[i] << " ";
    }
}
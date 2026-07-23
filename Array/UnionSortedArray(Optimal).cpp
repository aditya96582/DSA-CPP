#include<bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>& a, vector<int>& b){

    int n1 = a.size();
    int n2 = b.size();

    int i = 0;
    int j = 0;

    vector<int> ans;

    while(i < n1 && j < n2){

        if(a[i] <= b[j]){

            if(ans.size() == 0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }

            i++;
        }
        else{

            if(ans.size() == 0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }

            j++;
        }
    }

    // remaining elements of first array
    while(i < n1){

        if(ans.back() != a[i]){
            ans.push_back(a[i]);
        }

        i++;
    }

    // remaining elements of second array
    while(j < n2){

        if(ans.back() != b[j]){
            ans.push_back(b[j]);
        }

        j++;
    }

    return ans;
}

int main(){

    vector<int> a = {1,2,2,3,4};
    vector<int> b = {2,3,5};

    vector<int> ans = unionArray(a,b);

    for(auto it : ans){
        cout << it << " ";
    }
}
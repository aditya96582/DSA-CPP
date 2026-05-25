#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int>& arr){
    int largest = arr[0];
    int seclargest = INT_MIN;
    for(int i = 1; i<arr.size(); i++){
        if(arr[i] > largest){
            seclargest = largest;
            largest = arr[i];
        }
        else if(arr[i] != largest  && arr[i] > seclargest){ // to handle duplicates of largest element
            seclargest = arr[i];
        }
    }
    if(seclargest == INT_MIN){
        return -1; // or some indicator that second largest doesn't exist
    }
    return seclargest;
}
int main() {
    int arr[6] = {1,2,4,7,7,5};
      // Convert array into vector
    vector<int> vec(arr, arr + 6);
    int ans = secondLargest(vec);
    cout<< ans << endl;
    return 0;
}
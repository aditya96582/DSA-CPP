#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> arr){
    int largest = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    int arr[5] = {1, 5, 3, 9, 2};
     vector<int> vec(arr, arr + 5);

    int result = largestElement(vec);

    cout << "Largest element is: " << result << endl;
    return 0;
}
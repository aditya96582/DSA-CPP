#include<bits/stdc++.h>
using namespace std;
void mergeIntervals(vector<vector<int>> &intervals){
    sort(intervals.begin(), intervals.end());
    int idx = 0;
    for(int i=1; i<intervals.size(); i++){
        if(intervals[i][0] <= intervals[idx][1]){
            intervals[idx][1] = max(intervals[idx][1], intervals[i][1]);
           } else{
            idx++;
            intervals[idx] = intervals[i];
           } 
    }
    intervals.resize(idx+1);
    //return interavals;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> intervals(n, vector<int>(2));
    for(int i=0; i<n; i++){ 
        cin >> intervals[i][0] >> intervals[i][1];
    }   
    mergeIntervals(intervals);
    for(int i=0; i<intervals.size(); i++){
        cout << intervals[i][0] << " " << intervals[i][1] << endl;
    }
}
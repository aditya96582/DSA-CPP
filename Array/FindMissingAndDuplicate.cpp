#include<bits/stdc++.h>
using namespace std;
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
int n = grid.size();
int total = n*n;
vector<int> freq(total+1, 0);
int duplicate = -1, missing = -1;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        freq[grid[i][j]]++;
    }
   }
  for(int i = 1; i<=total; i++){
    if(freq[i] == 2){
duplicate = i;
    }
     else if(freq[i] == 0){
            missing = i;
        }
    }
        return {duplicate, missing};
    }



int main(){
     vector<vector<int>> grid = {{1,3},{2,2}};

    vector<int> ans = findMissingAndRepeatedValues(grid);

    cout << "Duplicate: " << ans[0] << endl;
    cout << "Missing: " << ans[1] << endl;

    return 0;
}
    
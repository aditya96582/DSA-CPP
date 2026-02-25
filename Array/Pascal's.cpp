#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows){
    vector<vector<int>> result(numRows);
    for(int i=0; i<numRows; i++){
        result[i] = vector<int> (i+1, 1);
        for(int j=1; j<i; j++){
            result[i][j] = result[i-1][j-1] + result[i-1][j];
        }
    }
    return result;
}
int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin >> n;

    vector<vector<int>> pascalTriangle = generate(n);
    for(int i=0; i<pascalTriangle.size(); i++){
        for(int j=0; j<pascalTriangle[i].size(); j++){
            cout << pascalTriangle[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
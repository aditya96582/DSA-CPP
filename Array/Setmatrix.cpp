#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> temp = matrix;   // Correct 2D copy

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(matrix[i][j] == 0) {   // Correct variable name

                    // Make row zero
                    for(int k = 0; k < n; k++) {
                        temp[i][k] = 0;
                    }

                    // Make column zero
                    for(int k = 0; k < m; k++) {
                        temp[k][j] = 0;
                    }
                }
            }
        }

        matrix = temp;  // Copy back after processing
    }
};

int main() {

    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    // Input matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    Solution obj;              // Create object
    obj.setZeroes(matrix);     // Call function

    // Output matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
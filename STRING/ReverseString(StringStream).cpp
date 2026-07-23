#include <bits/stdc++.h>
using namespace std;

// Function to reverse words
string reverseWords(string s) {

    stringstream ss(s);   // Create stringstream object
    string word;          // Store one word at a time
    string ans = "";      // Final answer

    // Read one word at a time
    while (ss >> word) {

        if (ans.empty())
            ans = word;
        else
            ans = word + " " + ans;
    } 

    return ans;
}

int main() {

    string s;

    // Read the complete sentence including spaces
    getline(cin, s);

    cout << reverseWords(s);

    return 0;
}
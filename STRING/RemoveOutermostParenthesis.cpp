#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s; // input string
    string ans = ""; // to store the final answer
    int count = 0; // to keep track of the number of open parentheses
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            if(count > 0){ // if there is already an open parenthesis, add it to the answer
                ans += s[i];
            }
            count++; // increment the count of open parentheses
        } else {
            count--; // decrement the count of open parenthesis
            if(count > 0){ // if there is still an open parenthesis, add it to the answer
                ans += s[i];
            }
        }
    }
    cout << ans << endl; // output the final answer
}
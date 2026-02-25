#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices){
int maxProfit = 0, bestbuy = INT_MAX;
for(int i=0; i<prices.size(); i++){
    if(prices[i] > bestbuy){
        maxProfit = max(maxProfit, prices[i] - bestbuy);
    }
    bestbuy = min(bestbuy, prices[i]);
}
return maxProfit;
}
int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i = 0; i<n; i++){
        cin >> prices[i];
    }
    int result = maxProfit(prices);
    cout << result;
    return 0;
}
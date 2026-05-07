#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit;
        int n = prices.size();
        int max_profit = 0;
        int min_sell = prices[0], max_buy = prices[0];
        for(int i=0; i<n; i++){
            if(prices[i] > max_buy){
                max_buy = prices[i];
            }
            if(prices[i] < min_sell){
                min_sell = prices[i];
                max_buy = prices[i];
            }
            profit = max_buy - min_sell;
            if(profit > max_profit) max_profit = profit;
        }
        return max_profit;
    }
};

int main(){
    Solution sol;
    int n;
    cin >> n;
    vector<int> prices;
    for(int i=0; i<n; i++){
        int in;
        cin >> in;
        prices.push_back(in);
    }
    
    int profit = sol.maxProfit(prices);
    cout << profit << endl;
}
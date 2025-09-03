#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return dalal(n, dp);
    }

    int dalal(int n, vector<int>& dp){
        if(n == 0) return 1;

        if(dp[n] != -1) return dp[n];

        int res = 0;
        for(int i=1; i<=2; i++){
            if(n>=i){
                res += dalal(n-i, dp);
            }
        }
        dp[n] = res;
        return res;
    }
};

int main(){
    Solution sol;
    int n;
    cin >> n;
    cout << sol.climbStairs(n) << '\n';
}
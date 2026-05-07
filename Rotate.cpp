#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> temp;
        temp = nums;
        for(int i=0; i<n; i++){
            nums[i] = temp[(i+n-k)%n];
        }
    }
};

int main(){
    Solution sol;
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    int in;
    for(int i=0; i<n; i++){
        cin >> in;
        nums.push_back(in);
    }

    sol.rotate(nums, k);
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}
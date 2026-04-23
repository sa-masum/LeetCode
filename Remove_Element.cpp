#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(val == nums[i]){
                for(int j=i; j<(nums.size()-1); j++){
                    nums[j] = nums[j+1];
                }
                nums.pop_back();
                k--;
                i--;
            }
        }
        return k;
    }
};

int main(){
    Solution sol;
    int n;
    cin >> n;
    vector<int> nums;
    int in;
    for(int i=0; i<n; i++){
        cin >> in;
        nums.push_back(in);
    }
    int val;
    cin >> val;

    int k = sol.removeElement(nums, val);
    cout << k << endl;
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}
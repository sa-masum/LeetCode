#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max = INT_MIN;
        map<int, int> count;
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
            
            if(count[nums[i]]>count[max]){
                max = nums[i];
            }
        }
        return max;
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

    int major = sol.majorityElement(nums);
    cout << major << endl;
}
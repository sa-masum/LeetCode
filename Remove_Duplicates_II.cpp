#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count[20001];
        for(int i=0; i<20001; i++){
            count[i] = 0;
        }
        int k=nums.size();
        for(int i=0; i<nums.size(); i++){
            count[nums[i]+10000]++;
            if(count[nums[i]+10000]>2){
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

    int k = sol.removeDuplicates(nums);
    cout << k << endl;
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}
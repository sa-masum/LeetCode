#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        int t = (m>n)?n:m;
        int i=0, k1=0, k2=0;
        while(k1 < m && k2 < n){
            if(nums1[k1] < nums2[k2]){
                temp.push_back(nums1[k1]);
                k1++;
            }else{
                temp.push_back(nums2[k2]);
                k2++;
            }
            i++;
        }
        while(k1 < m){
            temp.push_back(nums1[k1]);
            k1++;
        }
        while(k2 < n){
            temp.push_back(nums2[k2]);
            k2++;
        }

        nums1 = temp;
    }
};

int main(){
    Solution sol;
    vector<int> nums1, nums2;
    int m, n;
    cin >> m >> n;
    int in;
    for(int i=0; i<m; i++){
        cin >> in;
        nums1.push_back(in);
    }
    for(int i=0; i<n; i++){
        cin >> in;
        nums2.push_back(in);
    }

    sol.merge(nums1, m, nums2, n);
    for(int x : nums1){
        cout << x << endl;
    }
}
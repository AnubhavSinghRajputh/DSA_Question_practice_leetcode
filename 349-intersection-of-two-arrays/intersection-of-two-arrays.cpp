#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> result;
        vector<int> ans;
        
        // Find common elements
        for(int num : nums2) {
            if(set1.count(num)) {
                result.insert(num);
            }
        }
        
        // Convert to vector
        for(int num : result) {
            ans.push_back(num);
        }
        
        return ans;
    }
};

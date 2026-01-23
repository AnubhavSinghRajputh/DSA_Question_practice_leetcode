#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_map<int, int> count;
        std::vector<int> result;
        
        // Count frequencies in nums1
        for (int num : nums1) {
            count[num]++;
        }
        
        // Find common elements with min frequency
        for (int num : nums2) {
            if (count[num] > 0) {
                result.push_back(num);
                count[num]--;
            }
        }
        
        return result;
    }
};

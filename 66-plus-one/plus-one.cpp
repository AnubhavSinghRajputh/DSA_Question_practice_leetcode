#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;  // No carry, done
            }
            digits[i] = 0;  // Carry over
        }
        
        // All 9s case: [9,9,9] -> [1,0,0,0]
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            // Move left pointer to first alphanumeric char
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            // Move right pointer to last alphanumeric char
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            
            // Compare lowercase versions
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

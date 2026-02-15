#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> pairs = {{')', '('}, {']', '['}, {'}', '{'}};
        
        for (char c : s) {
            if (pairs.find(c) != pairs.end()) {  // Closing bracket
                if (stk.empty() || stk.top() != pairs[c]) {
                    return false;
                }
                stk.pop();
            } else {  // Opening bracket
                stk.push(c);
            }
        }
        return stk.empty();
    }
};

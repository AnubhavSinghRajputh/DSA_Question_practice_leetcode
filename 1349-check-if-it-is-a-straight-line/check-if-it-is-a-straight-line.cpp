#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if (n <= 2) return true;
        
        // Compute slope between first two points: dy/dx
        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int x1 = coordinates[1][0], y1 = coordinates[1][1];
        long long dx = (long long)x1 - x0;
        long long dy = (long long)y1 - y0;
        
        // Check every other point against this reference slope
        for (int i = 2; i < n; ++i) {
            int xi = coordinates[i][0], yi = coordinates[i][1];
            long long cur_dx = (long long)xi - x0;
            long long cur_dy = (long long)yi - y0;
            
            // Cross product: dy * cur_dx == dx * cur_dy for colinearity
            if (dy * cur_dx != dx * cur_dy) {
                return false;
            }
        }
        return true;
    }
};

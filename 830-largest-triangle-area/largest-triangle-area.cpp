#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double maxArea = 0.0;
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    int x1 = points[i][0], y1 = points[i][1];
                    int x2 = points[j][0], y2 = points[j][1];
                    int x3 = points[k][0], y3 = points[k][1];
                    
                    // Vectors: P1->P2 and P1->P3
                    int ux = x2 - x1;
                    int uy = y2 - y1;
                    int vx = x3 - x1;
                    int vy = y3 - y1;
                    
                    // Area = 0.5 * |ux*vy - vx*uy|
                    double area = 0.5 * abs(ux * vy - vx * uy);
                    
                    if (area > maxArea) {
                        maxArea = area;
                    }
                }
            }
        }
        
        return maxArea;
    }
};

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;
        
        while (left < right) {
            // Calculate area: min height * distance between pointers
            int currentArea = min(height[left], height[right]) * (right - left);
            maxWater = max(maxWater, currentArea);
            
            // Move pointer of shorter line (taller line might give better result)
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return maxWater;
    }
};


// Problem Description: https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size();
        int leftmax = height[0], rightmax = height[height.size() - 1];
        int res = 0;
        while (l < r)
        {
            if (leftmax < rightmax)
            {
                l += 1;
                leftmax = max(leftmax, height[l]);
                res += leftmax - height[l];
            }
            else {
                r -= 1;
                rightmax = max(rightmax, height[r]);
                res += rightmax - height[r];
            }
        }
        return res;
    }
};
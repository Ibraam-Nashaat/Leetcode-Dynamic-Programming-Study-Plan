
// Problem Description: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs = nums[0];
        int maxt = maxs;
        for (int i = 1; i < nums.size(); i++)
        {
            maxs = max(maxs + nums[i], nums[i]);
            maxt = max(maxt, maxs);
        }
        return maxt;
    }
};
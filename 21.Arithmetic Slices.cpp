
// Problem Description: https://leetcode.com/problems/arithmetic-slices/

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int dp = 0, res = 0;
        for (int i = 2; i < nums.size(); i++)
            if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
            {
                dp = dp + 1;
                res += dp;
            }
            else dp = 0;
        return res;
    }
};

// Problem Description: https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxp = nums[0];
        int res = nums[0];
        int minp = nums[0];
        int temp = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            temp = maxp * nums[i];
            maxp = max(maxp * nums[i], nums[i]);
            maxp = max(maxp, minp * nums[i]);
            minp = min(minp * nums[i], nums[i]);
            minp = min(temp, minp);
            res = max(res, maxp);
        }
        return res;
    }
};
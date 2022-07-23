
// Problem Description: https://leetcode.com/problems/jump-game-ii/

class Solution {
public:
    int jump(vector<int>& nums) {
        int res = 0, l = 0, r = 0, far;
        while (r < nums.size() - 1)
        {
            far = 0;
            for (int j = l; j <= r; j++)
                far = max(far, j + nums[j]);
            l = l + 1;
            r = far;
            res++;
        }
        return res;
    }
};
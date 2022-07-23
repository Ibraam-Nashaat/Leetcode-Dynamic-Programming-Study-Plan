
// Problem Description: https://leetcode.com/problems/house-robber/

class Solution {
public:
    int rob(vector<int>& nums) {
        int* arr = new int[nums.size() + 1]();
        arr[1] = nums[0];
        for (int i = 1; i < nums.size(); i++)
            arr[i + 1] = max(arr[i], arr[i - 1] + nums[i]);
        return arr[nums.size()];
    }
};
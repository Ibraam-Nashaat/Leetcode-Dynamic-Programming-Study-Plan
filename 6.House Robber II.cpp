
// Problem Description: https://leetcode.com/problems/house-robber-ii/

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() > 1)
        {
            int* arr = new int[nums.size()]();
            arr[1] = nums[0];
            int x;
            for (int i = 1; i < nums.size() - 1; i++)
                arr[i + 1] = max(arr[i], arr[i - 1] + nums[i]);
            x = arr[nums.size() - 1];
            arr[1] = nums[1];
            for (int i = 2; i < nums.size(); i++)
                arr[i] = max(arr[i - 1], arr[i - 2] + nums[i]);
            arr[nums.size() - 1] = max(x, arr[nums.size() - 1]);
            return arr[nums.size() - 1];
        }
        return nums[0];
    }
};
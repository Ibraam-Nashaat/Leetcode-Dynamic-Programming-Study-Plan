
// Problem Description: https://leetcode.com/problems/maximum-length-of-subarray-with-positive-product/

class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n = nums.size();
        // positive product subarray length so far
        int positive = 0;
        // negative product subarray length so far
        int negative = 0;
        int answer = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                positive = negative = 0;
            }
            else if (0 < nums[i]) {
                positive++;
                if (negative != 0) negative++;
            }
            else {
                swap(positive, negative);
                negative++;
                if (positive != 0) positive++;
            }
            answer = max(answer, positive);
        }
        return answer;
    }
};
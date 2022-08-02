
// Problem Description:https://leetcode.com/problems/integer-break/
class Solution {
public:
    int integerBreak(int n) {
        int* dp = new int[n + 1]();
        dp[1] = 1;
        for (int num = 2; num <= n; num++)
        {
            dp[num] = (num != n) ? num : 0;
            for (int i = 1; i < num; i++)
                dp[num] = max(dp[num], dp[i] * dp[num - i]);
        }
        return dp[n];
    }
};
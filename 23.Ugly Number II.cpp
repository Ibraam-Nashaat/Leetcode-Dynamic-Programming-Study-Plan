
// Problem Description: https://leetcode.com/problems/ugly-number-ii/

class Solution {
public:
    int nthUglyNumber(int n) {
        int* dp = new int[n];
        int p1 = 0, p2 = 0, p3 = 0;
        dp[0] = 1;
        for (int i = 1; i < n; i++)
        {
            dp[i] = min(min(dp[p1] * 2, dp[p2] * 3), dp[p3] * 5);
            if (dp[i] == dp[p1] * 2) p1++;
            if (dp[i] == dp[p2] * 3) p2++;
            if (dp[i] == dp[p3] * 5) p3++;
        }
        return dp[n - 1];
    }
};
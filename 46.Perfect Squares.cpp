
// Problem Description:https://leetcode.com/problems/perfect-squares/
class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, n);
        dp[0] = 0;
        int square;
        for (int target = 1; target <= n; target++)
            for (int s = 1; s <= target; s++)
            {
                square = s * s;
                if (target - square < 0) break;
                dp[target] = min(dp[target], 1 + dp[target - square]);
            }
        return dp[n];
    }
};
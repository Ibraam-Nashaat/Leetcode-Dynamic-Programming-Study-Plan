
// Problem Description: https://leetcode.com/problems/unique-binary-search-trees/

class Solution {
public:
    int numTrees(int n) {
        int* dp = new int[n + 1];
        dp[0] = dp[1] = 1;
        int total, left, right;
        for (int node = 2; node <= n; node++)
        {
            total = 0;
            for (int root = 1; root <= node; root++)
            {
                left = root - 1;
                right = node - root;
                total += dp[left] * dp[right];
            }
            dp[node] = total;
        }
        return dp[n];
    }
};
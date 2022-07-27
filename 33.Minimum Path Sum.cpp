
// Problem Description: https://leetcode.com/problems/minimum-path-sum/

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> mat(m + 1, vector<int>(n + 1, INT_MAX));
        mat[0][1] = 0;
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                mat[i][j] = min(mat[i - 1][j], mat[i][j - 1]) + grid[i - 1][j - 1];
        return mat[m][n];
    }
};
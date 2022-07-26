
// Problem Description: https://leetcode.com/problems/unique-paths/

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> mat(m + 1, vector<int>(n + 1, 0));
        mat[0][1] = 1;
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                mat[i][j] = mat[i - 1][j] + mat[i][j - 1];
        return mat[m][n];
    }
};
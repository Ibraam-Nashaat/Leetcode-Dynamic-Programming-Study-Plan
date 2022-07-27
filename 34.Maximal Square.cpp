
// Problem Description: https://leetcode.com/problems/maximal-square/

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = 0;
        vector<vector<int>> mat(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
            {
                if (matrix[i - 1][j - 1] == '1')
                    mat[i][j] = min(min(mat[i - 1][j], mat[i][j - 1]), mat[i - 1][j - 1]) + 1;
                ans = max(mat[i][j], ans);
            }
        return ans * ans;
    }
};
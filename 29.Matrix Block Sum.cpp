
// Problem Description: https://leetcode.com/problems/matrix-block-sum/

class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int r = max(0, i - k); r <= min(i + k, m - 1); r++)
                {
                    for (int c = max(0, j - k); c <= min(j + k, n - 1); c++)
                    {
                        ans[r][c] += mat[i][j];
                    }
                }
            }
        }
        return ans;
    }
};
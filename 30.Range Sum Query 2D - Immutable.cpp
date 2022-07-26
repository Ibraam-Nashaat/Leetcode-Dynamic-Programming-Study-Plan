
// Problem Description: https://leetcode.com/problems/range-sum-query-2d-immutable/

class NumMatrix {
    vector<vector<int>> ans;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int prefix = 0;
        int above;
        int n = matrix.size(), m = matrix[0].size();
        ans.resize(n + 1, vector<int>(m + 1, 0));
        for (int r = 0; r < n; r++)
        {
            prefix = 0;
            for (int c = 0; c < m; c++)
            {
                prefix += matrix[r][c];
                above = ans[r][c + 1];
                ans[r + 1][c + 1] = prefix + above;
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++;
        row2++;
        col1++;
        col2++;
        int left, botright, above, leftabove;
        botright = ans[row2][col2];
        left = ans[row2][col1 - 1];
        above = ans[row1 - 1][col2];
        leftabove = ans[row1 - 1][col1 - 1];
        return botright - above - left + leftabove;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
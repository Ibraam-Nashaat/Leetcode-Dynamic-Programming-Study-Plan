
//Problem Description: https://leetcode.com/problems/triangle/

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> mat(triangle.size());
        mat[0].push_back(triangle[0][0]);
        int ans = INT_MAX;
        for (int i = 1; i < triangle.size(); i++)
        {
            for (int j = 0; j < triangle[i].size(); j++)
            {
                if (j == 0)
                    mat[i].push_back(triangle[i][j] + mat[i - 1][j]);
                else if (j == triangle[i].size() - 1)
                    mat[i].push_back(triangle[i][j] + mat[i - 1][j - 1]);
                else
                    mat[i].push_back(triangle[i][j] + min(mat[i - 1][j], mat[i - 1][j - 1]));
                if (i == triangle.size() - 1)
                    ans = min(ans, mat[i][j]);
            }
        }
        if (triangle.size() == 1) ans = triangle[0][0];
        return ans;
    }
};
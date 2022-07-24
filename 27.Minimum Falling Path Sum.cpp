
// Problem Description: https://leetcode.com/problems/minimum-falling-path-sum/

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        vector<vector<int>> arr(n + 1, vector<int>(n, 0));
        int ans = INT_MAX;
        if (n > 1) {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (j == 0)
                        arr[i + 1][j] = min(arr[i][j] + matrix[i][j], arr[i][j + 1] + matrix[i][j]);
                    else if (j == n - 1)
                        arr[i + 1][j] = min(arr[i][j] + matrix[i][j], arr[i][j - 1] + matrix[i][j]);
                    else
                        arr[i + 1][j] = min(min(arr[i][j] + matrix[i][j],
                            arr[i][j - 1] + matrix[i][j]), arr[i][j + 1] + matrix[i][j]);
                    if (i == n - 1)
                        ans = min(ans, arr[i + 1][j]);
                }
            }
        }
        if (n == 1) ans = matrix[0][0];
        return ans;
    }
};

// Problem Description: https://leetcode.com/problems/longest-palindromic-subsequence/

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        int j;
        vector<vector<int>> mat(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
            mat[i][i] = 1;
        for (int cl = 1; cl < n; cl++)
            for (int i = 0; i < n - cl; i++)
            {
                j = i + cl;
                if (s[i] == s[j])
                    mat[i][j] = mat[i + 1][j - 1] + 2;
                else
                    mat[i][j] = max(mat[i][j - 1], mat[i + 1][j]);
            }
        return mat[0][n - 1];
    }
};
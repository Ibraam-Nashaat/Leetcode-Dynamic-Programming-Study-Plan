
// Problem Description: https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> v;
        vector<vector<int>> res;
        int temp;
        for (int i = 0; i < numRows; i++)
        {
            v.clear();
            for (int j = 0; j < i + 1; j++)
            {
                if (j == 0 || j == i) v.push_back(1);
                else {
                    temp = res[i - 1][j] + res[i - 1][j - 1];
                    v.push_back(temp);
                }
            }
            res.push_back(v);
        }
        return res;
    }
};
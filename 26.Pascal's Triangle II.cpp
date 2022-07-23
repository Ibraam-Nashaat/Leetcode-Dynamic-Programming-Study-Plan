
// Problem Description: https://leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        vector<int> res;
        int temp;
        for (int i = 0; i <= rowIndex; i++)
        {
            v.clear();
            for (int j = 0; j < i + 1; j++)
            {
                if (j == 0 || j == i) v.push_back(1);
                else {
                    temp = res[j] + res[j - 1];
                    v.push_back(temp);
                }
            }
            res = v;
        }
        return res;
    }
};
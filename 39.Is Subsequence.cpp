
// Problem Description: https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0, i = 0;
        for (int j = 0; j < t.size(); j++)
        {
            if (count == s.size()) break;
            if (s[i] == t[j]) {
                count++;
                i++;
            }
        }
        return count == s.size();
    }
};
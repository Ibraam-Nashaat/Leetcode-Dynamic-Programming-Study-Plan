
// Problem Description: https://leetcode.com/problems/word-break/

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        bool* dp = new bool[s.size() + 1]();
        dp[s.size()] = 1;
        for (int i = s.size(); i >= 0; i--)
        {
            for (int j = 0; j < wordDict.size(); j++)
            {
                if (i + wordDict[j].size() <= s.size() && s.substr(i, wordDict[j].size()) == wordDict[j])
                    dp[i] = dp[i + wordDict[j].size()];
                if (dp[i])
                    break;
            }
        }
        return dp[0];
    }
};
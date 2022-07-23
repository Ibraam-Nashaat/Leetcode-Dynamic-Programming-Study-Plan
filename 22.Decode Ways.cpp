
// Problem Description: https://leetcode.com/problems/decode-ways/

class Solution {
public:
    int numDecodings(string s) {
        int* dp = new int[s.size() + 1];
        dp[s.size()] = 1;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '0') dp[i] = 0;
            else dp[i] = dp[i + 1];
            string k = "0123456";
            if (i + 1 < s.size() && (s[i] == '1' || (s[i] == '2' && k.find(s[i + 1]) != string::npos)))
                dp[i] += dp[i + 2];
        }
        return dp[0];
    }
};
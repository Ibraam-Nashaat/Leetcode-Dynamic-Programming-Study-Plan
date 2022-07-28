
// Problem Description: https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        int l, r, resl, resr, reslen = 0;
        string res;
        for (int i = 0; i < s.size(); i++)
        {
            l = r = i;
            helper(s, l, r, resl, resr, reslen);
            l = i;
            r = i + 1;
            helper(s, l, r, resl, resr, reslen);

        }
        return s.substr(resl, resr - resl + 1);

    }
    void helper(string& s, int& l, int& r, int& resl, int& resr, int& reslen)
    {
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            if (r - l + 1 > reslen)
            {
                resl = l;
                resr = r;
                reslen = r - l + 1;
            }
            l -= 1;
            r += 1;
        }
    }
};
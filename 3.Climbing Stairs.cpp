/*
    Problem Description: https://leetcode.com/problems/climbing-stairs/
*/
class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> m;
        return count(n, m);
    }
    int count(int n, unordered_map<int, int>& m)
    {
        if (m.find(n) == m.end())
        {
            if (n == 0) m[n] = 1;
            else if (n < 0) m[n] = 0;
            else m[n] = count(n - 1, m) + count(n - 2, m);
        }
        return m[n];
    }
};
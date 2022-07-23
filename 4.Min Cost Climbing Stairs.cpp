
// Problem Description: https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int, int>m;
        return min(costfun(cost, m, 0), m[1]);
    }
    int costfun(vector<int>& cost, unordered_map<int, int>& m, int i)
    {

        if (m.find(i) == m.end())
        {
            if (i >= cost.size()) { m[i] = 0; return m[i]; }
            m[i] = min(costfun(cost, m, i + 2), costfun(cost, m, i + 1)) + cost[i];
            return m[i];
        }
        return m[i];

    }
};
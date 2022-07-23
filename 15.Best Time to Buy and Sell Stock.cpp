
// Problem Description: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int profit = 0;
        int i = 0, j = 1;
        for (int k = 1; k < prices.size(); k++)
        {
            profit = max(prices[k] - prices[i], prices[k] - prices[j]);
            if (prices[k] - prices[i] > prices[k] - prices[j]) j = k;
            else { i = j; j = k; }
            ans = max(profit, ans);
        }
        return ans;
    }
};
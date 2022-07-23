
// Problem Description: https://leetcode.com/problems/best-sightseeing-pair/

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans = values[0] + values[1] - 1;
        int maxscore = values[0] + values[1] - 1;
        int i = 0, j = 1;
        for (int k = 2; k < values.size(); k++)
        {
            maxscore = max(values[k] + values[i] + i - k, values[k] + values[j] + j - k);
            if (values[k] + values[i] + i - k > values[k] + values[j] + j - k) j = k;
            else { i = j; j = k; }
            ans = max(ans, maxscore);
        }
        return ans;
    }
};
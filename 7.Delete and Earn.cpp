
// Problem Description: https://leetcode.com/problems/delete-and-earn/

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        set<int> s;
        set<int> ::iterator itr;
        unordered_map<int, int> m;
        int currearn, earn1 = 0, earn2 = 0, temp;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
            s.insert(nums[i]);
        }
        for (itr = s.begin();
            itr != s.end(); itr++)
        {
            currearn = (*itr) * m[(*itr)];
            if (itr != s.begin() && *itr == *prev(itr) + 1)
            {
                temp = earn2;
                earn2 = max(currearn + earn1, earn2);
                earn1 = temp;

            }
            else
            {
                temp = earn2;
                earn2 = currearn + earn2;
                earn1 = temp;

            }
        }
        return earn2;

    }
};

/*
  Problem Description: https://leetcode.com/problems/n-th-tribonacci-number/
*/
class Solution {
public:
    int tribonacci(int n) {
        int* arr = new int[n + 1]();
        if (n > 0)
        {
            arr[1] = 1;
            if (n > 1) arr[2] = 1;
            for (int i = 0; i < n; i++)
                if (i + 3 <= n) arr[i + 3] = arr[i] + arr[i + 1] + arr[i + 2];
        }
        return arr[n];
    }
};
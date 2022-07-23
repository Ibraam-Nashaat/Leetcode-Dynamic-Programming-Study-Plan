class Solution {
public:
    int fib(int n) {
        unordered_map<int, int> s;
        return fibx(n, s);
    }
    int fibx(int n, unordered_map<int, int>& s)
    {
        if (s.find(n) == s.end())
        {
            if (n == 0) s[n] = 0;
            else if (n <= 2) s[n] = 1;
            else s[n] = fibx(n - 1, s) + fibx(n - 2, s);
        }
        return s[n];
    }

};
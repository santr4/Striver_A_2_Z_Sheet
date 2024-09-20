// ** print factorial numbers less than N using recursion **

class Solution
{
public:
    void f(long long n, long long prod, long long x, vector<long long> &s)
    {
        if (prod > n)
        {
            return;
        }
        s.push_back(prod);
        f(n, prod * (x + 1), x + 1, s);
    }

    vector<long long> factorialNumbers(long long n)
    {
        // Write Your Code here
        vector<long long> ans;
        f(n, 1, 1, ans);
        return ans;
    }
};
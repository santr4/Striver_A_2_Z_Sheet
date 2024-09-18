// lcm and gcd

class Solution
{
public:
    long long func1(long long A, long long B)
    {
        if (B == 0)
        {
            return A;
        }
        func1(B, A % B);
    }

    vector<long long> lcmAndGcd(long long A, long long B)
    {
        // code here
        vector<long long> ans;
        long long gcd = func1(A, B);
        long long p = A * B;
        long long lcm = p / gcd;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans;
    }
};
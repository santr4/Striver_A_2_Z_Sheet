// sum of all divisors from 1 to n

// ** intution: here the sum of divisors of all the numbers from 1 to n is calculated and returned. So for a divisor i there can be multiple numbers for which
// ** i is a divisor. So we will calculate how many multiples of i are there from 1 to n and then multiply it with i to get the sum of divisors of i.

class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long ans = 0;
        for (int i = 1; i <= N; i++)
        {
            ans += (N / i) * i;
        }
        return ans;
    }
};
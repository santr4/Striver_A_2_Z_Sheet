// sum of cube of first n terms

class Solution
{
public:
    long long int sum = 0;

    long long sumOfSeries(long long n)
    {
        // code here
        if (n == 1)
        {
            return sum + 1;
        }
        sum += (n * n * n);
        return sumOfSeries(n - 1);
    }
};
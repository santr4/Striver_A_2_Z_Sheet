// ** 7. Reverse Integer **

class Solution
{
public:
    int reverse(int x)
    {
        int temp = x;
        long long ans = 0;
        int flag = 1;
        if (x < 0)
        {
            flag = -1;
            temp = abs(x);
        }
        while (temp > 0)
        {
            int a = temp % 10;
            ans = (ans * 10) + a;
            temp = temp / 10;
        }
        if (flag == -1)
        {
            ans = ans * -1;
        }
        if (ans < INT_MIN || ans > INT_MAX)
        {
            return 0;
        }
        return static_cast<int>(ans);
    }
};
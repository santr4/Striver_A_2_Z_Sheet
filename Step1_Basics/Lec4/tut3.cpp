// ** 9. Palindrome Number **

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x != 0 && x % 10 == 0))
        {
            return false;
        }
        long long y = 0;
        long long temp = x;
        while (temp > 0)
        {
            y = y * 10 + (temp % 10);
            temp = temp / 10;
        }
        return (x == y);
    }
};
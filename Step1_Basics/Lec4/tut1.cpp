// ** count digits **

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int x = int(log10(n) + 1);
//     cout << x << endl;
//     return 0;
// }

// ** count digits - gfg **

class Solution
{
public:
    int evenlyDivides(int N)
    {
        // code here
        int temp = N;
        int count = 0;
        while (temp > 0)
        {
            int x = temp % 10;
            if (x != 0)
            {
                if (N % x == 0)
                {
                    count++;
                }
            }
            temp = temp / 10;
        }
        return count;
    }
};
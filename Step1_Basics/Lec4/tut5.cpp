// armstrong number

#include <bits/stdc++.h>
using namespace std;

bool armstrong(long long n)
{
    long long ans = 0;
    long long temp = n;
    long long k = to_string(n).length();
    while (temp > 0)
    {
        long long rem = temp % 10;
        ans += pow(rem, k);
        temp /= 10;
    }
    if (ans == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    long long n;
    cin >> n;
    bool ans = armstrong(n);
    cout << ans << endl;
    return 0;
}
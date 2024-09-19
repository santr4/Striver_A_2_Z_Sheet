// ** check if a number is prime or not **

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (n / i != i)
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not a Prime Number" << endl;
    }
    return 0;
}
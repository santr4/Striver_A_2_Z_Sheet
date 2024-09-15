// ** while loops **

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mult = 10;
    int n;
    cin >> n;
    while (mult > 0)
    {
        cout << n * mult << " ";
        mult--;
    }
    return 0;
}
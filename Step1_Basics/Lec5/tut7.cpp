// ** check if palindrome or not **

#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(string &s)
{
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    bool x = check_palindrome(s);
    if (x)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
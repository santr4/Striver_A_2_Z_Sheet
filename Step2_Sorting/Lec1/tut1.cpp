// ** selection sorting **

#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[mini])
            {
                mini = j;
            }
        }
        if (mini != i)
        {
            swap(v[mini], v[i]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    cout << "enter the vector" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "before selection sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    selection_sort(v);
    cout << endl;
    cout << "after selection sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
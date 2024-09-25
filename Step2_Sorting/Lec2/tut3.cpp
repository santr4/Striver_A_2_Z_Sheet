// ** quick sort - TC - O(nlogn) **

#include <bits/stdc++.h>
using namespace std;

int qs(vector<int> &v, int l, int h)
{
    int pivot = v[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        while (v[i] <= pivot && i <= h - 1)
        {
            i++;
        }
        while (v[j] > pivot && j >= l + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(v[i], v[j]);
        }
    }
    swap(v[l], v[j]);
    return j;
}

void quickSort(vector<int> &v, int l, int h)
{
    if (l < h)
    {
        int PIndex = qs(v, l, h);
        quickSort(v, l, PIndex - 1);
        quickSort(v, PIndex + 1, h);
    }
}

int main()
{
    vector<int> v = {3, 1, 2, 100, 9};
    int n = v.size();
    quickSort(v, 0, n - 1);
    cout << "after applying quick sort:" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}
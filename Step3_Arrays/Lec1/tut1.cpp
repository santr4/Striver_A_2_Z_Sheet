// ** largest element in array **

class Solution
{
public:
    int largest(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        if (n == 1)
        {
            return arr[0];
        }
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxi)
            {
                maxi = arr[i];
            }
        }
        return maxi;
    }
};

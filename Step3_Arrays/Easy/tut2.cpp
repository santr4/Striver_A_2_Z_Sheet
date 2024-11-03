// ** second largest element in array **

class Solution
{
public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        // Code Here
        int n = arr.size();
        if (n == 1)
        {
            return -1;
        }
        if (n == 2)
        {
            if (arr[0] == arr[1])
            {
                return -1;
            }
        }
        int maxi = INT_MIN;
        int s_maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxi)
            {
                s_maxi = maxi;
                maxi = arr[i];
            }
            if (arr[i] < maxi && arr[i] > s_maxi)
            {
                s_maxi = arr[i];
            }
        }
        return s_maxi;
    }
};
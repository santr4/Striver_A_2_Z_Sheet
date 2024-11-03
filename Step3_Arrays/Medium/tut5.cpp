// Maximum Score from Subarray Minimums

class Solution
{
public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr)
    {
        // Your code goes here
        int n = arr.size();
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum = max(sum, (arr[i] + arr[i - 1]));
        }
        return sum;
    }
};
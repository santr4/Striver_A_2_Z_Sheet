// 53. Maximum Subarray

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int maxiSum = INT_MIN, sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            maxiSum = max(maxiSum, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxiSum;
    }
};
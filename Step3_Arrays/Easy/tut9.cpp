// ** 485. Max Consecutive Ones **

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0, maxi = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            if (nums[i] == 0)
            {
                count = 0;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};
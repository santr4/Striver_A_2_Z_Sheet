// ** 1838. Frequency of the Most Frequent Element **

class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        int n = nums.size();
        int l = 0, r, maxF = 0;
        long sum = 0;
        sort(nums.begin(), nums.end());
        for (r = 0; r < n; r++)
        {
            sum += nums[r];
            while (sum + k < static_cast<long>(nums[r]) * (r - l + 1))
            {
                sum -= nums[l];
                l++;
            }
            maxF = max(maxF, r - l + 1);
        }

        return maxF;
    }
};
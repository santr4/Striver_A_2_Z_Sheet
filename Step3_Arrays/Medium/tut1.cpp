// 1. Two Sum

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int complement = target - nums[i];
            if (mp.find(complement) == mp.end())
            {
                mp[nums[i]] = i;
            }
            else
            {
                return {mp[complement], i};
            }
        }
        return {-1, -1};
    }
};

// time complexity o(n).
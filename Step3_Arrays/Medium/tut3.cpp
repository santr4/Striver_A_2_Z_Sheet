// 169. Majority Element

// Better Approach

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int ans = -1;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second > (n / 2))
            {
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};

// Optimal Approach - Moore's Voting Algorithm

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0, Ele;
        for (int i = 0; i < n; i++)
        {
            if (count == 0)
            {
                count = 1;
                Ele = nums[i];
            }
            else if (nums[i] == Ele)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return Ele;
    }
};
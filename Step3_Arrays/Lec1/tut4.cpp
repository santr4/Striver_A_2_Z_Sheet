// ** 26. Remove Duplicates from Sorted Array **

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int ptr = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                nums[ptr + 1] = nums[i + 1];
                ptr = ptr + 1;
            }
        }
        return ptr + 1;
    }
};
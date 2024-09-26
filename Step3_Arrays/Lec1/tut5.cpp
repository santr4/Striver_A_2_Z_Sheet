// ** 189. Rotate Array **

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (k == n)
        {
        }
        else if (k % n != 0)
        {
            k = k % n;
            vector<int> temp;
            int i = n - k;
            while (k > 0)
            {
                temp.push_back(nums[i]);
                i++;
                k--;
            }
            for (int i = 0; i < n; i++)
            {
                temp.push_back(nums[i]);
            }
            for (int i = 0; i < n; i++)
            {
                nums[i] = temp[i];
            }
        }
    }
};
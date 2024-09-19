// ** Minimum Jumps **

class Solution
{
public:
    int minJumps(vector<int> &arr)
    {
        // Your code here
        int n = arr.size();
        int maxR = 0, lastIndex = 0, i;
        int jumps = 0;

        // base cases

        if (n == 1)
        {
            return 0;
        }
        if (arr[0] == 0)
        {
            return -1;
        }

        // actual logic
        for (int i = 0; i < n; i++)
        {
            maxR = max(maxR, i + arr[i]);
            if (i == lastIndex)
            {
                jumps++;
                lastIndex = maxR;
            }
            if (i == maxR)
            {
                jumps = -1;
                break;
            }
            if (lastIndex >= n - 1)
            {
                break;
            }
        }
        return jumps;
    }
};
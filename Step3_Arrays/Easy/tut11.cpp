// ** Longest Sub-Array with Sum K **

class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        // Complete the function
        long long prefixSum = 0;
        map<long long, int> mp;
        int maxLen = 0;
        for (int i = 0; i < N; i++)
        {
            prefixSum += A[i];
            if (prefixSum == K)
            {
                maxLen = max(maxLen, (i + 1));
            }
            long long rem = prefixSum - K;
            if (mp.find(rem) != mp.end())
            {
                maxLen = max(maxLen, i - mp[rem]);
            }
            if (mp.find(prefixSum) == mp.end())
            {
                mp[prefixSum] = i;
            }
        }
        return maxLen;
    }
};
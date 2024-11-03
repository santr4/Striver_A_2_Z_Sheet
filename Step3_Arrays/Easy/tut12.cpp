// Longest Sub-Array with Sum K with all elements in the array as 0 or positive.

class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        // Complete the function
        int left = 0, right = 0;
        long long sum = A[0];
        int maxLength = 0;
        while (right < N)
        {
            while (left <= right && sum > K)
            {
                sum -= A[left];
                left++;
            }
            if (sum == K)
            {
                maxLength = max(maxLength, right - left + 1);
            }
            right++;
            if (right < N)
            {
                sum += A[right];
            }
        }
        return maxLength;
    }
};
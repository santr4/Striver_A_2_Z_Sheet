// ** Sorted Array Search **

class Solution
{
public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched

    int searchInSorted(int arr[], int N, int K)
    {
        // Your code here
        int low = 0, high = N - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == K)
            {
                return 1;
            }
            if (arr[low] <= arr[mid])
            {
                if (arr[low] <= K && K <= arr[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
        }
        return -1;
    }
};
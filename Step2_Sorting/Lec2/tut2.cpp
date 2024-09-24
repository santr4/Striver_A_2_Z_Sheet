// ** recursive bubble sort **

class Solution
{
public:
    void insert(int arr[], int i)
    {
        // code here
    }

public:
    void recursive_insertionSort(int arr[], int i, int n)
    {
        if (i == n)
        {
            return;
        }
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
        recursive_insertionSort(arr, i + 1, n);
    }
    // Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        // code here
        recursive_insertionSort(arr, 0, n);
    }
};
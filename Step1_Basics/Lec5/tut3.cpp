// ** print N to 1 without loop. **

class Solution
{
public:
    void printNos(int N)
    {
        // code here
        if (N < 1)
        {
            return;
        }
        cout << N << " ";
        N--;
        printNos(N);
    }
};
// ** print 1 to N without loop. **

class Solution
{
public:
    // Complete this function
    int n = 1; // global variable.
    void printNos(int N)
    {
        // Your code here
        if (n == N + 1)
        {
            return;
        }
        else
        {
            cout << n << " ";
            n++;
            printNos(N);
        }
    }
};
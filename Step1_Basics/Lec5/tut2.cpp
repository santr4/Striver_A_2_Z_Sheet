// ** print GFG n times without using loop. **

class Solution
{
public:
    int n = 1;

    void printGfg(int N)
    {
        // Code here
        if (n == N + 1)
        {
            return;
        }
        else
        {
            cout << "GFG" << " ";
            n++;
            printGfg(N);
        }
    }
};
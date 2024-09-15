// **
class Solution
{
public:
    double switchCase(int choice, vector<double> &arr)
    {
        // code here
        double ans = 1.0;
        switch (choice)
        {
        case 1:
            ans = M_PI * arr[0] * arr[0];
            break;
        default:
            ans = ans * arr[1] * arr[0];
        }
        return ans;
    }
};
// ** Search Query Auto Complete

class AutoCompleteSystem
{
public:
    map<string, int> mp;
    string s = "";

    AutoCompleteSystem(vector<string> &sentences, vector<int> &times)
    {
        // write code for constructor
        int n = sentences.size();
        for (int i = 0; i < n; i++)
        {
            mp[sentences[i]] = times[i];
        }
    }

    static bool cmp(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second > b.second;
    }

    vector<string> input(char c)
    {
        // write code to return the top 3 suggestions when the current character in the
        // stream is c c == '#' means , the current query is complete and you may save
        // the entire query into historical data
        vector<string> v1;
        vector<pair<string, int>> v2;
        if (c == '#')
        {
            mp[s]++;
            s = "";
            v1.clear();
            return v1;
        }
        else
        {
            s += c;
            for (auto it : mp)
            {
                if (it.first.find(s) == 0)
                {
                    v2.push_back(it);
                }
            }
            sort(v2.begin(), v2.end(), cmp);
            for (auto it : v2)
            {
                if (v1.size() < 3)
                {
                    v1.push_back(it.first);
                }
                else
                {
                    break;
                }
            }
        }
        return v1;
    }
};
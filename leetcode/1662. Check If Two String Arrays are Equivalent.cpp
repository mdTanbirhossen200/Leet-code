#include <bits\stdc++.h>
using namespace std;

class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &w1, vector<string> &w2)
    {
        bool result = false;
        string a = "", b = "";
        for (int i = 0; i < w1.size(); i++)
        {
            a += w1[i];
        }
        for (int i = 0; i < w2.size(); i++)
        {
            b += w2[i];
        }
        if (a == b)
            result = true;
        return result;
    }
};

int main()
{
    vector<string>str = {"abc"};
    vector<string>str1= {"abc"};

    Solution sol;
    cout<<sol.arrayStringsAreEqual(str,str1) ? "Yes" : "No";
    return 0;

}
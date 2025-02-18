#include <bits\stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {

        string newStr = "";

        for (char c : s)
        {
            if (isalnum(c))
            {
                newStr += tolower(c);
            }
        }

        string reversed = newStr;
        reverse(reversed.begin(), reversed.end());

        return newStr == reversed;
    }
};

int main()
{
    Solution sol;
    string s = "abg";
    cout << sol.isPalindrome(s) ? "True" : "false";
    return 0;
}
#include <iostream>
using namespace std;

int countSubStr(string s)
{
    int ans = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            char left = s[i], right = s[i + 1];
            int j = i, k = i + 1;
            while (j >= 0 && s[j] == left && k < s.length() && s[k] == right)
                ans++, j--, k++;
        }
    }
    return ans;
}


int main()
{
    string str = "00110011";
    cout << countSubStr(str);
    return 0;
}

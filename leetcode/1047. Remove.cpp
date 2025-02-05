#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    string temp = "";
    int i = 0;

    while (i < s.length())
    {
        if (temp.empty() || s[i] != temp.back())
        {
            temp.push_back(s[i]);
        }
        else
        {
            temp.pop_back();
        }
        i++;
    }

    return temp;
}

int main()
{
    string s = "abbaca";
    string result = removeDuplicates(s);
    cout << result << endl;

    return 0;
}
#include<bits\stdc++.h>
using namespace std;

vector<int> FindAnagrams(string &s, string &p)
{
    vector<int> ans;

    vector<int> arr1(26, 0), arr2(26, 0);

    int n = s.length(), m = p.length();

    if (m > n)
        return ans;

    for (int i = 0; i < m; i++)
        arr1[p[i] - 'a']++, arr2[s[i] - 'a']++;

    if (arr1 == arr2)
        ans.push_back(0);

    for (int i = m; i < n; i++)
    {
        arr2[s[i] - 'a']++;

        arr2[s[i - m] - 'a']--;

        if (arr1 == arr2)
            ans.push_back(i - m + 1);
    }

    return ans;
}

int main()
{
   
    string s = "favavfvaf", p = "fav";

    vector<int> arr = FindAnagrams(s, p);
    if (arr.empty())
        cout << "There are No Anagrams of " << p << " in " << s << endl;
    else
    {
        cout << "Starting Indices of Anagrams are " << endl;
        for (auto &val : arr)
            cout << val << " ";
    }

    return 0;
}


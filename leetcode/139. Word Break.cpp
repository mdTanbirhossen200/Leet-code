#include <bits\stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string> &wordDict)
{
    int n = s.length();

    unordered_set<string> wordSet(wordDict.begin(), wordDict.end());

    vector<bool> dp(n + 1, false);

    dp[0] = true;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {

            if (dp[j] && wordSet.count(s.substr(j, i - j)))
            {
                dp[i] = true;

                break;
            }
        }
    }

    return dp[n];
}

int main() {
    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};

    if (wordBreak(s, wordDict)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

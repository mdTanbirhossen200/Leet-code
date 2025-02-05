#include <bits\stdc++.h>
using namespace std;

long long calculateScore(string s)
{
    long long score = 0;
    vector<int> indices[26] = {};
    for (int i = 0; i < s.size(); ++i)
    {
        int b = (s[i] - 'a');
        int C = 25 - b;
        if (!indices[C].empty())
        {
            score += i - indices[C].back();
            indices[C].pop_back();
        }
        else
            indices[b].push_back(i);
    }
    return score;
}

int main()
{
    string str[] = {"abcdef"};
    for (string st : str)
    {
        cout << calculateScore(st) << endl;
    }
    return 0;
}
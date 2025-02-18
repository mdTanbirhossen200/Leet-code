#include <bits/stdc++.h>
using namespace std;

bool checkDuplicatesWithinK(vector<int> &arr, int k)
{
    unordered_set<int> seen;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i > k)
        {
            seen.erase(arr[i - k - 1]);
        }
        if (seen.find(arr[i]) != seen.end())
        {
            return true;
        }
        seen.insert(arr[i]);
    }
    return false;
}

// Driver method to test above method
int main()
{
    vector<int> arr = {10, 5, 3, 4, 3, 5, 6};
    if (checkDuplicatesWithinK(arr, 3))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

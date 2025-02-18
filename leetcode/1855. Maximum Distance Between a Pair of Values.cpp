#include <bits\stdc++.h>
using namespace std;

int maxDistance(vector<int> &nums1, vector<int> &nums2)
{
    int ans = 0;
    int i = 0;
    int j = 0;
    while (i < nums1.size() and j < nums2.size())
    {
        if (nums1[i] <= nums2[j])
        {
            if (i <= j)
            {
                ans = max(ans, j - i);
            }
            j++;
        }
        else
        {
            i++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {30,29,19,5};
    vector<int> arr1= {25,25,25,25,25};
    cout << maxDistance(arr,arr1);
    return 0;
}
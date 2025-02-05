#include<bits\stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        vector<int> result;
        set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(result));
    
        return result;
    }

    int main() {
    vector<int> a = {4,9,5};
    vector<int> b = {9,4,9,8,4};

    vector<int> res =intersect(a, b);
  
    for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

 vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);

        int left = 1;
        for (int i = 0; i < nums.size(); i++) {
            output[i] *= left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            output[i] *= right;
            right *= nums[i];
        }

        return output;    

 }

 int main() {
    vector<int> arr = {1,2,3,4};
    vector<int> res = productExceptSelf(arr);
    for (int val : res) 
        cout << val << " ";
    return 0;
}
#include<bits\stdc++.h>
using namespace std;

vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }

int main() {
    vector<int> arr = {3, 2, 5, 6, 1, 4};
    sortArray(arr);
    for (int x : arr) 
        cout << x << " ";
    return 0;
}

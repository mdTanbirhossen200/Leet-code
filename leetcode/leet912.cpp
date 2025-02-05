#include<bits\stdc++.h>
using namespace std;

vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>, greater<int>>minHeap;
        for(auto&num : nums){
            minHeap.push(num);
        }
        // Extract elements from the heap and store them back in the array
        int index = 0;
        while(!minHeap.empty()) {
            nums[index] = minHeap.top();
            index++;
            minHeap.pop();
        }

        return nums;
    }

int main() {
    vector<int> arr = {3, 2, 5, 6, 1, 4};
    sortArray(arr);
    for (int x : arr) 
        cout << x << " ";
    return 0;
}

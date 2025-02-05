#include <bits/stdc++.h>
using namespace std;

int majorityElement(const vector<int>& arr) {
    int n = arr.size();
    unordered_map<int, int> countMap;

    for (int num : arr) {
        countMap[num]++;
      
        if (countMap[num] > n / 2) {
            return num;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {3,2,3};
  
    cout << majorityElement(arr) << endl;

    return 0;
}
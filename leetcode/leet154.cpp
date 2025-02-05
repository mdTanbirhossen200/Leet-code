#include<bits\stdc++.h>
using namespace std;

int findMin(vector<int>& arr) {
  
    int res = arr[0];

    for (int i = 1; i < arr.size(); i++) 
        res = min(res, arr[i]);

    return res;
}

int main() {
    vector<int> arr = {5, 6, 1, 2, 3, 4};
    int n = arr.size();

    cout << findMin(arr) << endl;
    return 0;
}
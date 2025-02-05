#include<bits\stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
        
         for (auto& x : arr) 
            if (x <= k)  k++;
            else break;
        
        return k;
    }

    int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << findKthPositive(arr, k);
    return 0;
}

#include<bits\stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& a, vector<int>& b) {
int seen[1002] = {0};
        for(auto i:a)
        {
            seen[i] = true;
        }

        vector<int>ans;
        for(auto i: b)
        {
            if(seen[i] == true)
            {
                ans.push_back(i);
                seen[i] = false;
            }
        }

        return ans;
    }

int main() {
    vector<int> a = {4,9,5};
    vector<int> b = {9,4,9,8,4};
    vector<int> res = intersection(a, b);    
    for (int x : res) {
        cout << x << " ";
    }
}
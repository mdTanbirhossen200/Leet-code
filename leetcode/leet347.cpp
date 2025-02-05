#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> cnt;
        using pii = pair<int, int>;
        for (int x : nums) {
            ++cnt[x];
        }
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        for (auto& [x, c] : cnt) {
            pq.push({c, x});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        vector<int> ans;
        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }


int main()
{
    vector<int> arr{ 3, 1, 4, 4, 5, 2, 6, 1 };
    int K = 2;

    // Function call
    vector<int> ans = topKFrequent(arr, K);
    cout << K
         << " numbers with most occurences are : " << endl;
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " ";
    }

    return 0;
}
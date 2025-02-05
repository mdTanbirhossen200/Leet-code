#include<bits\stdc++.h>
using namespace std;

int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }

    int main(){
    //int K = 2;
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices) << endl;

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int maxProfit(int* prices, int n) {
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < n; i++) {
        // Cheapest buying price seen so far
        minPrice = min(minPrice, prices[i]);
        // Profit if we sell today
        int profit = prices[i] - minPrice;
        // Maximum profit found so far
        maxProfit = max(maxProfit, profit);
    }
    return maxProfit;
}
int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;
    int* prices = new int[n];
    cout << "Enter prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cout << "Maximum profit: " << maxProfit(prices, n) << endl;
    delete[] prices;
    return 0;
}
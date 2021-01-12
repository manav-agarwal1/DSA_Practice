// Best time to buy and sell the stock 2
#include <iostream>
using namespace std;
int main() {
    int profit = 0;
    int n = 6;
    int prices[n] = {7, 1, 5, 3, 6, 4};
    for (int i = 1; i < n; i++) {
        if (prices[i] > prices[i - 1]) {
            profit = profit + prices[i] - prices [i - 1];
        }
    }
    cout << profit << endl;
    return 0;
}

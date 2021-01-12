// Best time to buy and sell the stock problem
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days : " << endl;
    cin >> n;
    double arr[n];
    cout << "Enter daily prices : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double profit = 0;
    double roll_max = arr[n-1]; // rolling max from right
    for (int i = n-2; i>=0; i--){
        double ret = roll_max - arr[i];
        roll_max = max(arr[i], roll_max);
        profit = max(profit, ret);
    }
    // double roll_min = arr[0];
    // for (int i = 1; i < n; i++) {
    //     double ret = arr[i] - roll_min;
    //     roll_min = min(arr[i], roll_min);
    //     profit = max(profit, ret);
    // }
    cout << "Max Possible Profit = " << profit << endl;
    return 0;
}
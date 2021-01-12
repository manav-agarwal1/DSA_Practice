// Trapping rain water problem
#include <iostream>
using namespace std;

int main() {
    int n = 12;
    int arr[n] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int res[n];
    res[n-1] = 0;
    // preprocessing the max on right of each i
    for (int i = n-2; i >= 0; i--) {
        res[i] = max(res[i+1], arr[i+1]);
        // cout << i << ' ' << res[i] << endl;
    }
    // now iterate from left
    int roll_max = 0;
    for (int i = 0; i < n; i++) {
        res[i] = max(min(roll_max, res[i]) - arr[i], 0);
        roll_max = max(roll_max, arr[i]);
        cout << i << ' ' << res[i] << endl;
    }
    return 0;
}
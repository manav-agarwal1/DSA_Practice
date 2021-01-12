//  product of array except self
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {4, 5, 6, 2, 10};
    // Preprocessing right part
    // int res[n];
    // res[n-1] = 1;
    // for (int i = n-2; i>=0; i--) {
    //     res[i] = res[i + 1] * arr[i + 1];
    // }
    // int prod_left = 1;
    // for (int i = 0; i < n; i++) {
    //     res[i] = res[i] * prod_left;
    //     prod_left = prod_left * arr[i];
    //     cout << i << " " << res[i] << endl;
    // }
    // preprocessing left part
    int res[n];
    res[0] = 1;
    cout << 0 << " " << res[0] << endl;
    for (int i = 1; i < n; i++) {
        res[i]  = res[i - 1] * arr[i - 1];
        cout << i << " " << res[i] << endl;
    }
    int prod_right = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] = prod_right * res[i];
        prod_right =  prod_right * arr[i];
        cout << i << " " << res[i] << endl;
    }
    return 0;
}
// we could have used a separate aray for preprocessing but using same arra
// saves us memory.
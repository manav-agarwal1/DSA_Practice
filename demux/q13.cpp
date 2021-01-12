// k closest element
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr{0,0,1,2,3,3,4,7,7,8};
    int k = 3;
    int x = 5;
    int n = arr.size(), lo = 0, hi = n - k - 1, mid;
        // FFFTTTT
        // p(x) : abs(arr[i] - x) <= abs(arr[i+k] - x)
    while(lo < hi) {
        cout << lo << " " << hi << endl;;
        mid = lo + (hi - lo)/2;
        if(abs(arr[mid] - x) < abs(arr[mid+k] - x))
            hi = mid;
        else
            lo = mid+1;
    }
    // Sanity check
    cout << "t = " << arr[lo + k] << endl;
    if(abs(arr[lo] - x) > abs(arr[lo + k] - x))
        lo += 1;
    cout << "res = " << lo << endl;
    for(auto i: vector<int>(arr.begin()+lo, arr.begin() + lo + k))
        cout << i << endl;
    return 0;
}
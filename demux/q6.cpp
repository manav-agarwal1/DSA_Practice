#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums{1, 1, 2, 2, 3, 3, 4};
    int lo = 0, hi = nums.size() - 1, mid;
    while(lo < hi) {
        mid = lo + (hi - lo + 1) / 2;
        if (mid % 2 == 0) {
            if (nums[mid] == nums[mid - 1])
                hi = mid - 1;
            else
                lo = mid;
        }
        else {
            if (nums[mid] == nums[mid + 1])
                hi = mid - 1;
            else
                lo = mid;
        }
    }
    cout << nums[lo] << endl;
    return 0;
}
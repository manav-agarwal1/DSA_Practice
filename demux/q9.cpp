// Find the Smallest Divisor given by threshold
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    vector<int> nums{1,2,5,9};
    int threshold = 6;
    int lo = 1;
    int hi = *max_element(nums.begin(),nums.end());
    int n = nums.size();
    int mid;
    while(lo < hi) {
        // cout << lo << ' ' << hi << endl;
        mid = lo + (hi - lo)/2;
        // cout << "mid = " << mid << endl;
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += ceil(float(nums[i])/float(mid));
        }
        // cout << "sum = " << sum << endl;
        if(sum <= threshold)
            hi = mid;
        else
            lo = mid + 1;
    }
    cout << "hi = " << hi << endl;
    return 0;
}
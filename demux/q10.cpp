// Capacity to ship packages within D days
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    vector<int> weights{1,2,3,4,5,6,7,8,9,10};
    int D = 5;
    int lo = *max_element(weights.begin(), weights.end());
    int hi = accumulate(weights.begin(), weights.end(), 0);
    int n = weights.size();
    int mid;
    while(lo < hi){
        // cout << lo << ' ' << hi << endl;
        // mid = lo + (hi - lo)/2;
        // cout << "mid = " << mid << endl;
        int days = 1, load = 0;
        for(int i = 0; i<n; i++){
            if(load <= mid)
                load += weights[i];
            if(load > mid){
                days += 1;
                load = weights[i];
            }
            // cout << i << ' ' << load << endl;
        }
        // cout << "res = " << days << endl;
        if(days <= D)
            hi = mid;
        else lo = mid + 1;
    }
    // cout << "lo = " << lo << endl;
}
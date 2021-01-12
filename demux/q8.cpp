// Fairworkload Problem
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
//correction needed

int main() {
    vector<int> folder{10,20,30,40,50,60,70,80,90};
    int workers = 3;
    int n = folder.size();
    int lo = *max_element(folder.begin(), folder.end());
    int hi = accumulate(folder.begin(), folder.end(), 0);

    while(lo < hi) {
        int mid = lo + (hi - lo)/2;
        int require = 1;
        int load = 0; 
        for(int i = 0; i< n; i++){
            if(load <= mid)
                load+=folder[i];
            if(load > mid){
                require += 1;
                load = folder[i];
            }
        }
        // cout << mid << " " << require << endl;
        if(require<=workers)
            hi = mid;
        else lo = mid + 1;
        
    }
    cout << lo << endl;
    return 0;
}
//First missing positive
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums{1,2,0};
    int n = nums.size(),i,j;
    i = 0, j = n-1;
    // moving unwanted things to right
    while(i<=j){
        cout << i << ' ' << j << endl;
        if(nums[i] >= 1 && nums[i] <= n){
            i++;
            continue;
        }
        swap(nums[i],nums[j]);
        j--;
    }
    cout << i << ' ' << j << endl;
    // highlight
    for(i = 0; i <= j; i++){
        if(nums[abs(nums[i]) - 1] > 0)
            nums[abs(nums[i]) - 1] *= -1;
    }
    for(auto k: nums)
        cout << k << endl;
    // find
    for(int i = 0; i<=j; i++){
        if(nums[i] > 0){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << i+1 << endl;
    return 0;
}
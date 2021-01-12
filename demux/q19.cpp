// Sum of 2 n bit binary integers
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a{1,1,0,1,1,0};
    vector<int> b{0,1,1,0,0,0};
    vector<int> res(a.size()+1, 0);
    int carry = 0,sum;
    for(int i = a.size()-1; i >= 0; i--){
        sum = a[i] + b[i] + carry;
        res[i+1] = sum%2;
        carry = (sum >= 2)?1:0;
    }
    res[0] = carry;
    for(auto k: res)
        cout << k;
    cout << endl;
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

void multiply(vector<int> &prod, int i) {
    int carry = 0; curr_prod;

    for (int i = 0; i < prod.size(); j++) {
        curr_prod = (i * prod[j] + carry);
        prod[j] = curr_prod % 10;
        carry = curr_prod/10;
    }
    while(carry) {
        int curr_digit = carry%10;
        prod.push_back(curr_digit);
        carry = carry/10;
    }
}

void extraLongFactorial(int n) {
    vector<int> prod;

    // Initalise with 1
    prod.push_back(1);

    for(int i = 0; i<=n; i++) {
        multiply(prod, i);
    }
}
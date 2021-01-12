#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
    vector<int> vect(1, 1);
    for (int i = 1; i <= n; i++){
        int carry = 0;
        int n = vect.size();
        for (int j = n - 1; j >= 0; j--) { 
            int prod =  vect[j] * i + carry;
            vect[j] = prod % 10;
            carry = prod / 10;
        }
        
        while (carry) {
            int curr_digit = carry % 10;
            vect.insert(vect.begin(), curr_digit);
            carry = carry / 10;
        }
    }
    for (int i = 0; i < int(vect.size()); i++) {
        cout << vect[i];
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
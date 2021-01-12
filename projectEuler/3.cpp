#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
// efficient code to get prime factpos
// this code returns all the prime factors
int main(){
    long int n = 600851475143, i;
    while(!(n%2)){
        cout << 2 << " ";
        n = n / 2;
    }

    for(i = 3; i <= sqrt(n); i+=2){
        while(!(n%i)){
            cout << i << " ";
            n = n / i;
        }
    }

    if(n > 2) cout << n << endl;
    return 0;
}
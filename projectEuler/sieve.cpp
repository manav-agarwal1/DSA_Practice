#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
//  Sieve of eratosthenes
// to get prime numbers less than or equal to n
// function to check for prime
bool isPrime(int n){
    int i;
    for(i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    
    int n = 20, i, j;
    vector<bool> cand(n+1, true);

    for(i = 2; i*i <= n; i++){
        // cout << isPrime(i) << endl;
        if(isPrime(i)){
            for(j = i*i; j <= n; j+=i)
                cand[j] = false;
        }
    }
    // for(auto k: cand) cout << k << '\t';
    for(i = 2; i <= n; i++){
        if(cand[i]) cout << i << endl;
    }
    return 0;
}
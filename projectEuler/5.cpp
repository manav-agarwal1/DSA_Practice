#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
// efficient code to get prime factpos
// this code returns all the prime factors
bool isPrime(int n){
    int i;
    for(i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    int n = 20, i, prod = 1;
    for(i = 2; i <= n; i++){
        if(isPrime(i)){
            if(i*i > n){
                prod *= i;
                continue;
            }
            prod *= pow(i, floor(log(n) / log(i)));
        }
    }
    cout << prod << endl;
    return 0;
}

// vector<int> primeFactor(int n){
//     vector<int> res;
//     int i;
//     while(!(n%2)){
//         res.push_back(2);
//         n = n / 2;
//     }

//     for(i = 3; i <= sqrt(n); i+=2){
//         while(!(n%i)){
//             res.push_back(i);
//             n = n / i;
//         }
//     }

//     if(n > 2) res.push_back(n);
//     return res;
// }

// int main(){
//     vector<int> filtered, temp;
//     int i, prod, n = 20;
//     for(i = 2; i <= n; i++){
//         if(isPrime(i)){
//             filtered.push_back(i);
//             continue;
//         }
//         temp = primeFactor(i);
//         filtered.insert(filtered.end(), temp.begin(), temp.end());
//     }
//     prod = 1;
//     for(int k: filtered){
//         if(prod % k == 0) continue;
//         i = 1;
//         while(pow(k,i) < n) i++;
//         cout << k  << " " << i << endl;
//         // since it count the relevant power 1 extra time
//         prod = prod * pow(k,i-1);
//     }
//     cout << prod << endl;
//     return 0;
// }
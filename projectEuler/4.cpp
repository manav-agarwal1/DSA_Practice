#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPalindrome(int n){
    // always preserve the input
    // it is a good trade off
    int temp = 0, n_copy = n;
    while(n_copy > 0){
        temp = temp*10 + n_copy%10;
        n_copy = n_copy/10;
    }
    return temp == n;
}

int main(){
    int i, j, dj;
    int n = 8;
    int max = pow(10, n) - 1;
    int low = max / 10;
    int a = 0, b = 0, max_pal = 0;
    for(i = max; i > low; i--){
        if(i % 11 == 0){
            j = max; dj = 1;
        }
        else{
            int t = max/11;
            j = t*11;
            dj = 11;
        }
        while(j > i){
            int temp = i*j;
            if(temp < max_pal) break;
            if(temp > max_pal && isPalindrome(temp)){
                a = i; b = j; max_pal = temp;
            }
            j -= dj;
        }

    }
    cout << a << '\t' << b << '\t' << max_pal << endl;
    return 0;
}
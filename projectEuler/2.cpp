#include <iostream>
using namespace std;

int main(){
    int a0 = 1, a1 = 2, ai = 0, sum = 2;
    while(ai <= 4000000){
        ai = a0 + a1;
        a0 = a1; a1 = ai;
        if(ai%2 == 0)
            sum += ai;
    }
    cout << sum << endl;
    return 0;
}
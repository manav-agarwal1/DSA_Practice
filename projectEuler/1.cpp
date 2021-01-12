#include <iostream>
using namespace std;

int main(){
    int i, res = 0;
    for(i = 1; i < 1000; i++)
        res += ((i%5==0)||(i%3==0))?i:0;
    cout << res << endl;
    return 0;
}
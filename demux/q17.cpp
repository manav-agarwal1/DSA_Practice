// Insertion sort in non decreasing order
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr{1,2,4,6,5,3};
    for(int i = 1; i < arr.size(); i++){
        int key = arr[i];
        int j = i-1;
        while(j >=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(auto k: arr)
        cout << k << '\t';
    cout << endl;
    return 0;
}

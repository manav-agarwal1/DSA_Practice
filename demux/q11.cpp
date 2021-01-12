// Search in a matrix
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix
    {
        {1}
    };
    int target = 0;
    if(matrix.size() == 0 || matrix[0].size() == 0) return 0;
    int m = matrix.size(), n = matrix[0].size();
    int lo = 0, hi = m*n - 1, mid;
    while(lo<hi){
        mid = lo + (hi - lo)/2;
        if (matrix[mid/n][mid%n] == target){
            cout << true << endl;
            return 0;
        }
        else{
            if(matrix[mid/n][mid%n] < target)
                lo = mid+1;
            else
                hi = mid;
        }
    }
    if(matrix[lo/n][lo%n] == target)
        cout << true << endl;
    else
        cout << false << endl;
    return 0;
}
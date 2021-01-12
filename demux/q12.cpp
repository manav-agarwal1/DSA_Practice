// Search in a matrix
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size(), i, j;
    i = 0, j = n-1;
    while(i < m && j >= 0){
        if(matrix[i][j] == target)
            return 1;
        if(matrix[i][j] < target)
            i++;
        else
            j--;
    }
    return false;
}
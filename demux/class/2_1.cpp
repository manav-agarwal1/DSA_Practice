// valid sudoku
bool isValidSudoku(vector<vector<char>>& board) {
    vector<vector<int>> row(10, vector<int>(10, 0));
    vector<vector<int>> col(10, vector<int>(10, 0));
    vector<vector<int>> block(10, vector<int>(10, 0));
    
    int i, j;
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9; j++){
            if(board[i][j] == '.') continue;
            int block_num = 3*(i/3) + (j/3);
            if(row[i][board[i][j] - '0'] || col[j][board[i][j] - '0'] || block[block_num][board[i][j] - '0']) return false;
            row[i][board[i][j] - '0'] = 1;
            col[j][board[i][j] - '0'] = 1;
            block[block_num][board[i][j] - '0'] = 1;
        }
    }
    return true;
}

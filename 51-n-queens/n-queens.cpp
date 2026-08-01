class Solution {
public:
    vector<vector<string>> result;
    
    bool checkColumn(vector<string>& board, int column, int n, int i) {
        if (i >= n) return true;
        if (board[i][column] == 'Q') return false;
        return checkColumn(board, column, n, i + 1);
    }
    
    bool checkLeftUp(vector<string>& board, int row, int column) {
        if (row < 0 || column < 0) return true;
        if (board[row][column] == 'Q') return false;
        return checkLeftUp(board, row - 1, column - 1);
    }
    
    bool checkRightUp(vector<string>& board, int row, int column, int n) {
        if (row < 0 || column >= n) return true;
        if (board[row][column] == 'Q') return false;
        return checkRightUp(board, row - 1, column + 1, n);
    }
    
    bool safe(vector<string>& board, int row, int column, int n) {
        return checkColumn(board, column, n, 0) &&
               checkLeftUp(board, row, column) &&
               checkRightUp(board, row, column, n);
    }
    
    void solve(vector<string>& board, int row, int n) {
        if (row == n) {
            result.push_back(board);
            return;
        }
        
        for (int col = 0; col < n; col++) {
            if (safe(board, row, col, n)) {
                board[row][col] = 'Q';
                solve(board, row + 1, n);
                board[row][col] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        solve(board, 0, n);
        return result;
    }
};
class Solution {
public:
    bool checker(int n, vector<vector<char>>& grid, int row, int col) {
        for (int i = 0; i < 9; i++) {
            if (grid[row][i] - '0' == n) return false;
            if (grid[i][col] - '0' == n) return false;
        }
        int boxr = (row / 3) * 3, boxc = (col / 3) * 3;
        for (int i = boxr; i < boxr + 3; i++)
            for (int j = boxc; j < boxc + 3; j++)
                if (grid[i][j] - '0' == n) return false;
        return true;
    }

    void solveSudoku(vector<vector<char>>& grid) {
        int emptyrow[81], emptycol[81], ycount = 0;
        for (int x = 0; x < 9; x++)
            for (int y = 0; y < 9; y++)
                if (grid[x][y] == '.') { emptyrow[ycount] = x; emptycol[ycount] = y; ycount++; }

        int limit = ycount, tries = 0;
        while (tries != limit) {
            int row = emptyrow[tries], col = emptycol[tries];
            int n = (grid[row][col] == '.' ? 0 : grid[row][col] - '0') + 1;
            bool placed = false;
            while (n <= 9) {
                if (checker(n, grid, row, col)) { grid[row][col] = '0' + n; placed = true; break; }
                n++;
            }
            if (placed) tries++;
            else { grid[row][col] = '.'; tries--; }
        }
    }
};
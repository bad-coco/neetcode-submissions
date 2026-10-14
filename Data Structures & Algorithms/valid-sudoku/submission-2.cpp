class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool isRowValid[9][9];
        bool isColValid[9][9];
        bool isBoxValid[9][9];

        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') continue;
                int number = board[row][col] - '1';
                if (isRowValid[row][number]) return false;
                if (isColValid[col][number]) return false;
                int box = (row / 3) * 3 + (col / 3);

                if (isBoxValid[box][number]) return false;
                isRowValid[row][number] = true;
                isColValid[col][number] = true;
                isBoxValid[box][number] = true;
            }
        }

        return true;
    }
};

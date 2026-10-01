class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool inRow[9][9];
        bool inCol[9][9];
        bool inBox[9][9];

        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') continue;

                int number = board[row][col] - '1';  // '3'-'1' =2
                if (inRow[row][number]) return false;
                if (inCol[col][number]) return false;
                int boxNumber = (row / 3) * 3 + (col / 3);
                if (inBox[boxNumber][number]) return false;

                inRow[row][number] = true;
                inCol[col][number] = true;
                inBox[boxNumber][number] = true;
            }
        }
        return true;
    }
};

//

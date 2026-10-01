class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            set<char> st;
            for (int col = 0; col < 9; col++) {
                char element = board[row][col];
                if (element == '.') {
                    continue;
                }
                if (st.find(element) != st.end()) {
                    return false;
                }
                st.insert(element);
            }
        }

        for (int col = 0; col < 9; col++) {
            set<char> st;
            for (int row = 0; row < 9; row++) {
                char element = board[row][col];
                if (element == '.') continue;
                if (st.find(element) != st.end()) {
                    return false;
                }
                st.insert(element);
            }
        }

        for (int row = 0; row < 9; row += 3) {
            int sr = row;
            int er = sr + 2;
            for (int col = 0; col < 9; col += 3) {
                int sc = col;
                int ec = sc + 2;
                set<char> st;
                for (int i = sr; i <= er; i++) {
                    for (int j = sc; j <= ec; j++) {
                        char element = board[i][j];
                        if (element == '.') {
                            continue;
                        }
                        if (st.find(element) != st.end()) {
                            return false;
                        }
                        st.insert(element);
                    }
                }
            }
        }
        return true;
    }
};

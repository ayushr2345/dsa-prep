class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Approach 1 - Brute force
        // unordered_set<char> tmpSet;
        // for (int i = 0; i < 9; i++) {
        //     for (int j = 0; j < 9; j++) {
        //         if (board[i][j] != '.') {
        //             if (!tmpSet.insert(board[i][j]).second) return false;
        //         }
        //     }
        //     tmpSet.clear();
        // }
        // for (int i = 0; i < 9; i++) {
        //     for (int j = 0; j < 9; j++) {
        //         if (board[j][i] != '.') {
        //             if (!tmpSet.insert(board[j][i]).second) return false;
        //         }
        //     }
        //     tmpSet.clear();
        // }

        // int offsetRow=0;
        // int offsetCol=0;
        // for (int i = 0; i < 3; i++) {
        //     for (int j = 0; j < 3; j++) {
        //         if (board[i + offsetRow][j + offsetCol] != '.') {
        //             if (!tmpSet.insert(board[i + offsetRow][j + offsetCol]).second) return false;
                    
        //         }
        //         if (i + offsetRow == 8 && j + offsetCol == 8) return true;
        //     }
        //     if (i == 2) {
        //         tmpSet.clear();
        //         offsetCol = offsetCol + 3;
        //         i = -1;
        //         if (offsetCol > 8) {
        //             offsetCol = 0;
        //             i = -1;
        //             offsetRow = offsetRow + 3;
        //         }
        //     }
        // }
        // return true;

        // Approach 2
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> squares[9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char val = board[i][j];
                if (val == '.') continue;
                int squareIndex = (i / 3) * 3 + (j / 3);
                if (!rows[i].insert(val).second ||
                    !cols[j].insert(val).second ||
                    !squares[squareIndex].insert(val).second) {
                    return false;
                }
            }
        }
        return true;
        
    }
};
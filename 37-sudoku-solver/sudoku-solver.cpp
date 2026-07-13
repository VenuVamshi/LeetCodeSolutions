using namespace std;
class Solution {
public:

    bool isSafe(vector<vector<char>>& board,int row,int col,int digit) {
        //verical check
        for(int i=0;i<board.size();i++) {
            if(board[i][col]== (char)(digit + '0')) {
                return false;
            }
        }
        //horizontal check
        for (int j = 0; j < board[0].size(); j++) {
            if (board[row][j]== (char)(digit + '0')) {
                return false;
            }
        }
        int startRow = (row/3) * 3;
        int startCol = (col/3) * 3;

        for (int i = startRow; i <= startRow + 2; i++) {
            for (int j = startCol; j <= startCol + 2; j++) {
                if (board[i][j]== (char)(digit + '0')) {
                    return false;
                }
            }
        }
        return true;

    }
    bool sudoku(vector<vector<char>>& board,int row,int col) {
        //base case
        if (row == 9) {
            return true;
        }
        //calculate nextRow and nextCol
        int nextRow = row;
        int nextCol = col+1;
        if (nextCol == 9) {
            nextRow++;
            nextCol = 0;
        }
        //already number present
        if(board[row][col] !='.') {
           return sudoku(board,nextRow,nextCol);
        }

        for (int digit = 1; digit <= 9; digit++) {
            if (isSafe(board,row,col,digit)) {
                char ch = digit + '0';
                board[row][col] = ch;
                if (sudoku(board,nextRow,nextCol)) {
                    return true;
                }
                board[row][col] = '.';

            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        sudoku(board,0,0);
    }
};
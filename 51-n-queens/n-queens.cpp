class Solution {
public:
    bool isSafe(vector<string>& board,int r,int c) {
        //HorizontalCheck
        for (int j = 0; j < board.size(); ++j) {
            if (board[r][j] == 'Q') {
                return false;
            }
        }
        //VerticalCheck
        for (int i = 0; i < board.size(); ++i) {
            if (board[i][c] == 'Q') {
                return false;
            }
        }
        //left diagonal check
        for (int i = r, j = c; i >= 0 && j >= 0; i--, j-- ) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        //right diagonal
        for (int i = r, j = c; i >= 0 && j < board.size(); i--, j++ ) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
        
        
    }
    void nQueens(vector<string>& board, int r, vector<vector<string>>& ans) {
        if (r == board.size() ) {
            ans.push_back(board);
            return;
        }
        
        for (int j = 0; j < board.size(); j++) {
            if (isSafe(board,r,j)) {
                board[r][j] = 'Q';
                nQueens(board,r+1,ans);
                board[r][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> solSet;
        
        vector<string> board(n,string(n,'.'));
        
        nQueens(board,0,solSet);
        
        return solSet;
    }
};
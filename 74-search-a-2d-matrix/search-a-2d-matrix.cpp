class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         //S1-Init Req DSs
    // track row and column
    int rows = matrix.size();
    int cols = matrix[0].size();
    int row = 0;
    int col = cols-1;

    // S2-Start Travarsal from top right corner and cont. till search space empty
    while(row < rows && col >= 0 ) {
        // A)Compare cur with target
        if(matrix[row][col] == target) {//found return true/pos
            return true;
        }
        else if (matrix[row][col] < target) {//B)skip cur row (Think carefully)
            row++;

        }
        else {//C)skip cur column
            col--;
        }
    }

    // S3-return false if traversal completed
    return false;

        
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //S1-Init Required DSs
    // to store and return answer
    vector<int> ans;

    // dimensions of matrics
    int r = matrix.size();
    int c = matrix[0].size();

    //boundaries
    int top = 0;
    int bottom = r-1;
    int left = 0;
    int right = c-1;

    //S2 Traverse Each Size and shrink till Traversal Space Become Empty
    while (left <= right && top <= bottom) {// equal saves us when odd dimension
        //Top row left to right and increment top boundary
        for (int j = left; j <= right; j++) {
            ans.push_back(matrix[top][j]);
        }
        top++;
        //Right column top to bottom and decrement right boundary
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;
        //bottom row right to left and decrement bottom boundary
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }
        //left column bottom to top increment left;
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    //return ans;
    return ans;
        
    }
};
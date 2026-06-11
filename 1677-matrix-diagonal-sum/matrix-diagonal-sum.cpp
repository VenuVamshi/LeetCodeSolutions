class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
         //S1-Init Required DSs
    // to store and return answer
    int sum = 0;

    // dimensions of matrics
    int n = mat.size();

    //S2 Traverse Each Row
    for (int i = 0; i < n; i++) {
        //primary diag and secondary diag
        sum += mat[i][i]+mat[i][n-1-i];
    }
    // S3-Remove intersection element if odd dims
    if ( n%2 == 1) {
        sum -= mat[n/2][n/2];
    }
    return sum;
    }
};
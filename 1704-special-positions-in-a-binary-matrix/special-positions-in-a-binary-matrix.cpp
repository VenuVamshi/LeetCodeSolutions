class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
    //S1-Init Req DSs
    int m = mat.size();
    int n = mat[0].size();

    vector<int> rowCount(m);
    vector<int> colCount(n);

    int ans = 0;
    //S1-Compute rowCount vectora and colCount Vector
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                rowCount[i]++;
            }
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            if (mat[i][j] == 1) {
                colCount[j]++;
            }
        }
    }
    //S2 Traverse whole array again with 3 conditions for each cell
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1 && rowCount[i] == 1 && colCount[j] == 1) {
                ans++;
            }
        }

    }
    //S3 return answer
    return ans;
    
    }
};
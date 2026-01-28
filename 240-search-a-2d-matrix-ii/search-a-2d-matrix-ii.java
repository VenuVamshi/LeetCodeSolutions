class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int rowlow = 0;
        int rowhigh = matrix.length - 1;
        int colhigh = matrix[0].length - 1;

        while(rowlow <= rowhigh && colhigh >= 0)
        {    
            if(target == matrix[rowlow][colhigh]) return true;
            else if (target < matrix[rowlow][colhigh]) colhigh--;
            else rowlow++;
        }
        return false;
    }
}
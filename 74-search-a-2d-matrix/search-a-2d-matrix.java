class Solution {
    public static int binarySearch(int[] A, int target){
        int low = 0;
        int high = A.length-1;
        while(low <= high){
            int mid = low + ((high-low)/2);
            if(target == A[mid]) return mid;
            else if(target < A[mid]) high = mid-1;
            else low = mid + 1;
        }
        return -1;
    }
    public boolean searchMatrix(int[][] matrix, int target) {
        int rowlow = 0;
        int rowhigh = matrix.length-1;
        int col = matrix[0].length;

        while(rowlow <= rowhigh){
            int rowmid = rowlow + ((rowhigh-rowlow)/2);

            if(target >= matrix[rowmid][0] && target <= matrix[rowmid][col-1]){
                //int index = binarySearch(matrix[rowmid],target);
                //if(index != -1) return true;
                int low = 0;
                int high = matrix[rowmid].length-1;
                while(low <= high){
                    int mid = low + ((high-low)/2);
                    if(target == matrix[rowmid][mid]) return true;
                    else if(target < matrix[rowmid][mid]) high = mid-1;
                    else low = mid + 1;
                }
                return false;
            }
            else if(target > matrix[rowmid][col-1])
                rowlow = rowmid +1;
            else 
                rowhigh = rowmid - 1;
        }
        return false;
        
    }
}
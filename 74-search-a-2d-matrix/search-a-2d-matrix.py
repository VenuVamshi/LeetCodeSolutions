class Solution:
    def searchMatrix(self, matrix: list[list[int]], target: int) -> bool:

        rows, cols = len(matrix), len(matrix[0])
        left,right = 0, rows * cols -1

        while left <= right :
            mid = left + (right- left) // 2
            row,col = mid // cols , mid % cols

            cur = matrix[row][col]

            if cur == target : return True
            elif cur < target : left  = mid + 1
            else : right = mid-1
        
        return False
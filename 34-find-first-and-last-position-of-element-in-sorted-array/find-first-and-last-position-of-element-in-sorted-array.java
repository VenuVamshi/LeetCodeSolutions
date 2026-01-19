class Solution {
    int firstOccure(int[] A,int target)
    {
        int low = 0;
        int high = A.length-1;
        int first = -1;
        while(low <= high)
        {
            int mid = low +((high - low)/2);
            if(A[mid] == target)
            {
                first = mid;
                high = mid-1;
            }
            else if(A[mid] > target)
                high = mid-1;
            else
                low = mid+1;
        }
        return first;
    }
int lastOccure(int[] A,int target)
    {
        int low = 0;
        int high = A.length-1;
        int last = -1;
        while(low <= high)
        {
            int mid = low +((high - low)/2);
            if(A[mid] == target)
            {
                last = mid;
                low = mid+1;
            }
            else if(A[mid] > target)
                high = mid-1;
            else
                low = mid+1;
        }
        return last;
    }
    public int[] searchRange(int[] nums, int target) {
        int[] arr = new int[2];
        arr[0] = firstOccure(nums,target);
        arr[1] = lastOccure(nums,target);
        return arr;
    }
}
class Solution {
    public int missingNumber(int[] nums) {
        for(int i = 0; i<nums.length+1;i++)
        {
            int j = 0;
            while(j < nums.length)
            {
                if(i == nums[j])
                    break;
                j++;
            }
            if(j == nums.length)
                return i;
        }
        return -1;

    }
}
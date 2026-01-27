class Solution {
    public int majorityElement(int[] nums) {
        // int maxele = 0;
        // for(int i = 0; i < nums.length; i++){
        //     if(nums[i] > maxele)
        //     maxele = nums[i]; 
        // }
        // int[] C = new int[maxele + 1];
        // Arrays.fill(C,0);
        // for(int i = 0; i < nums.length; i++){
        //     C[nums[i]]++;
        // }
        // int maxfq = -1;
        // int result = -1;
        // for(int i = 0; i < maxele; i++){
        //     if(C[i] > maxfq){
        //         maxfq = C[i];
        //         result = i;
        //     }
        // }
        // return result;



       
       int me = 0;
       int vote = 0;
       for(int i = 0; i < nums.length; i++){
            if(vote == 0) me = nums[i];
            if(me == nums[i]) vote++;
            else             vote--;
       }
       return me;
    }
}
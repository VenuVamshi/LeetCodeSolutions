class Solution {
    public int removeElement(int[] nums, int val) {
		int i = 0;
		int effectivelength = nums.length;
		while(i < effectivelength ){
			if(nums[i] == val){
				for(int j = i; j < effectivelength-1 ; j++)
					nums[j] = nums[j + 1];
				effectivelength--;
			}
			else
				i++;
		}
		return effectivelength ;
       
    }
}
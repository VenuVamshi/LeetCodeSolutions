class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        gSum = curSum = nums[0]
        for i,num in enumerate(nums):
            if i == 0: continue
            curSum = max(curSum + num, num)
            gSum = max(gSum,curSum)
        return gSum
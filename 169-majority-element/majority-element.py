class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        #Init Req DSs
        candEle,voteBal = 0, 0
        #Traverse List
        for num in nums:
            #edge case
            if voteBal == 0: candEle = num
            #voteUpdate
            if candEle == num : voteBal += 1
            else : voteBal -= 1
        
        return candEle
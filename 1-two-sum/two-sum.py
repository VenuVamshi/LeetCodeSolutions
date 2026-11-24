class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        #S1-Init Dictionary
        val_idx = {}
        #S2 Traverse The List
        for i,num in  enumerate(nums):
            req_val = target - num
            #Case 1-Req val in List
            if req_val in val_idx:
                return [i,val_idx[req_val]]
            #else case
            else:
                val_idx[num] = i
        return []


        
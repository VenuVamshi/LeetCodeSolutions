class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        val_idx = {}
        for i,num in  enumerate(nums):
            req_val = target - num
            if req_val in val_idx:
                return [i,val_idx[req_val]]
            else:
                val_idx[num] = i
        return []


        
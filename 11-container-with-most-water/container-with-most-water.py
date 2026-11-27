class Solution:
    def maxArea(self, height: list[int]) -> int:

        l,h,gMax = 0,len(height)-1,0

        while l < h:

            w = h - l
            H = min(height[l],height[h])
            curMax = w * H

            gMax = max(gMax,curMax)

            if height[l] < height[h]: l += 1
            else: h -= 1
        
        return gMax
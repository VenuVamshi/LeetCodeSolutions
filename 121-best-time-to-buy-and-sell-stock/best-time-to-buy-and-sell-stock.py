class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        buyPrice = prices[0];#MinPrice in all prev days 
        maxProfit = 0;#Global maxProfit

        for day in range(1,len(prices)):
            #calculate current profit
            curProfit = prices[day] - buyPrice
            #update Global variables 
            maxProfit = max(maxProfit,curProfit)
            #update buyPrice 
            buyPrice = min(buyPrice,prices[day])
        return maxProfit
    

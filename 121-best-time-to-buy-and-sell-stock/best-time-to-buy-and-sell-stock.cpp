class Solution {
public:

    int maxProfit(vector<int>& prices) {

        int buyPrice = prices[0];//MinPrice in all prev days 
        int maxProfit = 0;//Global maxProfit

        for (int day = 1 ; day < prices.size(); day++){
            //calculate current profit
            int curProfit = prices[day] - buyPrice;
            //update Global variables 
            maxProfit = max(maxProfit,curProfit);
            //update buyPrice 
            buyPrice = min(buyPrice,prices[day]);
        }
        return maxProfit;
    }
};
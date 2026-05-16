class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int i=0, j=i+1;
        while (i<=j and (i < prices.size()-1 and j < prices.size())){
            if(prices[i] <= prices[j]){
                int tempProfit = prices[j] - prices[i];              
                profit = max(profit, tempProfit);
                j++;
            }else {
                i++;
                
            }
        }
        return profit;
    }
};
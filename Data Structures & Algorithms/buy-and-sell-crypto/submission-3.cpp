class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int i=0, j=i+1;
        while (i<=j){
            if(i < prices.size()-1 and j < prices.size() and prices[i] <= prices[j]){
                int tempProfit = prices[j] - prices[i];              
                profit = max(profit, tempProfit);
                j++;
            }else {
                if(i < prices.size()-1 and j < prices.size()){
                    i++;
                }else {
                    break;
                }
            }
        }
        return profit;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int profit = 0;

        int buyPoint = prices[0];

        for(int i=1;i<n;i++){
           if(prices[i] < buyPoint){
            buyPoint = prices[i];
           }
           else{
            profit = max(profit,prices[i]-buyPoint);
           }
        }

        return profit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int buy=INT_MAX;
        int profit=INT_MIN;
        int sell =0;
        for(int i=0;i<n;i++){
            buy=min(buy,prices[i]);
            sell = prices[i]-buy;
            profit = max(sell,profit);
        }
        
        return profit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int buy=INT_MAX;
        int sell=INT_MIN;
        int profit =0;
        for(int i=0;i<n;i++){
            buy=min(buy,prices[i]);
            profit = prices[i]-buy;
            sell = max(sell,profit);
        }
        
        return sell;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxV = 0;
        int low = 2e5;
        for (int i = 0; i < prices.size(); i++) {
            maxV = max(maxV, prices[i] - low);
            low = min(low, prices[i]);
        }
        return maxV;
    }
};

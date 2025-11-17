class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lastHold = -4e8, lastNotHold = 0;
        for (int i = 0; i < prices.size(); i++) {
            int hold = max(lastHold, lastNotHold - prices[i]);
            int notHold = max(lastNotHold, lastHold + prices[i]);
            lastHold = hold;
            lastNotHold = notHold;
        }
        return lastNotHold;
    }
};

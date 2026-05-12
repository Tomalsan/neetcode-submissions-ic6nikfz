class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof=0;
        int l=0,r=0;
        while(r<prices.size()-1){
            if(prices[l]>prices[r])l=r;
            r++;
            prof=max(prof,prices[r]-prices[l]);

        }
        return prof;
    }
};

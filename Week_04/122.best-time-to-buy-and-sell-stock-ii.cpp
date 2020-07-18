class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //所有上涨交易日都买卖，所有下跌交易日都不操作
        int result = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                result+= prices[i]-prices[i-1];
            }
        }
        return result;
    }
};

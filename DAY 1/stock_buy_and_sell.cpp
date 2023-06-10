class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>nextmax;
        int maxi=-1;
        for(int j=prices.size()-2;j>=0;j--){
               maxi = max(prices[j+1],maxi);
               nextmax.push_back(maxi);
        }
        reverse(nextmax.begin(),nextmax.end());
        int maxprofit=0;
        for(int k=0;k<nextmax.size();k++){
            int profit= nextmax[k]-prices[k];
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
        
       
};

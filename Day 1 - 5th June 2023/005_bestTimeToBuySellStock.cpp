#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
            
        int num = prices[0];
        // int min_val;
        // int flag = 0;
        int maxprofit = 0;
        
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < num)
            {
                num = prices[i];
                // flag = 1;
                continue;
            }
            
            if((prices[i] - num) > maxprofit) 
            {
                maxprofit = prices[i] - num;
            }
        }
        return maxprofit;
}
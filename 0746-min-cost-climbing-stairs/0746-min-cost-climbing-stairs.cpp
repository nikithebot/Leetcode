class Solution {
public:
    int minCost(vector<int>& cost, int index, vector<int>& dp){
        if(index >= cost.size()){
            return 0;
        }

        if(dp[index] != INT_MAX){
            return dp[index];
        }

        return dp[index] = cost[index] + min(minCost(cost,index+1,dp), minCost(cost,index+2,dp));
    }

    int minCostClimbingStairs(vector<int>& cost){
        vector<int> dp(cost.size()+1, INT_MAX);
        return min(minCost(cost,0,dp), minCost(cost,1,dp));
    }
};
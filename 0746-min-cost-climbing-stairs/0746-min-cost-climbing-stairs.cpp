class Solution {
public:
    int minCost(vector<int>& cost, int index, vector<int>& dp){
        if(index>=cost.size()){
            return 0;
        }

        if(dp[index]!=-1){
            return dp[index];
        }

        return dp[index] = cost[index]+min(minCost(cost, index+1,dp), minCost(cost, index+2,dp));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int mini = INT_MAX;
        vector<int> dp(cost.size()+1, -1);
        mini = min(minCost(cost,0,dp), minCost(cost,1,dp));
        return mini;
    }
};
class Solution {
public:
    int minCost(int n, vector<int>& costs, int index, vector<int>& dp){
        if(index == n){
            return 0;
        }

        if(dp[index] != INT_MAX){
            return dp[index];
        }

        int one=INT_MAX, two=INT_MAX, three=INT_MAX;

        if(index+1 <= n){
            one = costs[index]+1+minCost(n,costs,index+1,dp);
        }

        if(index+2 <= n){
            two = costs[index+1]+4+minCost(n,costs,index+2,dp);
        }

        if(index+3 <= n){
            three = costs[index+2]+9+minCost(n,costs,index+3,dp);
        }

        return dp[index] = min(one,min(two,three));
    }

    int climbStairs(int n, vector<int>& costs){
        vector<int> dp(n+1,INT_MAX);
        return minCost(n,costs,0,dp);
    }
};
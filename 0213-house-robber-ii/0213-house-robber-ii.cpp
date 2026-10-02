class Solution {
public:
    int money(vector<int>& nums, int index, int end, vector<int>& dp){
        if(index > end){
            return 0;
        }

        if(dp[index] != -1){
            return dp[index];
        }

        int take = nums[index]+money(nums,index+2,end,dp);
        int skip = money(nums,index+1,end,dp);

        return dp[index] = max(take,skip);
    }

    int rob(vector<int>& nums){
        int n = nums.size();
        if(n==1) return nums[0];

        vector<int> dp1(n,-1), dp2(n,-1);
        return max(money(nums,0,n-2,dp1), money(nums,1,n-1,dp2));
    }
};
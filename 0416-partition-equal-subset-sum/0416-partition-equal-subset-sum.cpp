class Solution {
public:
    bool check(vector<int>& nums, int index, int exp, vector<vector<int>>& dp){
        if(index == nums.size()){
            return false;
        }

        if(exp==0){
            return true;
        }

        if(dp[index][exp] != -1){
            return dp[index][exp];
        }

        bool take = false;
        if(nums[index] <= exp){
            take = check(nums,index+1,exp-nums[index],dp);
        }
    
        bool nottake = check(nums,index+1,exp,dp);

        return dp[index][exp] = take || nottake;
    }

    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum&1) return false;

        int exp = sum/2;
        vector<vector<int>> dp(nums.size()+1, vector<int>(exp+1, -1));
        return check(nums,0,exp,dp);
    }
};
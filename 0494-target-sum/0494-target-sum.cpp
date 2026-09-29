class Solution {
public:

    int ways(vector<int>& nums, int target, int index){
        if(index>=nums.size()){
            return (target==0) ? 1 : 0;
        }

        int add = ways(nums, target+nums[index], index+1);
        int sub = ways(nums, target-nums[index], index+1);

        return add+sub;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return ways(nums,target,0);
    }






    //The dp version of this would use something like Offset and the given below explanation gives us wrong answer... buffer-overflow...

    // int ways(vector<int>& nums, int target, int index, vector<vector<int>>& dp){
    //     if(index>=nums.size()){
    //         return (target==0) ? 1 : 0;
    //     }

    //     if(dp[index][target] != -1){
    //         return dp[index][target];
    //     }

    //     int add = ways(nums, target+nums[index], index+1, dp);
    //     int sub = ways(nums, target-nums[index], index+1, dp);

    //     return dp[index][target] = add+sub;
    // }

    // int findTargetSumWays(vector<int>& nums, int target){
    //     vector<vector<int>> dp(nums.size()+1, vector<int>(target+1, -1));
    //     return ways(nums,target,0,dp);
    // }

};
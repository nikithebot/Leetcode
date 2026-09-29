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
};
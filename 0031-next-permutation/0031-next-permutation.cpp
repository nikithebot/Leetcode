class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        
        //looking for the breaking point...
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                ind = i;
                break;
            }
        }

        //if permutation is last...
        if(ind == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        //putting next number...
        for(int i=n-1; i>ind; i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }

        //reverse the rest of the array...
        reverse(nums.begin()+ind+1, nums.end());
        return;
    }
};
class Solution {
public:
    int findfirst(vector<int>& nums, int target){
        int ans = -1;
        int low=0, high=nums.size()-1;

        while(low<=high){
            int mid = low+(high-low)/2;

            if(nums[mid]>=target){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        if(ans!=-1 && nums[ans]==target) return ans;
        else return -1;
    }

    int findlast(vector<int>& nums, int target){
        int ans = -1;
        int low=0, high=nums.size()-1;

        while(low<=high){
            int mid = low+(high-low)/2;

            if(nums[mid]<=target){
                ans = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

        if(ans!=-1 && nums[ans]==target) return ans;
        else return -1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findfirst(nums, target);
        int last = findlast(nums, target);
        return {first, last};
    }
};
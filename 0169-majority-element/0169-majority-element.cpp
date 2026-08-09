class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's Voting Algorithm...
        int el=0, count=0;
        for(int i=0; i<nums.size(); i++){
            if(count==0){
                el = nums[i];
                count = 1;
            }else{
                if(nums[i]==el) count++;
                else count--;
            }
        }

        int countx = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==el) countx++;
        }

        return countx > nums.size()/2 ? el : -1;
    }
};
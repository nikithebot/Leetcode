class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0, count2=0;
        int el1=INT_MIN, el2=INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(count1==0 && nums[i]!=el2){
                count1++;
                el1 =  nums[i];
            }else if(count2==0 && nums[i]!=el1){
                count2++;
                el2 = nums[i];
            }else if(nums[i]==el1){
                count1++;
            }else if(nums[i]==el2){
                count2++;
            }else{
                count1--;
                count2--;
            }
        }

        //checking majority elements...
        int x = (nums.size()/3)+1;
        int el1c=0, el2c=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==el1) el1c++;
            if(nums[i]==el2) el2c++;
        }

        vector<int> ans;
        if(el1c >= x) ans.push_back(el1);
        if(el2c >= x) ans.push_back(el2);

        return ans;
    }
};
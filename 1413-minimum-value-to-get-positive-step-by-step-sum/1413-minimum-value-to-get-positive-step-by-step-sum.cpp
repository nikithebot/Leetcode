class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mini = INT_MAX;
        int sum = 0;
        bool neg = false;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0) neg = true;
            sum += nums[i];
            mini = min(mini,sum);
        }

        if(mini > 0) mini = 0;
        return neg ? abs(mini)+1 : 1;
    }
};
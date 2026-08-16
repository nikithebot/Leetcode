class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xorr=0, axorr=0;
        for(int i=0; i<n; i++){
            axorr ^= i;
            xorr ^= nums[i];
        }
        axorr ^= n;
        return axorr^xorr;
    }
};
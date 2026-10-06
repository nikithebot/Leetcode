class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> st, temp;
        for(int i=1; i<=k; i++){
            st.insert(i);
        }

        int op = 0;
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]>=1 && nums[i]<=k){
                temp.insert(nums[i]);
            }
            
            op++;
            if(st==temp) break;
        }

        return op;
    }
};
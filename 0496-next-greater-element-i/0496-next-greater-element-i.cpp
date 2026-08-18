class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> nge(n,-1);
        unordered_map<int,int> mp;
        vector<int> ans(nums1.size());
        stack<int> st;

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(!st.empty()){
                nge[i] = st.top();
                mp[nums2[i]] = st.top();
            }else{
                mp[nums2[i]] = -1;
            }
            st.push(nums2[i]);
        }

        for(int i=0; i<nums1.size(); i++){
            ans[i] = mp[nums1[i]];
        }

        return ans;
    }
};
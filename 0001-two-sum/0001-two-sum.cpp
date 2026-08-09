class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        for(int i=0; i<nums.size(); i++) arr.push_back({nums[i],i});
        sort(arr.begin(),arr.end());

        int i=0, j=nums.size()-1;
        while(i<j){
            if(arr[i].first+arr[j].first>target){
                j--;
            }else if(arr[i].first+arr[j].first<target){
                i++;
            }else{
                return {arr[i].second,arr[j].second};
            }
        }

        return {-1,-1};
    }
};
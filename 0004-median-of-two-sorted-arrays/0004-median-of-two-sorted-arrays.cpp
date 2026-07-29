class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int m = nums1.size(), n = nums2.size();
        int i=0, j=0;
        while(i!=m && j!=n){
            if(nums1[i]>nums2[j]){
                nums.push_back(nums2[j]);
                j++;
            }else{
                nums.push_back(nums1[i]);
                i++;
            }
        }

        while(i<m){
            nums.push_back(nums1[i]);
            i++;
        }

        while(j<n){
            nums.push_back(nums2[j]);
            j++;
        }

        double med;
        int x = nums.size()/2;
        if(nums.size()%2==0){ 
            med = (nums[x]+nums[x-1])/2.0;
        }else{
            med = nums[x];
        }
        return med;
    }
};
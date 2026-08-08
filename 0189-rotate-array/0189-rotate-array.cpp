class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(); 
        if(n==0) return;
        k = k%n;
        if(k==0) return;
        int x = n-k;
        reverse(nums.begin(),nums.begin()+x);
        reverse(nums.begin()+x,nums.end());
        reverse(nums.begin(),nums.end());

        // 1 2 3 4 5 6 
        // 4 3 2 1 5 6
        // 4 3 2 1 6 5
        // 5 6 1 2 3 4 
        // 5 6 1 2 3 4
    }
};



// class Solution {
// public:
//     void solve(vector<int>& nums, int n){
//         int prev = nums[n-1], next;
//         for(int i=0; i<n; i++){
//             next = nums[i];
//             nums[i] = prev;
//             prev = next;
//         }
//     }

//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size(); 
//         k = k%n;
//         for(int i=0; i<k; i++){
//             solve(nums, n);
//         }
//         return;
//     }
// };
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map<char,int> mp;
//         int maxi = 0;
//         int i=0, j=0;
//         while(j<s.size()){
//             mp[s[j]]++;
//             while(mp[s[j]]>1){
//                 mp[s[i]]--;
//                 i++;
//             }
//             maxi = max(maxi,j-i+1);
//             j++;
//         }
//         return maxi;
//     }
// };





//striver...
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hsh(256,-1);
        int n = s.size();
        int l=0, r=0, maxlen=0;

        while(r<n){
            if(hsh[s[r]] != -1){
                if(hsh[s[r]] >= l){
                    l = hsh[s[r]]+1;
                }
            }
            int len = r-l+1;
            maxlen = max(len,maxlen);
            hsh[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};
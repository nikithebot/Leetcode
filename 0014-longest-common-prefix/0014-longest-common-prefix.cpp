class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(int i=1; i<strs.size(); i++){
            string curr = strs[i];
            while(curr.find(prefix) != 0){
                prefix.pop_back();
                if(prefix.size()==0) return "";
            }
        }
        return prefix;
    }
};
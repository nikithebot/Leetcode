class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int s = strs.size();
        int x = strs[0].size();

        int num = 0;
        int del = 0;
        for(int i=0; i<x; i++){
            for(int j=1; j<s; j++){
                if(strs[j][i] < strs[j-1][i]){
                    del++;
                    break;
                }
            }
        }

        return del;
    }
};
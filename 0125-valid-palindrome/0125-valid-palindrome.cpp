class Solution {
public:
    bool isPalindrome(string s) {
        string word = "";
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                word += tolower(s[i]);
            }
        }

        int i=0, j=word.size()-1;
        while(i<j){
            if(word[i] != word[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
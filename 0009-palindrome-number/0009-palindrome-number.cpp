class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        int rev = 0;
        if(x<0) return 0;
        while(x>0){
            int dig = x%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            rev = rev*10+dig;
            x /= 10;
        }
        return num==rev;
    }
};
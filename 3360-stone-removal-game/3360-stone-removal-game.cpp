class Solution {
public:
    bool canAliceWin(int n) {
        int x = 10;
        bool flag = true;

        while(n >= x){
            n -= x;
            x--;
            flag ^= 1;
        }

        if(flag) return 0;
        else return 1;
    }
};
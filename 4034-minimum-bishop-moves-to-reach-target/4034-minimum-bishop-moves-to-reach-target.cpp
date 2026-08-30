class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int sc = abs(source[0]-source[1]);
        int tc = abs(target[0]-target[1]);
        
        //not possible...
        if((sc%2==0 && tc%2==1) || (sc%2==1 && tc%2==0)) return -1;

        //1 & 2...
        if(abs(source[0]-target[0]) == abs(source[1]-target[1])) return 1;
        else return 2;
    }
};
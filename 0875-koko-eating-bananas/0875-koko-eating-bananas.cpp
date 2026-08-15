class Solution {
public:
    long long hours(vector<int>&piles, int speed){
        long long time=0;
        for(auto bananas : piles){
            time += (1LL*bananas+speed-1)/speed;
        }
        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h){
        int n = piles.size();
        int low=1, high=*max_element(piles.begin(),piles.end());
        int ans = high;

        while(low<=high){
            int mid = low+(high-low)/2;
            long long time = hours(piles,mid);

            if(time<=h){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};
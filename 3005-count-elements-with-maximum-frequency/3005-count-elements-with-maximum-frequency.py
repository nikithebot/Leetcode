class Solution(object):
    def maxFrequencyElements(self, nums):
        freq = {};

        for x in nums:
            freq[x] = freq.get(x,0)+1;
        
        maxi = 0;
        for x in freq:
            if(freq[x]>maxi):
                maxi = freq[x];

        ans = 0;
        for x in freq:
            if(freq[x]==maxi):
                ans += freq[x];

        return ans;
            

        
class Solution {
public:
    int hammingWeight(uint32_t n) { 
        int ans=0;
        while(n){
            n=n&(n-1); //we basically 0 the last bit and then and. By doing this in each iteration we basically remove the number of zeros from the left to the last 1. SO ,we alawys encounter a 1 in the last bit/lsb in each loop.
            ans+=1;
        }
 return ans;
    }
};

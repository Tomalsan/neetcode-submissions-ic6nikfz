class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int maxlen = 1 ;
    int n = s.length();
            if(n==0)return 0;
            if(n==1) return 1;
    unordered_map<char,int> m;
    m[s[0]]=0;
    int l=0,r=0;
    while(r<n-1){
        r++;
    if(m.count(s[r])&&m[s[r]]>=l){
        l=m[s[r]]+1;
    }
        m[s[r]]=r;
        maxlen=max(maxlen,r-l+1);
    }
    return maxlen;
    }
};

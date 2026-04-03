class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int> freq(26, 0); 

       for(auto x:s){
        freq[x-97]++;
       }

       for(auto x:t){
        freq[x-97]--;
       }

       for(auto x:freq){
        if(x)return false;
       }
       return true;
    }
};

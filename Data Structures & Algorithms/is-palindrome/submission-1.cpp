class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int a=0;
        int b=s.length()-1;
        for(;;){
            while(a < b && !isalnum(s[a]))a++;
            while(a < b && !isalnum(s[b]))b--;
            if(a>=b)return true;
            if(s[a]!=s[b]){
                return false;
            }
            else{
                a++;
                b--;
            }

            
        }
        return true;
    }
};

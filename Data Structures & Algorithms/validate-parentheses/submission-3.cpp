class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        bool n=false;
        stack<char> c;
        for(int i=0;i<len;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')c.push(s[i]);
            else if(c.empty())return false;
            else{
                char b=c.top();
                if((s[i]==')'&&b=='(')||(s[i]==']'&&b=='[')||(s[i]=='}'&&b=='{'))c.pop();
                else return false;
            }
        }
        return c.empty();
    }
};

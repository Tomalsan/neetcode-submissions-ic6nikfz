class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s1;
        for(auto x:nums){
            s1.insert(x);
        }
        if(s1.size()!=nums.size())return true;
        return false;
    }
};
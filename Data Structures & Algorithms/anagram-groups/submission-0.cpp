class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mp;
        vector<vector<string>> ret;
        for (int i = 0; i < strs.size(); i++) {
            vector<int> freq(26, 0);  // freq vector initialized
            string imdvar = strs[i];
            for (auto x : imdvar) {
                freq[x - 97]++;
            }
            auto it = mp.find(freq);
            if (it == mp.end()) {
                mp[freq] = {strs[i]};
            } else {
                it->second.push_back(strs[i]);
            }
            // could've used mp[freq].push_back(strs[i]) in place of line 12-17 as mp[value] already
            // would've createad an empty string in case the key was non existing in the map . So ,
            // then mp[freq].push_back(strs[i]) valid in both cases whether the key was in the map
            // or not.
        }

        for (auto it = mp.begin(); it != mp.end(); ++it){
            ret.push_back(it->second);
        }

        return ret;
    }
};

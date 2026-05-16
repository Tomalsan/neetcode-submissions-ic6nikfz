class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;

        int l = 0, r = 0;
        int maxFreq = 0;
        int maxLen = 0;

        while (r < s.length()) {
            // include current character
            freq[s[r]]++;

            // update max frequency in current window
            maxFreq = max(maxFreq, freq[s[r]]);

            // if window invalid, shrink from left
            while ((r - l + 1) - maxFreq > k) {
                freq[s[l]]--;
                l++;
            }

            // update best answer
            maxLen = max(maxLen, r - l + 1);

            r++;
        }

        return maxLen;
    }
};
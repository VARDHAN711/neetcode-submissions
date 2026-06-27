class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};
        int left = 0, maxlen = 0, maxfreq = 0;
        for(int i=0; i<s.size(); i++){
            freq[s[i] - 'A']++;
            maxfreq = max(maxfreq, freq[s[i] - 'A']);
            if((i-left+1) - maxfreq > k){
                freq[s[left] - 'A']--;
                left++;
            }
            maxlen = max(maxlen, i-left+1);
        }
        return maxlen;
    }
};

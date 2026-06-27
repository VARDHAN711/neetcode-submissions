class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        int freq1[26] = {0}, freq2[26] = {0};
        for(int i=0; i<s1.size(); i++){
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        int matches = 0;
        for(int i=0; i<26; i++){
            if(freq1[i] == freq2[i]) matches++;
        }
        int left = 0;
        for(int i=s1.size(); i<s2.size(); i++){
            if(matches == 26) return true;
            int r = s2[i] - 'a';
            freq2[r]++;
            if(freq2[r] == freq1[r]) matches++;
            else if(freq2[r] == freq1[r]+1) matches--;
            int l = s2[left] - 'a';
            freq2[l]--;
            if(freq2[l] == freq1[l]) matches++;
            else if(freq2[l] == freq1[l]-1) matches--;
            left++;
        }
        return matches == 26;
    }
};

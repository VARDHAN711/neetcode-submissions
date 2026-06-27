class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int k;
        for(k=0; k<min(word1.size(), word2.size()); k++){
            s += word1[k];
            s += word2[k];
        }
        if(word1.size() > word2.size()){
            s.append(word1.substr(k));
        }
        else{
            s.append(word2.substr(k));
        }
        return s;
    }
};
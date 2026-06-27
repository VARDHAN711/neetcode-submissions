class Solution {
public:
    string decodeString(string s) {
        stack<int> freq;
        stack<string> str;
        string curstr = "";
        int curnum = 0;
        for(char c: s){
            if(isdigit(c)){
                curnum = curnum * 10 + (c - '0');
            }
            else if(c == '['){
                freq.push(curnum);
                str.push(curstr);
                curnum = 0;
                curstr = "";
            }
            else if(c == ']'){
                int n = freq.top();
                freq.pop();
                string decoded = str.top();
                str.pop();
                while(n > 0){
                    decoded += curstr;
                    n--;
                }
                curstr = decoded;
            }
            else curstr += c;
        }
        return curstr;
    }
};
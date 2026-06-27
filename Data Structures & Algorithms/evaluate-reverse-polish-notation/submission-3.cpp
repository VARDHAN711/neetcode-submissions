class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int first, sec;
        for(string& c: tokens){
            if(isdigit(c[0]) || (c[0] == '-' && c.size() > 1)){
                st.push(stoi(c));
            }
            else{
                first = st.top();
                st.pop();
                sec = st.top();
                st.pop();
                if(c[0] == '+'){
                    st.push(sec + first);
                }
                else if(c[0] == '-'){
                    st.push(sec - first);
                }
                else if(c[0] == '/'){
                    st.push(sec / first);
                }
                else{
                    st.push(sec * first);
                }
            }
        }
        return st.top();
    }
};

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0; i<operations.size(); i++){
            if(isdigit(operations[i][0]) || operations[i][0] == '-'){
                st.push(stoi(operations[i]));
            }
            else if(operations[i][0] == 'C'){
                st.pop();
            }
            else if(operations[i][0] == 'D'){
                st.push(2*st.top());
            }
            else{
                int first = st.top();
                st.pop();
                int sec = st.top();
                st.push(first);
                st.push(first + sec);
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
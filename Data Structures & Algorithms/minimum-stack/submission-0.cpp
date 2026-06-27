class MinStack {
    stack<int> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> temp(st);
        int low = INT_MAX;
        while(!temp.empty()){
            low = min(low, temp.top());
            temp.pop();
        }
        return low;
    }
};

class MyQueue {
    stack<int> s1, s2;
    void transfer(){
        if(s1.empty()){
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
    }
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s2.push(x);
    }
    
    int pop() {
        transfer();
        int val = s1.top();
        s1.pop();
        return val;
    }
    
    int peek() {
        transfer();
        return s1.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
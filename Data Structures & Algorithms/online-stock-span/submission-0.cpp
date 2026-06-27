class StockSpanner {
    stack<int> st;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        st.push(price);
        stack<int> temp(st);
        int count = 0;
        while(!temp.empty() && temp.top() <= price){
            count++;
            temp.pop();
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
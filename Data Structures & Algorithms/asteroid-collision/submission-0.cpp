class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i : asteroids){
            bool destroyed = false;
            while(!st.empty() && i < 0 && st.top() > 0){
                if(abs(st.top()) == abs(i)){
                    st.pop();
                    destroyed = true;
                    break;
                } else if(abs(st.top()) > abs(i)){
                    destroyed = true;
                    break;
                } else {
                    st.pop(); // right-mover destroyed, left-mover keeps going
                }
            }
            if(!destroyed) st.push(i);
        }
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
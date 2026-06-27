class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size()-1, maxar = INT_MIN, ar;
        while(i<j){
            ar = (j-i) * min(heights[i], heights[j]);
            maxar = max(maxar, ar);
            if(heights[i] < heights[j]) i++;
            else j--;
        }
        return maxar;
    }
};

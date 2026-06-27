class Solution {
public:
    int trap(vector<int>& height) {
        int i=0, j=height.size()-1;
        int imax = 0, jmax = 0, water = 0;
        while(i<j){
            if(height[i] < height[j]){
                if(height[i] >= imax){
                    imax = height[i];
                }
                else{
                    water += imax - height[i];
                }
                i++;
            }
            else{
                if(height[j] >= jmax){
                    jmax = height[j];
                }
                else{
                    water += jmax - height[j];
                }
                j--;
            }
        }
        return water;
    }
};

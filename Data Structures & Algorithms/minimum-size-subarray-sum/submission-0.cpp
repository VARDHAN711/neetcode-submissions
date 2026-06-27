class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, left = 0, minlen = INT_MAX, i = 0;
        while(i<nums.size()){
            sum += nums[i];
            if(sum >= target){
                minlen = min(minlen, i-left+1);
                sum = 0;
                left++;
                i = left;
            }
            else i++;
        }
        if(minlen == INT_MAX) return 0;
        else return minlen;
    }
};
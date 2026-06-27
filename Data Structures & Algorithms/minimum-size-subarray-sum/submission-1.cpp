class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, left = 0, minlen = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            while(sum >= target){
                minlen = min(minlen, i-left+1);
                sum -= nums[left++];
            }
        }
        return minlen == INT_MAX? 0 : minlen;
    }
};
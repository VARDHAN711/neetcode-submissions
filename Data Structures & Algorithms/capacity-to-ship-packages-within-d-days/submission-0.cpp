class Solution {
public:
    int dayneeded(vector<int>& weights, int k){
        int needed = 1;
        int sum = 0;
        for(int w : weights){
            if(sum + w > k){
                needed++;
                sum = 0;
            }
            sum += w;
        }
        return needed;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            int needed = dayneeded(weights, mid);
            if(needed <= days){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};
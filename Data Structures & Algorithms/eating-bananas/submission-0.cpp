class Solution {
public:
    int totalhrs(vector<int>& piles, int k){
        int hrs = 0;
        for(int pile : piles){
            hrs += (pile + k - 1)/k;
        }
        return hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int ans = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            int hours = totalhrs(piles, mid);
            if(hours <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

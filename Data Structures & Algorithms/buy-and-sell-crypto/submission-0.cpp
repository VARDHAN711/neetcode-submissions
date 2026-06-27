class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, mp = 0;
        for(int price: prices){
            minPrice = min(minPrice, price);
            mp = max(mp, price - minPrice);
        }
        return mp;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i : nums){
            mp[i]++;
        }
        auto max = max_element(mp.begin(), mp.end(), [](const auto& a, const auto& b){
            return a.second < b.second;
        });
        return max->first;
    }
};
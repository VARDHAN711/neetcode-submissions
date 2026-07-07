class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size()/2;
        for(int i: nums) mp[i]++;

        for(auto p: mp){
            if(p.second > n) return p.first;
        }
        return 0;
    }
};
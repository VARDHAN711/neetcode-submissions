class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int n: nums) mp[n]++;

        vector<vector<int>> bucket(nums.size()+1);
        for(auto&[num, count] : mp){
            bucket[count].push_back(num);
        }
        vector<int> res;
        for(int i=bucket.size()-1; i>=0 && res.size()<k; i--){
            for(int j: bucket[i]){
                res.push_back(j);
            }
        }
        return res;
    }
};

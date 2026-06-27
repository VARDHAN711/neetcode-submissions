class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        erase(nums, val);
        int count = 0;
        return nums.size();
    }
};
class Solution {
public:
    void myreverse(vector<int>& nums, int i, int j){
        while(i<j){
            swap(nums[i], nums[j]);
            i++; j--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if(k==0) return;
        myreverse(nums, 0, n-1);
        myreverse(nums, 0, k-1);
        myreverse(nums, k, n-1);
    }
};
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        int j=0;
        for(int i=0; i<nums1.size() && j < n; i++){
            if(nums1[i] > nums2[j]){
                nums1.insert(nums1.begin()+i, nums2[j]);
                j++;
            }
        }
        while(j < n){
            nums1.push_back(nums2[j++]);
        }
    }
};
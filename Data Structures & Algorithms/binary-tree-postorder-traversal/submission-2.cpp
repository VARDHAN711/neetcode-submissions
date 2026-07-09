/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> res;
        stack<TreeNode*> st;
        TreeNode* curr = root;
        TreeNode* visited = nullptr;

        while(!st.empty() || curr){
            if(curr){
                st.push(curr);
                curr = curr->left;
            }
            else{
                TreeNode* peak = st.top();
                if(peak->right && visited != peak->right){
                    curr = peak->right;
                }
                else{
                    res.push_back(peak->val);
                    visited = st.top();
                    st.pop();
                }
            }
        }
        return res;
    }
};
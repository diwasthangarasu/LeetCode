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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode *curr=root;
        stack<TreeNode* > stk;
        while(curr || !stk.empty()){
            while(curr){
                res.push_back(curr->val);
                stk.push(curr);
                curr=curr->left;
            }
            curr=stk.top();
            stk.pop();
            curr=curr->right;

        }
        return res;
    }
};
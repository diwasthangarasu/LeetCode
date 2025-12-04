class Solution {
public:
    TreeNode* curr;  

    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(0);  
        curr = dummy;
        inorder(root);
        return dummy->right; 
    }

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);
        curr->right = new TreeNode(root->val);
        curr = curr->right;

        inorder(root->right);
    }
};

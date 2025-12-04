class Solution {
public:
    TreeNode* curr=new TreeNode(0);  
    TreeNode* res=curr;
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return res->right; 
    }

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);
        curr->right = new TreeNode(root->val);
        curr = curr->right;

        inorder(root->right);
    }
};

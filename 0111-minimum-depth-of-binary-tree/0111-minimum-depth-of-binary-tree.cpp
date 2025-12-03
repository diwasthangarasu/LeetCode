class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;

        // If left subtree is NULL, go only right
        if (root->left == NULL) 
            return minDepth(root->right) + 1;

        // If right subtree is NULL, go only left
        if (root->right == NULL) 
            return minDepth(root->left) + 1;

        // If both children exist
        return min(minDepth(root->left), minDepth(root->right)) + 1;
    }
};

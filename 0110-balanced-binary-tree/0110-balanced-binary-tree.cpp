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
    bool a=true;
    bool isBalanced(TreeNode* root) {
        depth(root);
        return a;
    }
    int depth(TreeNode* curr){
        if(curr==NULL) return 0;
        if(curr->left==NULL && curr->right == NULL) return 1;
        int b=depth(curr->left)+1;
        int c=depth(curr->right)+1;
        if(abs(b-c)>1) a=false;
        return max(b,c);
    }
};
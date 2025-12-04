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
    int res=0;
    int sum=0;
    int sumNumbers(TreeNode* root) {
        inor(root);
        return res;
    }
    void inor(TreeNode* root){
        if(root==NULL ) return;
        sum=sum*10 + root->val;
        if(root->left==NULL && root->right==NULL) res+=sum;
        inor(root->left);
        inor(root->right);
        sum/=10;
    }
};
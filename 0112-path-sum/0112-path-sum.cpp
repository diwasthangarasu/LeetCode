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
    bool a=false;
    int sum=0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        suma(root,targetSum);
        return a;
    }
    void suma(TreeNode* root,int target){
        if(root==NULL ) return;
        sum+=root->val;
        if(root->right == NULL && root->left==NULL){
            if(sum==target) a=true;
        }
        suma(root->left,target);
        suma(root->right,target);
        sum-=root->val;
    }
};
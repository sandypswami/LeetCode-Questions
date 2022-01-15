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
    bool isSymmetric(TreeNode* root) {
        return mirror(root->left,root->right);
    }
    bool mirror(TreeNode* left,TreeNode* right){
        if(right==NULL || left==NULL){
            return right==left;
        }
        if(right->val!=left->val){
            return false;
        }
        return mirror(left->left,right->right) && mirror(left->right,right->left);
    }
};
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
    bool preOrder(TreeNode* root,int x){
        //EC/BC:Given Emoty Tree/reched null;
        if(root == NULL) return true;
        if(root->val != x) return false;
        
        return preOrder(root->left,x) && preOrder(root->right,x);
    }
    bool isUnivalTree(TreeNode* root) {
        return preOrder(root,root->val);
    }
};
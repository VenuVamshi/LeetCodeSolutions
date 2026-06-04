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
    bool pre(TreeNode* r,int x){
        //EC/BC:Given Emoty Tree/reched null;
        if(r == NULL) return true;
        if(r->val != x) return false;
        
        return pre(r->left,x) && pre(r->right,x);
    }
    bool isUnivalTree(TreeNode* root) {
        return pre(root,root->val);
    }
};
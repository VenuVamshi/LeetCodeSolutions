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
class Info{
    public:
    bool isBST;
    int sum;//comparing variable
    int max;
    int min;
    Info(bool isBST, int sum, int max, int min):isBST(isBST),sum(sum),max(max),min(min){}
};

class Solution {
public:
    
    int maxSum = 0;

    Info findLargestBST(TreeNode* root){
        if(!root) return Info(true,0,INT_MIN,INT_MAX);
        Info left = findLargestBST(root->left);
        Info right = findLargestBST(root->right);
        if(left.isBST && right.isBST && left.max < root->val && root->val < right.min){
                int curSum = left.sum + right.sum + root->val;
                int curMax = max(root->val, right.max);
                int curMin = min(root->val,left.min);

                if(maxSum < curSum ){
                    maxSum = curSum ;
                }
                return Info(true,curSum,curMax,curMin);
            }
        return Info(false,0,0,0);

    }
    int maxSumBST(TreeNode* root) {
        findLargestBST(root);
        return maxSum;
    }
};
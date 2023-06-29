/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

    int Solution::hasPathSum(TreeNode* A, int B) {
    if(A==NULL) return false;
    if(A->left ==NULL && A->right==NULL){
        if(A->val==B) return true;
        else return false;
    }
    return hasPathSum(A->left,B-A->val) || hasPathSum(A->right,B-A->val);
}


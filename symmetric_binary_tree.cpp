/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//  int checksymmetric(TreeNode*subtree_0, TreeNode*subtree_1) {
//     if(subtree_0 == NULL && subtree_1) {
//         return 1;
//     } else if(subtree_0 != NULL && subtree_1 != NULL) {
//         return subtree_0->val == subtree_1->val && 
//         checksymmetric(subtree_0->left, subtree_1->right)&&
//         checksymmetric(subtree_0->right, subtree_1->left);
//     }
//     return 0;
// }
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true;
        if (!left || !right) return false;
        return left->val == right->val && isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }
int Solution::isSymmetric(TreeNode* root) {
    
   if (!root) return true;
        return isMirror(root->left, root->right);
}
    // bool isSymmetric(TreeNode* root) {
    //     if (!root) return true;
    //     return isMirror(root->left, root->right);
    // }
    



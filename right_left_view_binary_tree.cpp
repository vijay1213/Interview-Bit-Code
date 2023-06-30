/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void recursion(TreeNode*A, int level, vector<int> &ans) {
     if(A==nullptr) return;
     if(level == ans.size()) {
         ans.push_back(A->val);
     }
     recursion(A->right, level+1, ans);
     recursion(A->left, level+1, ans);
 }
vector<int> Solution::solve(TreeNode* A) {
    vector<int> ans;
    recursion(A, 0, ans);
    return ans;
}

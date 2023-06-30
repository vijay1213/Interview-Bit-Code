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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        bool lefttoright = true;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            vector<int> row(size);
            for(int i = 0; i < size; i++) {
                TreeNode*node = q.front();
                q.pop();

                int index = lefttoright ? i : (size-1-i);// here we see if bool is true we put the 
                // val in same as i but if it is false we reverse it then put in the vector

                row[index] = node->val;// putting the value at a index in row vector
                if(node->left) {
                    q.push(node->left);
                }
                if(node->right) {
                    q.push(node->right);
                }
            }
            lefttoright = !lefttoright;
            ans.push_back(row);

        }
        return ans;
    }
};

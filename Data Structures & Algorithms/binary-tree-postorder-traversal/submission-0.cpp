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
private:
    void travel(TreeNode* r, vector<int>&ans)
    {
        if(!r) return;
        travel(r->left, ans);
        travel(r->right, ans);
        ans.push_back(r->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        travel(root, ans);
        return ans;
    }
};
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
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        int left_depth = diameter(root->left);
        int right_depth = diameter(root->right);
        
        int current_diameter = left_depth + right_depth;
        
        int left_diameter = diameterOfBinaryTree(root->left);
        
        int right_diameter = diameterOfBinaryTree(root->right);
        
        return std::max(current_diameter, std::max(left_diameter, right_diameter));
        
    }
    
    int diameter(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }
        
        int left = diameter(node->left);
        int right = diameter(node->right);
        
        return std::max(left, right) + 1;
    }
};
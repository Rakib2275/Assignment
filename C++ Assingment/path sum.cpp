//path sum
//leetcode
#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // If the tree is empty
        if (!root) {
            return false;
        }

        // Check if we are at a leaf node and if the path sum equals the target
        if (!root->left && !root->right) {
            return root->val == targetSum;
        }

        // Recursively check the left and right subtree, subtracting the current node's value from targetSum
        targetSum -= root->val;
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    }
};

int main() {
    // Manually creating the tree:
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int targetSum = 6;

    Solution solution;
    bool result = solution.hasPathSum(root, targetSum);

    std::cout << "Path with sum " << targetSum << (result ? " exists." : " does not exist.") << std::endl;

    // Clean up memory (optional)
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}



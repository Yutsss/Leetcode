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
class Solution
{
private:
  void helper(TreeNode *root, vector<string> &result, string path)
  {
    path += to_string(root->val);

    if (root->left == nullptr && root->right == nullptr)
    {
      result.push_back(path);
    }
    if (root->right != nullptr)
    {
      path += "->";
      helper(root->right, result, path);
      path.pop_back();
      path.pop_back();
    }
    if (root->left != nullptr)
    {
      path += "->";
      helper(root->left, result, path);
      path.pop_back();
      path.pop_back();
    }
  }

public:
  vector<string> binaryTreePaths(TreeNode *root)
  {
    vector<string> result;
    string path;

    if (root == nullptr)
    {
      return {};
    }

    helper(root, result, path);

    return result;
  }
};
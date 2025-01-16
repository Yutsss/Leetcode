class Solution
{
private:
  void helper(TreeNode *root, int &result)
  {
    if (root == nullptr)
      return;

    if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr)
    {
      result += root->left->val;
    }

    helper(root->right, result);
    helper(root->left, result);
  }

public:
  int sumOfLeftLeaves(TreeNode *root)
  {
    int result = 0;

    helper(root, result);

    return result;
  }
};